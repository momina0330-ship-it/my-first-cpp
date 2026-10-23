#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Passed";
    } else {
        cout << "Failed";
    }
    return 0;
}
