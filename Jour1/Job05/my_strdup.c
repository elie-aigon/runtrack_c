//
// Created by eliea on 27/11/2023.
//
#include <unistd.h>
#include <malloc.h>


char *my_strdup(char *src){
    if(src == NULL){
        return NULL;
    }
    int length = 0;
    while(src[length] != '\0'){
        length++;
    }
    char *dest = (char *)malloc(length + 1);
    if(dest == NULL){
        return NULL;
    }
    for(int i = 0; i <= length; i++){
        dest[i] = src[i];
    }
    return dest;
}

