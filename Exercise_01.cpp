#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12; 
    if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription will expire in " << daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired" << endl;
    } else {
        cout << "Your have an active subscription." << endl;
    }
}