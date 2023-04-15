#include<bits/stdc++.h>
using namespace std;

int main() {

    // Datatypes

    // int, long and long long
    int value = 10; // for value upto 10^9
    long bigValue = 2000; // for value upto 10^12
    long long moreBigValue = 30000; // for value upto 10^18

    cout << "Int Value is: " << value << endl;
    cout << "Long Int Value is: " << bigValue << endl;
    cout << "Long Long Int Value is: " << moreBigValue << endl;


    // float, double
    float interest = 6.5;
    float floatNumber = 5;
    double doubleNumber = 10.9;

    cout << "Float Value is: " << interest << endl;
    cout << "Float Value which looks like Int is: " << floatNumber << endl;
    cout << "Double Value is: " << doubleNumber << endl;

    // string and getline
    // while getting input from terminal in string if there is space the string variable gets the value up to space
    // but getline function takes input upto newline
    string playerName, playerName2;
    cout << "Enter Full Player Name: ";
    cin >> playerName;
    cout << "Ohh your Full Name is: " << playerName;

    cout << "Enter Full Player Name Again: ";
    getline(cin, playerName2);
    cout << "Ohh your Full Name Again is: " << playerName2;

    return 0;
}