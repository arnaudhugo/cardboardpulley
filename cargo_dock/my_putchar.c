/*
** my_putchar.c for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
** Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
*/
#include    <unistd.h>

void    my_putchar(char c)
{
    write(1, &c, 1);
}