#include <iostream>
using namespace std;

double average(int arr[], int length);

int main() {
  int gradeArray[10] = {87, 76, 100, 97, 64, 83, 88, 92, 74, 95};

  double result = average(gradeArray, 10);

  cout << "The average is: " << result << endl;
}

double average(int arr[], int length) {
    double total = 0;

    for (int i = 0; i < length; i++) {
        total += arr[i];
    }

    return total / length;
}

