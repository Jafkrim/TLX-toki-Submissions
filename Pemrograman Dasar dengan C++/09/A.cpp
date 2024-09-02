#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n-1) * n;
    }
}

int main() {
    cout << faktorial(12) << endl;
}
