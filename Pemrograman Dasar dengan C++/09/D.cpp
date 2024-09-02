#include <iostream>
#include <string>
using namespace std;

int hitung_vokal(string s) {
    if (s.empty()) {
        return 0;
    }

    char c = s[0];
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
        return 1 + hitung_vokal(s.substr(1));
    } else {
        return hitung_vokal(s.substr(1));
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}
