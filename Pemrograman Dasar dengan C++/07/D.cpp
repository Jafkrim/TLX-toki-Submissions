#include <iostream>
using namespace std;

int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

int biaya(int total_bebek) {
    int harga_bebek;
    if (total_bebek < 10) {
        harga_bebek = 100000;
    } else if (total_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    return harga_bebek * total_bebek;
}

int biaya_jantan_dan_betina(int hari) {
    return biaya(jantan[hari]) + biaya(betina[hari]);
}

int main() {
    for (int i = 0; i < 4; i++) {
        cout << biaya_jantan_dan_betina(i) << endl;
    }
}
