//
// Created by eliea on 29/11/2023.
//
#include <unistd.h>

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