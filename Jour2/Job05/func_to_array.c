//
// Created by eliea on 29/11/2023.
//
#include <unistd.h>

void func_to_array(char **strs, void (*fun)(char*)){
    int i = 0;
    while(strs[i] != NULL){
        (*fun)(strs[i]);
        i++;
    }
}