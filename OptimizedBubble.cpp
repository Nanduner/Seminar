#include "pch.h"
#include "OptimizedBubble.h"
template <typename T>
void opt_bubble(T* arr, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swapped = true;
			}
		}
		if (!swapped)
			break;

	}
}
