//
// Created by eliea on 27/11/2023.
//
#include <unistd.h>

int my_strcmp(const char *str1, const char *str2) {

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
