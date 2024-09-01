#include <iostream>
using namespace std;

int main() {
    int luas[5] = {225 * 335, 215 * 394, 198 * 400, 314 * 298, 299 * 278};

    // Buat sebuah variabel yang menampung luas terbesar.
    // Pada awalnya, isi variabel tersebut dengan luas dari kandang pertama.
    int badag = 0;

    // Untuk setiap kandang sisanya:
    for (int i = 0; i < 5; i++) {
        // Jika luasnya lebih besar daripada variabel luas terbesar:
        if (luas[i] > badag) {
            // Perbarui nilai variabel luas terbesar dengan luas kandang tersebut.
            badag = luas[i];
        }
    }

    cout << badag << endl;
}
