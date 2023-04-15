#include<bits/stdc++.h>
using namespace std;

int main() {

    // 1D Array
    int data[5];
    cout << "Enter 5 numbers: " << endl;
    cin >> data[0] >> data[1] >> data[2] >> data[3] >> data[4];

    data[2] += 15;
    cout << "Third number after adding 15 to it becomes: " << data[2] <<endl;

    int number[4] = {6, 5, 8, 39};
    cout << "Last number is: " << number[3] << endl;



    // 2D Array
    int values[4][3]; // It means values[number_of_rows][number_of_columns]
    values[3][1] = 16;
    values[3][2] = values[3][1] + 14;

    cout << "Values are: " << values[3][1] << " " << values[3][2] << endl;
    cout << "Value which was not defined: " << values[2][1] << endl;

    return 0;
}