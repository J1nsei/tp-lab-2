template <class T, int N>
T* createArr(T(*gen)()) {
	T* buf = new T[N];
	for (int i = 0; i < N; i++)
		buf[i] = gen();
	return buf;
}