#include <iostream>
#include <string>
using namespace std;


string getValue(int number) {
    return "The value is the number " + to_string(number);
}

char* getPlayerDets(string currentPlayer) {
    if (currentPlayer == "A") {
        const char* dets[2] = {"B", "O"};
        return dets;
    }
}

int main() {
    int number;
    std::cout << "Number ";
    std::cin >> number; //3
    int factorial = 1;
    for (int i=1; i<=number; i++) {
        factorial = factorial * i;
    }
    std::cout <<"Factorial";
    std::cout <<factorial;
    std::cout << "Value of function: " << getValue(5);
    system("pause>0");
    string bomb = "bomb";

}
