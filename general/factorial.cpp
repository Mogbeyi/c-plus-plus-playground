#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout <<"Enter the vaue of n: "<< endl;
    cin >> n;

    int result = factorial(n);

    cout <<"The factorial of " << n << " is " << result << endl;
}

