#include <iostream>
using namespace std;

int passed = 0;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            if (luas[i][j] >= 80000){
                passed++;
            }
        }
    }

    cout << passed << endl;
}
