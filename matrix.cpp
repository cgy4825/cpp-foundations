#include <iostream>

struct Matrix {
    int rows;
    int cols;
    double* data;        // 指向 rows*cols 个连续的 double
};

// ── 创建：分配内存，并全部置 0 ──────────────────────
Matrix create(int rows, int cols) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    m.data = new double[rows * cols]();   // 注意末尾的 ()：值初始化 → 全 0
    return m;
}

// ── 释放 ────────────────────────────────────────
void destroy(Matrix& m) {
    delete[] m.data;      // 数组必须用 delete[]，不能只用 delete
    m.data = nullptr;     // 置空，防止悬垂指针
    m.rows = 0;
    m.cols = 0;
}

// ── 访问：返回引用，才能赋值 ──────────────────────
double& at(Matrix& m, int i, int j) {
    return m.data[i * m.cols + j];
}

// ── 打印：const 引用传参，不拷贝也不能改 ────────────
void print(const Matrix& m) {
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            std::cout << m.data[i * m.cols + j] << ' ';
        }
        std::cout << '\n';
    }
}
//把所有元素转成v
void fill(Matrix& m,double v){
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            m.data[i * m.cols + j] = v;
        }
    }
}

//矩阵转置
Matrix transpose(const Matrix& m){
    Matrix res = create(m.cols,m.rows);
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            res.data[j*res.cols + i] = m.data[i * m.cols + j];
        }
    }
    return res;
}

int main() {
    Matrix m = create(2, 3);
    at(m, 0, 0) = 1.5;
    at(m, 0, 1) = 2.5;
    at(m, 1, 2) = 9.0;
    print(m);
    Matrix reverse = transpose(m);
    print(reverse);
    fill(m,10);
    print(m);
    // destroy(m);
    // std::cout << m.data[0] << std::endl;   // 访问已释放的内存
    return 0;
}