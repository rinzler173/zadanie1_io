#include <iostream>
#include <cmath>

using namespace std;

// Deklaracja funkcji wyznaczaj¹cej silniê liczby
int silnia(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}

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
    int a;
    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
	cout << "1. Oblicz silnie liczby" << endl;
	cout << "2. Sprawdz czy liczba jest pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
        switch (wyjscie) {
            case 1:
                cout << "Podaj liczbe, dla ktorej chcesz obliczyc silnie: ";
                cin >> a;
                cout << "Silnia z " << a << " wynosi: " << silnia(a) << endl;
                break;
	    case 2:
                int liczba;
                cout << "Podaj liczbe do sprawdzenia: ";
                cin >> liczba;
                if(czyPierwsza(liczba)) {
                    cout << liczba << " jest liczba pierwsza." << endl;
                } else {
                    cout << liczba << " nie jest liczba pierwsza." << endl;
                }
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawny numer czynnosci. Sprobuj ponownie." << endl;
        }
    } while(wyjscie != 0);
    return 0;
}
