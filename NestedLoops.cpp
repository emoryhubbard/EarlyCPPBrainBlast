#include <iostream>
using namespace std;

int main() {
    int grade, sum = 0;

    for (int i = 0; i < 3; i++) {
        
        do {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grade;
        } while (grade < 1 || grade > 5);

        sum += grade;

        cout << "sum = blank";
    }
    system("pause>0");
    
    return 0;
}