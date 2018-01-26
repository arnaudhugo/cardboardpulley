/*
** aff_map.c for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
** Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
*/
#include    "cardboard.h"

void        aff_map(int *x, int *y, int *o_x, int *o_y) {
    int     i;
    int     j;
    char    map[12][15] = {
            {' ', ' ', 'X', 'X', 'X', 'X', 'X', 'X', ' ', 'X', 'X', 'X', 'X', 'X', 'X'},
            {' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
            {' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
            {' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X', ' ', 'X', ' ', ' ', ' ', ' ', 'X'},
            {' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X', ' ', 'X', ' ', ' ', ' ', ' ', 'X'},
            {' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X', ' ', 'X', ' ', ' ', ' ', ' ', 'X'},
            {' ', ' ', 'X', ' ', ' ', ' ', ' ', 'X', ' ', 'X', ' ', ' ', ' ', ' ', 'X'},
            {'X', 'X', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
            {'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
            {'X', ' ', 'O', ' ', ' ', ' ', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
            {'X', ' ', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'X', 'X', 'X', 'X', 'X', 'X', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };

    i = 0;
    j = 0;

    my_putstr("Press 'q' to quit.\n\n");
    if (map[*y][*x] == 'X') 
    {
        *x = *o_x;
        *y = *o_y;
        map[*y][*x] = 'i'; 
    }
    else 
    {
        map[*y][*x] = 'i';
        *o_x = *x;
        *o_y = *y;
    }
    while (i < 12)
    {
        while (j < 15)
        {
            my_putchar(map[i][j]);
            j++;
        }
        my_putchar('\n');
        j = 0;
        i++;
    }
    
    o_x = x;
    o_y = y;
}