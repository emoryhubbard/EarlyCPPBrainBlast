#include <iostream>
#include <format>
using namespace std;


int main() {
    char c1, c2, c3, c4, c5;
    cout << std::format("Enter 5 letters: ");
    string emory = "emory";
    putWordIn(emory, "My name is ${emory}");
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    /*cout << "ASCII Message: " << int(c1) << " "
    << int(c2) << int(c3) << int(c4) <<*/
string putWordIn(string userWord, string sentence) {
    Position position = getSpecialPosition()
   // string userWord = "whatIsThis?";
}
    /*
    cout << (int) 'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << int(65) << endl;*/
    system("pause>0");
}