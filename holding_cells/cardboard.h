#ifndef __CARDBOARD_H__
#define __CARDBOARD_H__

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct      s_room
{
    char            **map;
    struct room     *next;
}                   t_room;

//----------------------------- Autres ---------------------------------
void                my_putchar(char c);
char		        readline(void);
void		        my_putstr(char *str);
void                aff_map(int *x, int *y, int *o_x, int *o_y, int *all, int *key, int *get, int *room);
#endif