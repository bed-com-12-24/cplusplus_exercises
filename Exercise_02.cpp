#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int daysUntilExpiration = rand() % 12; // Random value between 0 and 11
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired" << endl;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription will expire in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "Your have an active subscription." << endl;
            break;
    }
    return 0;
}