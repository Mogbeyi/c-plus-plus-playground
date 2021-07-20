#include <stdio.h>

int isSorted(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (A[i] < A[i + 1]) {
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {
    int A[10] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int sorted = isSorted(A, size);

    if (sorted) {
        printf("The array is sorted\n");
    } else {
        printf("The array is not sorted\n");
    }
}

