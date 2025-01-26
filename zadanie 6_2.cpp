#include <iostream>
#include <cstdlib>
#include <cmath>



using namespace std;
int main()
{
    const int SIZE1 = 2;
    const int SIZE2 = 3;
    const int SIZE3 = 4;
    const int SIZE4 = 5;
    const int SIZE5 = 6;

    int tablica[SIZE1][SIZE2][SIZE3][SIZE4][SIZE5];

    float sum = 0;
    float size = 0;
    float srd_up = 0;
    float srd_down = 0;
    float srd = 0;

    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                for (int l = 0; l < SIZE4; ++l) {
                    for (int m = 0; m < SIZE5; ++m) {
                        tablica[i][j][k][l][m] = rand() % 15 + rand() % 15 + rand() % 15 + rand() % 15 + rand() % 15;
                    }
                }
            }
        }
    }
    for (int i = 0; i < SIZE1; ++i) {
        for (int j = 0; j < SIZE2; ++j) {
            for (int k = 0; k < SIZE3; ++k) {
                for (int l = 0; l < SIZE4; ++l) {
                    for (int m = 0; m < SIZE5; ++m) {
                        sum += tablica[i][j][k][l][m];
                        size++;
                    }
                }
            }
        }
    }
    srd = sum / size;


    cout << "liczb suma: " << sum << endl;
    cout << "liczb srednia: " << srd << endl;
    cout << "Srednia liczb w dol: " << floor(srd) << endl;
    cout << "Srednia liczb w gore: " << round(srd) << endl;




}
