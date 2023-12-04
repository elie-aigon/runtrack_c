//
// Created by eliea on 27/11/2023.
//
#include <unistd.h>
#include <stdio.h>

char *my_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
