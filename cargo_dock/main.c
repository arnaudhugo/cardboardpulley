#include "cardboard.h"


int         main(int argc, char *argv[]) {
    char *t;
    t = "";

    aff_map();

    while (*t != 'q') {
        if (*t == 'd') {
            my_putstr("\033c"); // Clear terminal
            // Mouvement
            aff_map();
        }
        t = readline();
    }

    return (0);
}