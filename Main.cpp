#include <iostream>
#include <map>

using namespace std;

int main() {        
    string word;
    map<char, int> letters; // Letters and its occurences

    cout << "Enter Input: "; 
    cin >> word;

    for (char c : word) {
        // If letter already exists in map
        if (letters[c]) {
            int newAmount = letters[c] + 1;
            letters[c] = newAmount;
        } else {
            letters.insert({c, 1});
        }

        letters[c]++;
    }

    return 0;       
}