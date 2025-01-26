#include <iostream>
#include <cmath>

using namespace std;
// 2.	Używając pętli wypisz i jednocześnie zsumuj liczby od 1 do 10. Zsumuj także oddzielne liczby parzyste i wypisz wynik.
int main()

{

    int suma = 0;
    for (int i = 1; i <= 10; ++i) {
        suma += i;
        cout << i << endl;


    }
    cout << "Suma liczb " << suma << endl;
    int liczba = 0;
    for (int y = 1; y <= 10; y = y + 2) {
        liczba += y;


    }
    cout << "suma liczb parzystych " << liczba << endl;

}


