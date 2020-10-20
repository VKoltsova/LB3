#include "Massive.h"

int Massive::get_size() {
	return size;
}

int* Massive::get_ms() {
	int* result = new int[size];
	for (int i = 0; i < size; i++) {
		result[i] = ms[i];
	}
	return result;
}

void Massive::add_elem_to_end(int elem) {
	int* new_ms = new int[size + 1];
	for (int i = 0; i < size; i++) {
		new_ms[i] = ms[i];
	}
	new_ms[size] = elem;

	ms = new_ms;

	size++;
}

int Massive::remove_elem_from_end() {
	if (size == 0) {
		return 0; // no elements in massive
	}
	int* new_ms = new int[size - 1];

	size--;

	for (int i = 0; i < size; i++) {
		new_ms[i] = ms[i];
	}

	int removed_elem = ms[size];

	ms = new_ms;

	return removed_elem;
}