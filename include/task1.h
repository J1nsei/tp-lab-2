#ifndef TASK1_H
#define TASK1_H

#include <string.h>

template<typename T>
bool compare(T a, T b)
{
	return(a < b);
}

bool compare(char* a, char* b)
{
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T *array, int size)
{
	if (size == 1)
	{
		return;
	}
	int left_size = size / 2,
		right_size = size - left_size;
	msort(array, left_size);
	msort((array + left_size), right_size);
	int left_ind = 0, right_ind = 0;
	T *temp = new T[size];
	while (left_ind < left_size && right_ind < right_size)
	{
		if (compare(array[left_ind], array[left_size + right_ind]))
		{
			temp[left_ind + right_ind] = array[left_ind];
			left_ind++;
		}
		else
		{
			temp[left_ind + right_ind] = array[left_size + right_ind];
			right_ind++;
		}
	}

	while (left_ind < (left_size))
	{
		temp[left_ind + right_ind] = array[left_ind];
		left_ind++;
	}
	while ((left_size + right_ind) < size)
	{
		temp[left_ind + right_ind] = array[left_size + right_ind];
		right_ind++;
	}

	for (int i = 0; i < size; i++)
		array[i] = temp[i];
	delete[] temp;
}



/*template<typename T>
void merge(T *array, int first, int last)
{
	T *temp = new T[last +1];
	int middle = (first + last) / 2,
		start = first,
		final = middle + 1;
	for (int i = first; i <= last; i++)
	{
		if ((start <= middle) && ((final > last) || compare(array[start], array[final])))
		{
			temp[i] = array[start];
			start++;
		}
		else
		{
			temp[i] = array[final];
			final++;
		}

	}
	for (int i = first; i <= last; i++)
		array[i] = temp[i];

	delete[]temp;
}

template<typename T>
void msort(T *array, int first, int last)
{
	if (first < last)
	{
		int middle = (first + last) / 2;
		msort(array, first, middle);
		msort(array, middle + 1, last);
		merge(array, first, last);
	}
}*/


#endif
