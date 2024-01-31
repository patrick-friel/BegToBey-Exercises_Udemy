#include <iostream>
#include <vector>

using namespace std;

int main() {
    char user_entry{};
    vector <int> data{};
    int added_number{};
    int total_data{};

    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add number" << endl;
        cout << "M - Display mean of numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> user_entry;


        if (user_entry == 'P' || user_entry == 'p')
        {
            for (auto dat : data)
                cout << dat << " " << endl;
        }
        else if (user_entry == 'A' || user_entry == 'a')
        {
            cout << "Enter number: ";
            cin >> added_number;
            data.push_back(added_number);
        }

        else if (user_entry == 'm' || user_entry == 'M')
        {
            for (auto dat : data)
                total_data += dat;
            cout << static_cast<double>(total_data) / data.size();
        }

        cout << endl;
    } while (user_entry != 'Q' && user_entry != 'q');
    cout << "Goodbye...";

    return 0;
}