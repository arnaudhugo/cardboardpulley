#include "cardboard.h"

int         main(int argc, char *argv[]) {
    char    t;
    int     x;
    int     y;

    x = 2;
    y = 9;
    t = '\0';
    my_putstr("\033c\n"); // Clear terminal
    aff_map(x, y);

    while (t != 'q') {
        if (t == 'd') {
            my_putstr("\033c\n"); // Clear terminal
            x = x + 1;
            aff_map(x, y);
        } else if (t == 'a') {
            my_putstr("\033c\n"); // Clear terminal
            x = x - 1;
            aff_map(x, y);
        } else if (t == 'w') {
            my_putstr("\033c\n"); // Clear terminal
            y = y - 1;
            aff_map(x, y);
        } else if (t == 's') {
            my_putstr("\033c\n"); // Clear terminal
            y = y + 1;
            aff_map(x, y);
        }
        t = readline();
    }
    return (0);
}