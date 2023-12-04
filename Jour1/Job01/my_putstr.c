//
// Created by eliea on 27/11/2023.
//
#include <unistd.h>
void my_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}