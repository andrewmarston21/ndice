#include <stdio.h>
#include <stdlib.h>

/*
    For the moment only rolls n dice, each with m sides
*/
int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Usage: give as first argument the number of dice to roll,\nand as the second argument the number of sides each die has.\n");
        return 1;
    }
    /*
        Gets the number of dice to roll and the number of sides of each die
    */
    int dicec = atoi(argv[1]);
    int dices = atoi(argv[2]);
    printf("Rolling %d dice with %d sides each...\n", dicec, dices);

    /*
        Rolls the dice
    */
    int* dicev = (int*)malloc(sizeof(int) * dicec);
    for (int i = 0; i < dicec; i++) {
        dicev[i] = rand() % (dices - 1) + 1;
    }

    /*
        Sums the dice
    */
    int dicesum = 0;
    for (int i = 0; i < dicec; i++) {
        dicesum += dicev[i];
    }

    /*
        Displays the results
    */
    printf("Dice sum: %d\n", dicesum);
    printf("Dice results: ");
    for (int i = 0; i < dicec; i++) {
        printf("%d ", dicev[i]);
    }
    printf("\n");

    return 0;
}