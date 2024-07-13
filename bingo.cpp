#include <iostream>
#include <cstdlib>
#include <ctime>

#define a 1
#define b 90

using namespace std;

void create_card(int card[5][5]) {
    int i, j, n;
    cout << "Create your own card: \n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << "Enter the number:\n";
            cin >> n;
            while (n > 90) {
                cout << "No. greater than 90! Enter another number less than 90:";
                cin >> n;
            }
            card[i][j] = n;
        }
    }
    card[2][2] = 0;
}

void display_card(int card[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "| " << card[i][j] << " ";
        }
        cout << "|\n";
    }
}

int chance() {
    srand(time(NULL));
    int number;
    number = a + rand() % b;
    return number;
}

void bingo(int card[5][5]) {
    int number = chance();
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (number == card[i][j]) {
                card[i][j] = 0;
            }
        }
    }
}

int main() {
    int card[5][5];
    create_card(card);
    display_card(card);
    char ans;
    cout << "Generate next number? (Y/N): ";
    cin >> ans;
    while (ans == 'y' || ans == 'Y') {
        bingo(card);
        display_card(card);
        cout << "Generate next number? (Y/N): ";
        cin >> ans;
    }
    return 0;
}
