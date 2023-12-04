//
// Created by eliea on 29/11/2023.
//
#include <unistd.h>
#include <malloc.h>
#include <stdio.h>

void delete_str_array(char ***strs){
    for(int i = 0; (*strs)[i] != NULL; i++){
        free((*strs)[i]);
        (*strs)[i] = NULL;
    }
    free(*strs);
    *strs = NULL;
}