#include<bits/stdc++.h>
using namespace std;

int main() {

    string name = "Ravs";
    int len = name.size();
    cout << "Old name is: " << name << endl;
    cout << "Number of letters in your old name is: " << len << endl;

    name[len - 1] = 'i';
    name += " Somani";
    cout << "New name is: " << name << endl;
    len = name.size();
    cout << "Number of letters in your new name is: " << len << endl;
    return 0;
}