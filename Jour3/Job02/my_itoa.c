//
// Created by eliea on 29/11/2023.
//
#include <unistd.h>
#include <stdio.h>
#include <malloc.h>

char *my_itoa(int n) {
    int size = 1;
    int temp = n;
    while (temp / 10 != 0) {
        size++;
        temp /= 10;
    }

    char* str = (char*)malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        return NULL;
    }

    int i = size - 1;
    while (n != 0) {
        str[i] = '0' + (n % 10);
        n /= 10;
        i--;
    }
    str[size] = '\0';

    return str;
}