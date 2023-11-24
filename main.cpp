#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;

int GeneraNumero(int a, int b) {
    srand(time(NULL)); //Make sure the number is different every time you boot!
    int range = b - a + 1;
    int numeroCasuale = rand() % range + a;
    return numeroCasuale;
}

void Personaggio() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "  \\o/" << endl;
    cout << "   |" << endl;
    cout << "  / \\" << endl;
    Sleep(2000);
}

int main() {
    Personaggio();
    int mini, maxx, numero = 0, numerodaindovinare = 0;
    cout << "Enter the Minimum number: ";
    cin >> mini;
    cout << "Enter the Maximum number: ";
    cin >> maxx;
    numero = GeneraNumero(mini, maxx);
    cout << "Enter the number to guess: ";
    cin >> numerodaindovinare;

    int punteggio = 0;
    if (numero == numerodaindovinare) {
        punteggio += 2;
        cout << "Congratulations! You've won 2 points!" << endl;
    } else if (numero == numerodaindovinare + 4 or numero == numerodaindovinare - 4) {
        punteggio += 1;
        cout << "You've won 1 point! Close enough!" << endl;
    } else {
        cout << "You lost!" << endl;
        cout << "The number to guess was: " << numero << endl;
    }

    return 0;
}
