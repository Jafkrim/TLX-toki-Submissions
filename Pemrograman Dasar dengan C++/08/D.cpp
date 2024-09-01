#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        char x;
        if (c == 'z'){
            x = 'A';
            goto skip;
        }
        x = c - 'a' + 'B';
        
        skip:
        cout << x;
    }
    cout << endl;
}
