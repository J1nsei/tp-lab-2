#include "task2.h"
#include <iostream>

using namespace std;

template<class T>
T gen() {
	static int c=1;
	return c++;
}

int main() {
	const int N = 5;
	int * Arr;
	Arr = createArr<int, N>(gen);
	for (int i = 0; i < N; i++) {
		cout << Arr[i]<<endl;
	}
	return 0;
}