#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbers [5] = {10, 15, 19, 99, 18};
    int input;

    cout << "\nSorted strings\n";
    for (int j = 0; j < 5; j++){
    cout << numbers[j] << "\n";
    }
    cout << "Choose a number: ";
    cin >> input;

    switch(input)
    {
        case 10:
            cout << "\nthe number 10 is 0 on array list.";
            break;
        case 15:
            cout << "\nthe number 15 is 1 on array list.";
            break;
        case 19:
            cout << "\nthe number 19 is 2 on array list.";
            break;
        case 99:
            cout << "\nthe number 99 is 3 on array list.";
            break;
        case 18:
            cout << "\nthe number 18 is 4 on array list.";
            break;
        default:
            cout << "\nThe number is not found on the list.";
    }  
    return 0;
}