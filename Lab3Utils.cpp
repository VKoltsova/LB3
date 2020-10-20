#include "Lab3Utils.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int** Lab3Utils::create_mx(int m, int n) {
	int** result = new int* [m];
	for (int i = 0; i < m; i++) {
		result[i] = new int[n];
	}

	return result;
}

void Lab3Utils::init_mx(int m, int n, int** mx) {
	int temp = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Enter mx[" << i + 1 << "][" << j + 1 << "] :" << endl;
			cin >> mx[i][j];
		}
	}
}

void Lab3Utils::init_mx_random(int m, int n, int** mx) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			mx[i][j] = rand() % 10;
		}
	}
}

void Lab3Utils::show_mx(int m, int n, int** mx) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << mx[i][j] << " ";
		}
		cout << endl;
	}
}