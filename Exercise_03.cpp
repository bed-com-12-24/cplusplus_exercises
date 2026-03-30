#include <iostream>
#include <string>
using namespace std;

int main() {
    string List[] = {"B123", "C2334", "A345", "C15", "B177","G3003", "C235", "B179"};
    for (int i = 0; i < 8 ; i++) {
        if (List[i].at(0) == 'B') {
            cout << List[i] << endl;
        }
//      cout << List[i] << endl;
    }
}

