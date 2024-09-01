#include <iostream>
#include <vector>
using namespace std;

vector<int> jumlah_bersebelahan(vector<int> v) {
    for (int i = 1; i < v.size(); i++){
        v[i-1] += v[i];
    }
    v.pop_back();
    return v;
}

// Fungsi cetak_vector() dan main() di bawah tidak boleh diubah!

// cout tidak bisa mencetak sebuah vector, sehingga kita perlu
// membuat fungsi tersendiri untuk mencetak vector secara manual.
void cetak_vector(vector<int> v) {
    cout << "vector:";
    for (int x : v) {
        cout << " " << x;
    }
    cout << endl;
}

int main() {
    cetak_vector(jumlah_bersebelahan({1, 2, 3, 4, 5}));
    cetak_vector(jumlah_bersebelahan({17, 8, 1945}));
}
