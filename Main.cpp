#include <iostream> 
using namespace std;

struct LetterOccurences{
    string letter;
    int occurences;
};

int main() {        
    string word;
    LetterOccurences letters[2] = {
        {"a", 3}, 
        {"c", 4}  
    };

    cout << "Enter Input: "; 
    cin >> word;

    for (char c : word) {
        cout << c << " ";
    }

    return 0;       
}