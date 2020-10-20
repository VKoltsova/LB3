#include <iostream>
#include "Lab3Utils.h"
#include "Massive.h"
#include "Matrix.h"

#define M 2
#define N 2

int main()
{
    int** mx1_ = Lab3Utils::create_mx(M, N);
    int** mx2_ = Lab3Utils::create_mx(M, N);

    cout << "Please initialize mx1." << endl;
    Lab3Utils::init_mx(M, N, mx1_);

    cout << "Please initialize mx2." << endl;
    Lab3Utils::init_mx(M, N, mx2_);

    Matrix* mx1 = new Matrix(M, N, mx1_);
    Matrix* mx2 = new Matrix(M, N, mx2_);

    cout << "Matrix 1 is:" << endl;
    Lab3Utils::show_mx(M, N, mx1_);

    cout << "Matrix 2 is:" << endl;
    Lab3Utils::show_mx(M, N, mx2_);

    Massive result = (*mx1) & (*mx2);

    int size = result.get_size();
    int* ms = result.get_ms();

    cout << "Result massive is:" << endl;

    for (int i = 0; i < size; i++) {
        cout << ms[i] << " ";
    }

} 

