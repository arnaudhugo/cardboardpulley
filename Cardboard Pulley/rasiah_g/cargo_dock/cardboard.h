/*
** cardboard.h for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
** Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
*/
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
void                aff_map(int *x, int *y, int *o_x, int *o_y);
#endif