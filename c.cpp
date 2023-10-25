#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "PL_pl");
    int tab[10];
    int l1, l2, l3, l4, l5, l6;
    int trafione = 0;

    cout << "Podaj pierwszą liczbę: ";
    cin >> l1;
    while (l1 < 0 || l1 > 100) {
        cout << "Podaj liczbę z zakresu od 0 do 100" << endl;
        cout << "Podaj pierwszą liczbę: ";
        cin >> l1;
    }

    cout << "Podaj drugą liczbę: ";
    cin >> l2;
    while (l2 < 0 || l2 > 100 || l2 == l1) {
        cout << "Podaj liczbę z zakresu od 0 do 100 inną niż reszta podanych liczb" << endl;
        cout << "Podaj drugą liczbę: ";
        cin >> l2;
    }

    cout << "Podaj trzecią liczbę: ";
    cin >> l3;
    while (l3 < 0 || l3 > 100 || l3 == l2 || l3 == l1) {
        cout << "Podaj liczbę z zakresu od 0 do 100 inną niż reszta podanych liczb" << endl;
        cout << "Podaj trzecią liczbę: ";
        cin >> l3;
    }

    cout << "Podaj czwartą liczbę: ";
    cin >> l4;
    while (l4 < 0 || l4 > 100 || l4 == l3 || l4 == l2 || l4 == l1) {
        cout << "Podaj liczbę z zakresu od 0 do 100 inną niż reszta podanych liczb" << endl;
        cout << "Podaj czwartą liczbę: ";
        cin >> l4;
    }

    cout << "Podaj piątą liczbę: ";
    cin >> l5;
    while (l5 < 0 || l5 > 100 || l5 == l4 || l5 == l3 || l5 == l2 || l5 == l1) {
        cout << "Podaj liczbę z zakresu od 0 do 100 inną niż reszta podanych liczb" << endl;
        cout << "Podaj piątą liczbę: ";
        cin >> l5;
    }

    cout << "Podaj szóstą liczbę: ";
    cin >> l6;
    while (l6 < 0 || l6 > 100 || l6 == l5 || l6 == l4 || l6 == l3 || l6 == l2 || l6 == l1) {
        cout << "Podaj liczbę z zakresu od 0 do 100 inną niż reszta podanych liczb" << endl;
        cout << "Podaj szóstą liczbę: ";
        cin >> l6;
    }

    cout << "Wprowadzono liczby: " << endl << l1 << " " << l2 << " " << l3 << " " << l4 << " " << l5 << " " << l6 << endl;

    // Losowanie
    cout << "Wyniki losowania: " << endl;
    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % 100 + 1;
        cout << tab[i] << " ";
    }
    cout << endl;

    // Porównanie liczb
    for (int i = 0; i < 10; i++) {
        if (tab[i] == l1) trafione++;
        if (tab[i] == l2) trafione++;
        if (tab[i] == l3) trafione++;
        if (tab[i] == l4) trafione++;
        if (tab[i] == l5) trafione++;
        if (tab[i] == l6) trafione++;
    }

    cout << endl;
    cout << "Ilość trafień: " << trafione << "/6" << endl;

    return 0;
}
