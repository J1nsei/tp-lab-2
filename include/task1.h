#include <string.h>

template <class T>
bool comp(T left, T right) 
{
	return left < right;
}

template<>
bool comp<char*>(char* left, char* right) {
	return strlen(left) < strlen(right);
}

template <class T>
void msort(T* arr, int size)
{
	int middle = size / 2;
	if (size == 1)
		return;
	msort(arr, middle);
	msort(arr + middle, size - middle);
	T* buf = new T[size];
	int left = 0;
	int right = middle;
	for (int step = 0; step < size; step++) {
		if ((right >= size) || (left < middle) && (comp(arr[left], arr[right]))) {
			buf[step] = arr[left];
			left++;
		}
		else {
			buf[step] = arr[right];
			right++;
		}
	}
	for (int step = 0; step < size; step++) {
		arr[step] = buf[step];
	}
	delete buf;
}