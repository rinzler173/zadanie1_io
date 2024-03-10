#include <iostream>

using namespace std;

// Deklaracja funkcji wyznaczaj¹cej silniê liczby
int silnia(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
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
        switch (wyjscie) {
            case 1:
                cout << "Podaj liczbe, dla ktorej chcesz obliczyc silnie: ";
                cin >> a;
                cout << "Silnia z " << a << " wynosi: " << silnia(a) << endl;
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