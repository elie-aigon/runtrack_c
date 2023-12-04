//
// Created by eliea on 29/11/2023.
//
#include <stdio.h>
#include <malloc.h>
#include <unistd.h>

char *job8_trim(char *src){
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

    int finalLen = end - src + 1;
    char *r = malloc(finalLen + 1);

    for(int i = 0; i < finalLen; i++){
        r[i] = src[i];
    }
    r[finalLen] = '\0';
    return r;
}

int sort_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    if (*str1 < *str2) {
        return -1;
    } else if (*str1 > *str2) {
        return 1;
    } else {
        return 0;
    }
}

void sort_swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

char **sort(char **strs){
    int len = 0;
    while(strs[len] != NULL){
        len++;
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (sort_strcmp(strs[j], strs[j + 1]) > 0) {
                sort_swap(&strs[j], &strs[j + 1]);
            }
        }
    }
    return strs;
}

void job8_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[]){
    if(argc < 2){
        job8_putstr("Bad args");
    }

    char **trimmedStrings = malloc((argc - 1) * sizeof(char *));
    for (int i = 1; i < argc; i++) {
        trimmedStrings[i - 1] = job8_trim(argv[i]);
    }

    sort(trimmedStrings);
    for (int i = 0; i < argc - 1; i++) {
        job8_putstr(trimmedStrings[i]);
        if (i < argc - 2) {
            job8_putstr(" ");
        }
    }

    job8_putstr("\n");

    for (int i = 0; i < argc - 1; i++) {
        free(trimmedStrings[i]);
    }
    free(trimmedStrings);

    return 0;
}