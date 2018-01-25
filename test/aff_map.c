#include "cardboard.h"

void        aff_map() {
    int     i;
    int     j;
    char **map;
    const char *path[5] = {
        "../Maps/Inner_Hell/cargo_dock.map", 
        "../Maps/Inner_Hell/holding_cells.map", 
        "../Maps/Inner_Hell/holding_cells2.map", 
        "../Maps/Inner_Hell/warehouse.map", 
        "../Maps/Inner_Hell/warehouse2.map"
        };
    
    map = readfile(path[0]);

    my_putstr("\033c\n"); // Clear terminal

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 15; j++) {
            my_putchar(map[i][j]);
        }
        my_putchar('\n');
    }
}