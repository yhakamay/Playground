#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    // game loop
    while (1) {
        int max = 0;
        int to_shoot = 0;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            scanf("%d", &mountain_h);

            if (mountain_h > max) {
                max = mountain_h;
                to_shoot = i;
            }
        }
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        printf("%d\n", to_shoot); // The index of the mountain to fire on.
    }

    return 0;
}