#include <iostream>
#include <string>
using namespace std;

int countVowel(const string& str);

int main() {
    string test1 = "Hello, World!";
    string test2 = "Laboratory eight";

    cout << "Number of vowels in test1: " << countVowel(test1) << endl;
    cout << "Number of vowels in test2: " << countVowel(test2) << endl;

    return 0;
}

int countVowel(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}