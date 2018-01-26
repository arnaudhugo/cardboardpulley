#include    "cardboard.h"

int         main(int argc, char *argv[]) {
    char    t;
    int     x;
    int     y;
    int     o_y;
    int     o_x;
    int     all;
    int     key;
    int     get;
    int     room;
      
    room = 0;
    get = 0;
    key = 0;
    all = 0;
    x = 2;
    y = 10;
    t = '\0';
    my_putstr("\033c\n"); // Clear terminal
    aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);

    while (t != 'q') {
        if (t == 'd') {                ////DDDDDDDDDDDDDDDDDDDD//
            if (room == 1){
                get = 0;
                key = 0;
                room = 2;
                x = 0;
                y = 3;
            }
            my_putstr("\033c\n"); // Clear terminal
            x = x + 1;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        } else if (t == 'a') {                      //AAAAAAAAAAAAAAAAAAAA//
            my_putstr("\033c\n"); // Clear terminal
            if (room == 1){
                get = 0;
                key = 0;
                room = 2;
                x = 0;
                y = 3;
            }
            o_x = x;
            o_y = y;
            x = x - 1;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        } else if (t == 'w') {            //WWWWWWWWWWWWWWWWWWWW//
            if (room == 1){
                get = 0;
                key = 0;
                room = 2;
                x = 0;
                y = 3;
            }

            my_putstr("\033c\n"); // Clear terminal
            o_x = x;
            o_y = y;
            y = y - 1;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        } else if (t == 's') {                  ////SSSSSSSSSSSSSSSSSSSS//
            my_putstr("\033c\n"); // Clear terminal
            if (room == 1){
                get = 0;
                key = 0;
                room = 2;
                x = 0;
                y = 3;
            }
            o_x = x;
            o_y = y;
            y = y + 1;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        }else if (t == '\0') {                  ////SSSSSSSSSSSSSSSSSSSS//
            my_putstr("\033c\n"); // Clear terminal
            if (room == 1){
                get = 0;
                key = 0;
                room = 2;
                x = 0;
                y = 3;}
                aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
            } else if (t == 'c') {
            my_putstr("\033c\n"); // Clear terminal
            all = all + 1;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        } else if (t == ' ') {
            my_putstr("\033c\n"); // Clear terminal
            get = 1;
            key = 1;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        } else if (t == 'e'){
            my_putstr("\033c\n"); // Clear terminal
            if (get == 2){
                get = 3;
                key = 1;
            }
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        } else if (room == 1){
            my_putstr("\033c\n"); // Clear terminal
            room = 2;
            aff_map(&x, &y, &o_x, &o_y, &all, &key, &get, &room);
        }
        t = readline();
    }
    return (0);
}