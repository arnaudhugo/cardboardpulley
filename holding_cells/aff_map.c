/*
** aff_map.c for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
** Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
*/
#include "cardboard.h"

void        aff_map(int *x, int *y, int *o_x, int *o_y, int *all, int *key, int *get, int *room) {
    int     i;
    int     j;

    i = 0;
    j = 0;

    if (*room == 0)
    {
        char    map[13][15] = {
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
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
        if (map[*y][*x] == 'X') 
        {
            if (*key == 0 || *get < 3)
            {
                *x = *o_x;
                *y = *o_y;
                map[*y][*x] = 'i';
            }
            else if (*key == 1 && *get == 3 && map[4][8] == ' ')
            {
                map[*y][*x] = 'i';
                *o_x = *x;
                *o_y = *y;
            } 
        }
        else 
        {
            if (*all %2)
            {
                map[*y][*x] = '_';
                *o_x = *x;
                *o_y = *y;
            }
            else 
            {
                map[*y][*x] = 'i';
                *o_x = *x;
                *o_y = *y;
            }      
        }

        while (i < 13)
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

        if (map[*y][*x] == map[1][8])
            *room = 1;
        my_putchar('\n');
        key = 0;
    }   
    else if (*room == 2)
    {
        char    map[6][26] = {
            {'X','X','X','X','X','X','X','X','X','X','X','x','X','X','X','X','X','X','X','x','X','X','X','X','X','X'},
            {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'},
            {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X','H','H','H','X'},
            {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','H',' ',' ',' ','X'},
            {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','H',' ','K',' ','X'},
            {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}
            };
        if (map[*y][*x] == 'X' || map[*y][*x] == 'x') 
        {
            if (*key == 0 || *get < 3)
            {
                *x = *o_x;
                *y = *o_y;
                map[*y][*x] = 'i';
            }
            else if (*key == 1 && *get == 3 && map[4][8] == ' ' && map[*y][*x] == 'x')
            {
                map[*y][*x] = 'i';
                *o_x = *x;
                *o_y = *y;
            }
        }
        else 
        {
            if (*all %2)
            {
                map[*y][*x] = '_';
                *o_x = *x;
                *o_y = *y;
            }
            else if (map[*y][*x] == 'H') 
            {
                *x = *o_x;
                *y = *o_y;
                map[*y][*x] = 'i'; 
            }
            else if (map[*y][*x] == 'K') 
            {
                if (*key == 0)
                {
                    map[*y][*x] = 'i';
                    *o_x = *x;
                    *o_y = *y;
                }
                if (*key == 1)
                {
                    map[*y][*x] = 'i';
                    *o_x = *x;
                    *o_y = *y;
                    *get = 2;     
                }
            }
            else 
            {
                map[*y][*x] = 'i';
                *o_x = *x;
                *o_y = *y;
            }     
        }

        i = 0;
        j = 0;

        while (i < 6)
        {
            while (j < 26)
            {
                if (*key == 1 && i == 4 && j == 23 && *get > 1)
                {
                    if (*x == 4 && *y == 23)
                        map[4][23] = 'i';    
                    else
                        map[4][23] = ' ';
                }
                if (*key == 1 && i == 0 && j == 11 && *get == 3)
                    my_putchar(' ');
                else 
                    my_putchar(map[i][j]);
                j++;
            }
            my_putchar('\n');
            j = 0;
            i++;
        }
        my_putchar('\n');
        if (*key == 1 && *get == 2)
            my_putstr("You got the key \n");
    }
}