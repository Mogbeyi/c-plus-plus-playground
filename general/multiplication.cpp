#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter a positive integer: " << endl;
    cin >> n;

    for (int i = 0; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
