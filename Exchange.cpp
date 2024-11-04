#include "pch.h"
#include "Exchange.h"
template <typename T>
void exchange(T* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i]) {
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
