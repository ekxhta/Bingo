#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define a 1
#define b 90

void create_card(int card[5][5]) {
    int i, j, n;
    printf("Create your own card: \n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Enter the number:\n");
            scanf("%d", &n);
            while (n > 90) {
                printf("No. greater than 90! Enter another number less than 90:");
                scanf("%d", &n);
            }
            card[i][j] = n;
        }
    }
    card[2][2] = 0; 
}

void display_card(int card[5][5]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("| %2d ", card[i][j]);
        }
        printf("|\n");
    }
}

int chance() {
    int number;
    number = a + rand() % b;
    return number;
}

void bingo(int card[5][5]) {
    int i, j, number;
    number = chance();
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (number == card[i][j]) {
                card[i][j] = 0;
            }
        }
    }
}

int main() {
    int card[5][5];
    srand(time(NULL)); 
    create_card(card);
    display_card(card);
    char ans;
    printf("Generate next number? (Y/N): ");
    scanf(" %c", &ans);
    while (ans == 'y' || ans == 'Y') {
        bingo(card);
        display_card(card);
        printf("Generate next number? (Y/N): ");
        scanf(" %c", &ans);
    }
    return 0;
}
