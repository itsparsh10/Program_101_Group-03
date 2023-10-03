//program no 39
//to produce a pyramid using nested loops

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
    //taking the inputs from the user

    for(int i = 1; i <= rows; ++i) 
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
