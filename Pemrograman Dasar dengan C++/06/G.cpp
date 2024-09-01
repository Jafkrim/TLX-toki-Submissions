#include <iostream>
using namespace std;

int harga[3];

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            harga[j] += luas[i][j] * harga_jual[j];
        }
    }
    
    for (int k = 0; k < 3; k++){
        cout << harga[k] << endl;
    }
}
