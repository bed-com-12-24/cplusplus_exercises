#include <iostream>
#include <string>
using namespace std;

bool isValid(int value) {
    if (value < 5 || value > 10) {
        cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
    return false;
    } else {
        cout << "Valid input: " << value << endl;
        return true;
    }
}


void getValue(int &value) {
    cout << "Enter an integer value between 5 and 10: ";
    cin >> value;
    isValid(value);
}



int main() {
    int value;
    getValue(value);
    return 0;

}