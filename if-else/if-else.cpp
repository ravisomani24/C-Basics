#include<bits/stdc++.h>
using namespace std;

string checkIfUserIsAdult() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18) {
        return "You are an Adult";
    } 
        
    return "You are not an Adult";
}

int getGrades() {

    int marks;
    cout << "How many marks did you get out of 100: ";
    cin >> marks;

    if(marks > 100) {
        cout << "You are lying please give correct marks" << endl;
        return -1;
    } else if(marks <= 100 && marks >= 91) {
        cout << "Awesome! You have got A+ Grade" << endl;
    } else if(marks <= 90 && marks >= 81) {
        cout << "Great! You have got A Grade" << endl;
    } else if(marks <= 80 && marks >= 71) {
        cout << "Nice! You have got B+ Grade" << endl;
    } else if(marks <= 70 && marks >= 61) {
        cout << "You have got B Grade" << endl;
    } else if(marks <= 60 && marks >= 51) {
        cout << "You have got C+ Grade" << endl;
    } else if(marks <= 50 && marks >= 41) {
        cout << "You have got C Grade" << endl;
    } else if(marks <= 40 && marks >= 35) {
        cout << "You hve got D Grade" << endl;
    } else {
        cout << "You have failed the exam" << endl;
    }

    return 0;

}

int main() {

    cout << checkIfUserIsAdult() << endl;

    getGrades();

    return 0;

}