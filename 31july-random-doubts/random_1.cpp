#include <iostream>
using namespace std;
int main(){
    /*
    greatest among three, if tow are equal and third s smaller
    all three are different
    1 equal 2

    */
   cout << "enter three numbers" << "\n";
   int number1;
   int number3;
   int number2;

   cin >> number1 >> number2 >> number3;
   
   if (number1 == number2 && number1 == number3){
        // all three are equal
        cout << "calculation not possible " << "\n"; 
   }
   else if(number1 == number2){
        // two are equal - case 1
        if(number3 > number1){
            cout << "number3 is greatest" << "\n";
        }
        else{
            cout << "number1 and number 2 are greatest" << "\n";
        }
   }
   else if(number2 == number3){
        // two are equal - case 2
        if(number1 > number2){
             cout << "number1 is greatest" << "\n";
        }
        else{
            cout << "number2 and number3 are greatest" << "\n";
        }
   }
   else if(number1 == number3){
        // two are equal - case 3
        if(number2 > number1){
             cout << "number2 is greatest" << "\n";
        }
        else{
            cout << "number1 and number3 are greatest" << "\n";
        }
   }
   else if(number1 > number2 && number1 > number3){
        cout << "Number1 greatest " << "\n";
   }
   else if(number2 > number1 && number2 > number3){
        cout << "Number2 greatest " << "\n";
   }
   else{
        cout << "Number3 greatest " << "\n";
   }
   return 0;
}
