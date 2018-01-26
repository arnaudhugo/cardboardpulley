/*
** readline.c for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
** Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
*/
#include	<stdlib.h>
#include	<unistd.h>

char		    readline(void)
{
    ssize_t	    ret;
    char		*buff;

    if ((buff = malloc((50 + 1) * sizeof(char))) == NULL)
        return ('\0');
    if ((ret = read(0, buff, 50)) > 1)
    {
        buff[ret - 1] = '\0';
        return (buff[0]);
    }
    free(buff);
    return ('\0');
}