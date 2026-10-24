#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter your number: ";
    cin >> number;

    if (number >= 90) {
        cout << "Grade: A+";
    }
    else if (number >= 80) {
        cout << "Grade: A";
    }
    else if (number >= 50) {
        cout << "Grade: Pass";
    }
    else {
        cout << "Grade: Fail";
    }

    return 0;
}
