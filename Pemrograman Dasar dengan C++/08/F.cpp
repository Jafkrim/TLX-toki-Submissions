#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+' || op == '*'){
        long long yeah = 0;

        for (string x : data){
            long long y = stoi(x);

            switch(op){
                case '+': yeah += y; break;
                case '*': if (yeah == 0){ yeah = 1; }; yeah *= y; break;
            }
        }

        return to_string(yeah);
    } else{
        return "KESALAHAN";
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
