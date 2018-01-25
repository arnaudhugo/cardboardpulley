#include "cardboard.h"

char    **readfile(const char *path)
{
    int fd;
    int i;
    int j;
    int row;
    int colunm;
    int tmp;
    char buf[1];
    char **map;

    row = 0;
    colunm = 0;
    tmp = 0;
    i = 0;
    j = 0;

    // ========== Calcul de la taille du tableau
    ssize_t count;
    fd = open(path, O_RDONLY);
    count = read(fd, buf, sizeof(buf));
    while (count > 0)
    {
        if (*buf != '\n')
        {
            if (tmp == 0)
                colunm++;
        }
        else
        {
            row++;
            tmp = 1;
        }
        count = read(fd, buf, sizeof(buf));
    }
    close(fd);

    // ========== Affectation taille tableau en fonction de la map
    map = malloc(row * sizeof(char**));
    for (i=0; i < row; i++)
    {
        map[i] = malloc(colunm * sizeof(char*));
    }

    // ========== Remplissage tableau
    fd = open(path, O_RDONLY);
    count = read(fd, buf, sizeof(buf));
    while (count > 0)
    {
        if (*buf != '\n')
        {
            map[i][j] = *buf;
            j++;
        }
        else
        {
            j = 0;
            i++;
        }
        count = read(fd, buf, sizeof(buf));
    }
    close(fd);
    return (map);
}