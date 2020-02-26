template <class T, const int N>
void map(T * buf, T(*change)(T)) {

	for (int i = 0; i < N; i++)
	{
		buf[i] = change(buf[i]);

	}
}