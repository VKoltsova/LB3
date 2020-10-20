#pragma once

#include "Massive.h"
#include <iostream>
using namespace std;

class Matrix {
	int** mx;
	int m; // количество столбцов
	int n; // количество строк
public:
	Matrix(int m, int n) {
		this->m = m;
		this->n = n;

		mx = new int* [m];

		for (int i = 0; i < m; i++) {
			mx[i] = new int[n];
			for (int j = 0; j < n; j++) {
				mx[i][j] = 0;
			}
		}
	}

	Matrix(int m, int n, int** mx) {
		this->m = m;
		this->n = n;

		this->mx = new int* [m];

		for (int i = 0; i < m; i++) {
			this->mx[i] = new int[n];
			for (int j = 0; j < n; j++) {
				this->mx[i][j] = mx[i][j];
			}
		}
	}

	Matrix() : m(2), n(2) {
		this->mx = new int* [2];
		for (int i = 0; i < m; i++) {
			this->mx[i] = new int[n];
			for (int j = 0; j < n; j++) {
				this->mx[i][j] = 0;
			}
		}
	}

	~Matrix() {
		for (int i = 0; i < n; i++) {
			delete this->mx[i];
		}
		delete mx;
	}

	Matrix(const Matrix& obj) {
		this->m = obj.m;
		this->n = obj.n;

		//~Matrix(); // разобраться
		mx = new int* [m];
		for (int i = 0; i < m; i++) {
			mx[i] = new int[n];
			for (int j = 0; j < n; j++) {
				mx[i][j] = obj.mx[i][j];
			}
		}
	}

	friend Massive& operator&(Matrix&, Matrix&);

	int get_m();
	int get_n();
	int** get_mx();
};