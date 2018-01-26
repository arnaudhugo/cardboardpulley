/*
** my_putstr.c for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
** Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
*/
#include    <unistd.h>

void		my_putstr(char *str) {
    int     end;

    end = 0;
    
    while (*(str + end) != '\0') {
        char str_end;

        str_end = *(str + end);
        write(1, &str_end, 1);
        end = end + 1;
    }
}