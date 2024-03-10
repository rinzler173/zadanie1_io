#include <iostream>
#include <cmath>

using namespace std;

bool czyPierwsza(int liczba) {
    if(liczba <= 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(liczba); ++i) {
        if(liczba % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
