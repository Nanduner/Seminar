#include "pch.h"
#include "Selection.h"
template <typename T>
void selection(T* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        T flag;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        flag = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = flag;
    }
}
