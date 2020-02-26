#include "task3.h"
#include <iostream>

using namespace std;

template<class T>
T change(T n) {
	return n+n;
}

int main() {
	const int N = 3;
	int * buf = new int[N];
	for (int i = 0; i < N; i++) {
		buf[i] = i;
	}
	map<int, N>(buf, change);
	for (int i = 0; i < N; i++) {
		cout << buf[i] <<endl;
	}
	return 0;
}
