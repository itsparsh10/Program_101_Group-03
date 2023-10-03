

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n == 0)
        cout << "This is prime"; // Comment: Checking if n is equal to 0

    else if (n < 0) {
        cout << "This is not prime"; // Comment: Handling negative numbers
    } else {
        cout << "This is prime"; // Comment: Assuming all other positive integers are prime
    }
}