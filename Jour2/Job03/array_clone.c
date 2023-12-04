//
// Created by eliea on 29/11/2023.
//
#include <unistd.h>
#include <malloc.h>

char **array_clone(char **strs, int n){
    char **output = malloc((n + 1) * sizeof(char *));
    int i = 0;
    while(i < n && strs[i] != NULL){
        output[i] = strs[i];
        i++;
    }
    output[n] = NULL;
    return output;
}