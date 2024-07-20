#include <iostream>
using namespace std;
int main(){
    //WAP to accept marks of 3 subjects and print the total marks
    float hindi_marks = 0;
    float english_marks = 0;
    float moral_science_marks = 0;

    cout << "Enter marks of hindi \n";
    cin >> hindi_marks;
    cout << "enter marks of moral science \n";
    cin >> moral_science_marks;
    cout << "enter the marks of english \n";
    cin >> english_marks;

    float total_marks = hindi_marks + english_marks + moral_science_marks;
    cout << "total marks = " << total_marks << "\n";
    return 0;
}