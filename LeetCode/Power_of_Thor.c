#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int light_x;
    int light_y;
    int initial_tx;
    int initial_ty;
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);
    int thor_x = initial_tx;
    int thor_y = initial_ty;

    while (1) {
        int remaining_turns;
        char *move_x = "";
        char *move_y = "";

        scanf("%d", &remaining_turns);
        if (light_x > thor_x)
        {
            move_x = "E";
            thor_x++;
        }
        else if (light_x < thor_x)
        {
            move_x = "W";
            thor_x--;
        }   
        if (light_y > thor_y)
        {
            move_y = "S";
            thor_y++;
        }
        else if (light_y < thor_y)
        {
            move_y = "N";
            thor_y--;
        }
        printf("%s%s\n", move_y, move_x);
    }
    return 0;
}