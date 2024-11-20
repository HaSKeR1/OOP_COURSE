#include <iostream>
#include <vector>

void Merge(int* begin, const int* middle, const int* end) {
	int* buffer = new int[end - begin];
	size_t left_it = 0;
	size_t right_it = 0;
	size_t buf_it = 0;
	size_t left_size = middle - begin;
	size_t right_size = end - middle;
	while (left_it < left_size && right_it < right_size) {
		if (begin[left_it] < middle[right_it]) {
			buffer[buf_it] = begin[left_it];
			left_it++;
		}
		else {
			buffer[buf_it] = middle[right_it];
			right_it++;
		}
		buf_it++;
	}

	while (left_it < left_size) {
		buffer[buf_it] = begin[left_it];
		buf_it++;
		left_it++;
	}

	while (right_it < right_size) {
		buffer[buf_it] = middle[right_it];
		buf_it++;
		right_it++;
	}

	for (size_t i = 0; i < end - begin; i++) {
		begin[i] = buffer[i];
	}
	delete[] buffer;
}

void MergeSort(int* begin, int* end) {
	size_t size = end - begin;
	if (end - begin <= 1) {
		return;
	}

	MergeSort(begin, begin + size / 2);
	MergeSort(begin + size / 2, end);
	Merge(begin, begin + size / 2, end);
}

int main() {
	int* arr = new int[6]{ 2, 1, 4, 2, 6, 3 };
	MergeSort(arr, arr + 6);
	for (size_t i = 0; i < 6; i++) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;
}