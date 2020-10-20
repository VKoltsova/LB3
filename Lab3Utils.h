#pragma once

#include <iostream>
using namespace std;

class Lab3Utils {
public:
	static int** create_mx(int m, int n);
	static void init_mx(int m, int n, int** mx);
	static void init_mx_random(int m, int n, int** mx);
	static void show_mx(int m, int n, int** mx);
};