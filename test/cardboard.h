#ifndef __CARDBOARD_H__
#define __CARDBOARD_H__

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct      s_room
{
    char            **map;
    struct room     *next;
}                   t_room;

//----------------------------- Autres ---------------------------------
void                my_putchar(char c);
char		        readline(void);
void		        my_putstr(char *str);
void                aff_map();
int                 my_strlen(char *str);
int	                my_tablen(char tab[]);
char                **readfile(const char *path);
#endif