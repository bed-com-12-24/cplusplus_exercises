#include <iostream>
using namespace std;

int main() {
    int c = 0;
    cout << "Enter a number: ";
    while(true) {
        
        cin >> c;
        if (c == 2) {
            break;
        } else {
            //reprompt but with another prompting statement
            cout << "Your input was: " << c << " which is an invalid input" << endl;
            {
                cout << "Please select the area of the shape to calculate" << endl;
                cout << "1. Square" << endl;
                cout << "2. Rectangle" << endl;
                cout << "3. Triangle" << endl;
                cout << "4 . Quit Program" << endl;
                cout << "                     " << endl;
                cout << "                     " << endl;
                cout << "Enter selection: " << endl;
            }
        }
    }
}