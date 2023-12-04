//
// Created by eliea on 27/11/2023.
//
#include <unistd.h>
#include <stdio.h>


int my_strlen(char *str){
    char *s = str;
    while(*s){
        ++s;
    }
    return s - str;
}
