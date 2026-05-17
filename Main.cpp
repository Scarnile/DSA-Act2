#include <iostream> 
#include <map>

using namespace std;

int main() {        
    string word;

    map<string, int> letters;

    cout << "Enter Input: "; 
    cin >> word;

    for (char c : word) {
        cout << c << " ";
    }

    return 0;       
}