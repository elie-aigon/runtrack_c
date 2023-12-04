//
// Created by eliea on 27/11/2023.
//

#include <unistd.h>

void my_putchar(char c){
    write(1, &c, 1);
}