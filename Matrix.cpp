#include "Matrix.h"

int Matrix::get_m() {
	return this->m;
}

int Matrix::get_n() {
	return this->n;
}

int** Matrix::get_mx() {
	int** res_mx = new int* [m];
	
	for (int i = 0; i < m; i++) {
		res_mx[i] = new int[n];
		for (int j = 0; j < n; j++) {
			res_mx[i][j] = this->mx[i][j];
		}
	}

	return res_mx;
}

Massive& operator&(Matrix& mx1, Matrix& mx2) {

	int m = mx1.get_m();
	int n = mx2.get_n();
	int** mx1_ = mx1.get_mx();
	int** mx2_ = mx2.get_mx();


	Massive* result = new Massive();

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mx1_[i][j] == mx2_[i][j]) {
				result->add_elem_to_end(mx1_[i][j]);
			}
		}
	}

	return (*result);
}