//
// Created by eliea on 29/11/2023.
//
#include <stdio.h>

#include <unistd.h>


void *convertToLower(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
    return str;
}

void job7_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[]){
    for(int i = 1; i < argc; i++){
        convertToLower(argv[i]);
        job7_putstr(argv[i]);
        job7_putstr("\n");
    }
}