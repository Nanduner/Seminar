#include "pch.h"
#include "Insertion.h"
template <typename T>
void insertion(T* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1]) {
				T tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
			else {
				break;
			}
		}
	}
}
