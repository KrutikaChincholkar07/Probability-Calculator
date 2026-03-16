#include <iostream>
using namespace std;

int main() {
    float favorable, total, probability;

    cout << "Enter number of favorable outcomes: ";
    cin >> favorable;

    cout << "Enter total number of outcomes: ";
    cin >> total;

    probability = favorable / total;

    cout << "Probability = " << probability;

    return 0;
}
