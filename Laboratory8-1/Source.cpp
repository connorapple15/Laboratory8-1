#include <iostream>
#include <string>
using namespace std;
#include <iostream>
#include <string>

int countCharacter(const string& str);

int main() {
    string test1 = "Hello, World!";
    string test2 = "Laboratory eight";

    cout << "Number of characters in test1: " << countCharacter(test1) << endl;
    cout << "Number of characters in test2: " << countCharacter(test2) << endl;

    return 0;
}

int countCharacter(const string& str) {
    return str.length();
}