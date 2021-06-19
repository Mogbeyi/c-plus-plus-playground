#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) 
        if (arr[i] > arr[i + 1]) return false;
    return true;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    
    bool sorted = isSorted(arr, 10);

    if (sorted) {
        cout << "The array is sorted" << endl;
    } else {
        cout << "The array is not sorted" << endl;
    }
}

