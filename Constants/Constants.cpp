#include <iostream>

using namespace std;

int main() {
    int small_room{ 0 };
    int large_room{ 0 };

    const double small_cost{ 25 };
    const double large_cost{ 35 };
    const double tax{ .06 };
    const int days{ 30 };

    cout << "Hi, welcome to Frank's Carpet Cleaning Service." << endl;
    cout << "\nHow many small rooms would you like? ";
    cin >> small_room;
    cout << "How many large room would you like? ";
    cin >> large_room;
    cout << "=============================================" << endl;
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << small_room << endl;
    cout << "Number of large rooms: " << large_room << endl;
    cout << "Price per small room: " << small_cost << endl;
    cout << "Price per large room: " << large_cost << endl;
    cout << "Cost: " << (small_room * small_cost) + (large_room * large_cost) << endl;
    cout << "Tax: " << ((small_room * small_cost) + (large_room * large_cost)) * tax << endl;
    cout << "=============================================" << endl;
    cout << "Total estimate: " << ((small_room * small_cost) + (large_room * large_cost)) * (1 + tax) << endl;
    cout << "This estimate is good for " << days << " days." << endl;

    return 0;
}