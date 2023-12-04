//
// Created by eliea on 27/11/2023.
//
#include <stdio.h>
#include <malloc.h>

char *trim(char *src){
    if(src == NULL){
        return NULL;
    }
    while (*src == ' ' || *src == '\t' || *src == '\n' || *src == '\r'){
        src++;
    }
    if (*src == '\0'){
        char *r = malloc(1);
        *r = '\0';
        return r;
    }
    int len = 0;
    while(src[len] != '\0'){
        len++;
    }
    char *end = src + (len - 1);
    while(end > src && (*end == ' ' || *end == '\t' || *end == '\n' || *end == '\r')){
        end--;
    }

    size_t finalLen = end - src + 1;
    char *r = malloc(finalLen + 1);

    for(int i = 0; i < finalLen; i++){
        r[i] = src[i];
    }
    r[finalLen] = '\0';
    return r;
}