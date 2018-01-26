#include    "cardboard.h"

int         main(int argc, char *argv[]) {
    char    t;
    int     x;
    int     y;
    int     o_y;
    int     o_x;
    
    x = 2;
    y = 9;
    t = '\0';

    my_putstr("\033c\n"); // Clear terminal
    aff_map(&x, &y, &o_x, &o_y);
    while (t != 'q')
    {
        if (t == 'd') 
        {
            my_putstr("\033c\n"); // Clear terminal
            x = x + 1;
            aff_map(&x, &y, &o_x, &o_y);
        } 
        else if (t == 'a') 
        {
            my_putstr("\033c\n"); // Clear terminal
            o_x = x;
            o_y = y;
            x = x - 1;
            aff_map(&x, &y, &o_x, &o_y);
        } 
        else if (t == 'w') 
        {
            my_putstr("\033c\n"); // Clear terminal
            o_x = x;
            o_y = y;
            y = y - 1;
            aff_map(&x, &y, &o_x, &o_y);
        } 
        else if (t == 's') 
        {
            my_putstr("\033c\n"); // Clear terminal
            o_x = x;
            o_y = y;
            y = y + 1;
            aff_map(&x, &y, &o_x, &o_y);
        }
        if (x == 8 && y == 0)
        {
            my_putstr("To be continued...\n");
            return (0);
        }
        t = readline();
    }
    return (0);
}