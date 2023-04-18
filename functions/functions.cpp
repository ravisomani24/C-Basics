#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times which is use for reusability
// void -> which return nothing

// int here is return datatype
// number1 and number2 are parameters to the function
int performAddition(int number1, int number2) {
    return number1 + number2;
}

int main() {

    int number1, number2;
    cout << "Enter two number to be added: ";
    cin >> number1 >> number2;

    int finalSum = performAddition(number1, number2);

    cout << "Final sum after addition of these number: " << finalSum << endl;

    return 0;
}
