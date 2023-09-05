#include <iostream>
#include <vector>
#include <math.h>
using std::string;
using std::vector;
using std::cout;

void print(vector<string> v) {
    for (auto item: v) {
        cout << item << " ";
    }
}
void addApple(vector<string> v) {
    v.push_back("apple");
}
int main() {
    vector<string> v;
    v.push_back("apple");
    v.push_back("orange");
    v.push_back("bagels");
    addApple(v);
    print(v);
    cout << pow(2, 8 * 4);
}





