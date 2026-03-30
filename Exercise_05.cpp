#include <iostream>
#include <cmath>
using namespace std;

//Function prototypes
double Triangle(double base, double height);
double Rectangle(double length, double height );
double Square(double side);

int main() {
    double height = 0;
    double base = 0;
    double length = 0;
    double side;
    int choice = 0;
    cout << "Shape Area Calculator" << endl;
    cout << "                     " << endl;
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
    cin >> choice;

    switch (choice)
    {
    case 1:
        /* code */
        cout << "Enter values of the Square"<< endl;
        cout << "side: ";
        cin >> side;
        cout << "The area of the Triangle is " <<Square(side) << endl;
        break;
    case 2:
        cout << "Enter values of the Rectangle"<< endl;
        cout << "height: ";
        cin >> height;
        cout << "length ";
        cin >> length;
        cout << "The area of the Rectanlge is " << Rectangle(length, height) << endl;
        break;

    case 3:
        cout << "Enter values of the Triangle"<< endl;
        cout << "height: ";
        cin >> height;
        cout << "base ";
        cin >> base;
        cout << "The area of the Triangle is " << Triangle(base, height) << endl;
        break;    
    case 4: break;

    default:
            {
            while(true) {
                    cout << "Your input was: " << choice << " which is an invalid input" << endl;
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
                cin >> choice;
                    if (choice == 1) {
                        cout << "Enter values of the Square"<< endl;
                        cout << "side: ";
                        cin >> side;
                        cout << "The area of the Triangle is " <<Square(side) << endl;
                        break;
                } else if(choice == 2) {
                        cout << "Enter values of the Rectangle"<< endl;
                        cout << "height: ";
                        cin >> height;
                        cout << "length ";
                        cin >> length;
                        cout << "The area of the Rectanlge is " << Rectangle(length, height) << endl;
                        break;
                } else if(choice == 3) {
                    cout << "Enter values of the Triangle"<< endl;
                    cout << "height: ";
                    cin >> height;
                    cout << "base ";
                    cin >> base;
                    cout << "The area of the Triangle is " << Triangle(base, height) << endl;
                    break;
                }else if(choice == 4) {
                    break;
                } else {
                    //remprompt the  user with another prompting statement
                }
            }
    }
    

    }    return 0;
}

double Triangle(double base, double height) {
    double area = 0.5 * base * height;
    return area;
}
double Rectangle(double length, double height ) {
    double area = length * height;
    return area;
}
double Square(double side) {
    double area = pow(side, 2.0);
    return area;
}