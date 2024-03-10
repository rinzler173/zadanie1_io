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
    cout << "Podaj liczbe calkowita: ";
    cin >> a >> b;

    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Sprawdz czy liczba jest pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        switch(wyjscie) {
            case 1: {
                int liczba;
                cout << "Podaj liczbe do sprawdzenia: ";
                cin >> liczba;
                if(czyPierwsza(liczba)) {
                    cout << liczba << " jest liczba pierwsza." << endl;
                } else {
                    cout << liczba << " nie jest liczba pierwsza." << endl;
                }
                break;
            }
            case 0: {
                cout << "Koniec programu." << endl;
                break;
            }
            default: {
                cout << "Nieprawidlowy numer czynnosci. Sprobuj ponownie." << endl;
                break;
            }
        }
    } while(wyjscie != 0);

    return 0;
}
