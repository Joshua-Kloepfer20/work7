#include <stdio.h>

void one(int *arr, int size) {
    int i;
    printf("[");
    for (i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf(" ]");
}
int two(int *arr, int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
void three(int *arr, int *arr2, int size) {
    int i;
    for (i = 0; i < size; i++) {
        arr2[i] = arr[i];
    }
}