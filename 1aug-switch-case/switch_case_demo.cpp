#include <iostream>
using namespace std;
int main(){
    // accepting month from the user, and displaying no of days

    cout << "Enter the month" << "\n";
    cout << "Press 1 for Jan, 2 for Feb....... and so on Press 11 for nov, 12 for Dec"
            << " press 0 to exit" << "\n";
    int month = 0;
    cin >> month;

    switch(month){
        case 1:
            cout << "31 days";
            break;
        case 2:
            cout << "28 or 29 days";
            break;
        case 3:
            cout << "31 days";
            break;
        case 4:
            cout << "30 days";
            break;
        case 5:
            cout << "31 days";
            break;
        case 6:
            cout << "30 days";
            break;
        case 7:
            cout << "31 days";
            break;
        case 8:
            cout << "31 days";
            break;
        case 9:
            cout << "30 days";
            break;
        case 10:
            cout << "31 days";
            break;
        case 11:
            cout << "30 days";
            break;
        case 12:
            cout << "31 days";
            break;
        case 0:
            cout << "Exiting...";
            break;
        default:
            cout << "invalid month";
    

    }
}