#include "cardboard.h"

int         main(int argc, char *argv[]) {
    char    t;

    aff_map();
    
    while (t != 'q') {
        t = readline();
    }
    return (0);
}