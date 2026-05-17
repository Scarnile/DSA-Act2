#include <iostream> 
using namespace std;

int main() {        
    string word;
    cout << "Enter Input: "; 
    cin >> word;

    for (char c : word) {
        cout << c << " ";
    }

    return 0;       
}