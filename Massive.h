#pragma once

#include <iostream>
using namespace std;

class Massive {
	int size;
	int* ms;
public:
	Massive() {
		this->ms = new int[0];
		this->size = 0;
	}
	Massive(int size) {
		this->ms = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			ms[i] = 0;
		}
	}
	Massive(const Massive& obj) {
		this->ms = new int[obj.size];
		for (int i = 0; i < obj.size; i++) {
			this->ms[i] = obj.ms[i];
		}
		this->size = obj.size;
	}
	~Massive() {
		delete ms;
	}
	int get_size();
	int* get_ms();

	void add_elem_to_end(int elem);
	int remove_elem_from_end();
};