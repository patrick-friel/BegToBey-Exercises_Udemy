#include <iostream>
#include <vector>

using namespace std;

char selection{};
int main() {
    do
    {
        cout << "\n-------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch (selection) {
        case '1': cout << "You chose 1" << endl; break;
        case '2': cout << "You chose 2" << endl; break;
        case '3': cout << "You chose 3" << endl; break;
        case 'q':
        case 'Q': cout << "Goodbeye..."; break;
        }
    } while (selection != 'q' && selection != 'Q');



    return 0;
}