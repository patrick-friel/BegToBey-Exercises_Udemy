#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <double> scores{ 10.4, 20.6, 30.7 };
    double total_score{};
    double average_score{};

    for (auto score : scores)
        total_score += score;
    average_score = total_score / scores.size();
    cout << average_score << endl;

    return 0;
}