#include <iostream>
int main(){
    //prompt
    std :: cout << "enter an integer number" << "\n";
    // :: scope resolution operator
    // allocate the storage space
    // declare an variable to store input
    // datatype variable_name;
    int number = 0;
    // taking input by cin and storing in declared variable 
    // number
    std :: cin >> number;

    if(number > 99 && number < 1000){
        std :: cout << "It's a three digit number" << "\n";
    }
}