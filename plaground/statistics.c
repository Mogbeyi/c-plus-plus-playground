#include <stdio.h>

double calculateMean(int A[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += A[i];
    }

    return (total / n);
}

int calculateMode(int A[], int n) {
    int mode = A[0];
    int prevCount = 0;

    for (int i = 0; i < n; i++) {
        int newCount = 0;

        for (int j = 0; j < n; j++) {
            if (A[i] == A[j]) newCount++;
        }
        if (newCount > prevCount) {
            prevCount = newCount;
            mode = A[i];
        } 
    }    

    return mode;
}


int main () {
    const ARRAY_SIZE = 14;
    int surveyData[ARRAY_SIZE] = {4, 7, 3, 8, 9, 7, 3, 9, 9, 3, 3, 9, 9, 10};

    double mean = calculateMean(surveyData, ARRAY_SIZE);
    int mode = calculateMode(surveyData, ARRAY_SIZE);

    printf("Mean = %f\n", mean);
    printf("Mode = %d\n", mode);
}
