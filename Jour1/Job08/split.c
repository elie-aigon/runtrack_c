//
// Created by eliea on 27/11/2023.
//
#include <stdio.h>
#include <malloc.h>

char **split(char *src){
    if (src == NULL || *src == '\0') {
        // Chaîne vide, renvoyer un tableau vide
        char **result = malloc(sizeof(char *));
        *result = NULL;
        return result;
    }
    int wordCount = 1; // Au moins un mot
    for (const char *ptr = src; *ptr != '\0'; ptr++) {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == '\r') {
            wordCount++;
            while (*ptr + 1 == ' ' || *ptr + 1 == '\t' || *ptr + 1 == '\n' || *ptr + 1 == '\r') {
                ptr++;
            }
        }
    }

    char **result = malloc((wordCount + 1) * sizeof(char *));

    for (int i = 0; i < wordCount; i++) {
        result[i] = NULL;
    }

    int index = 0;
    const char *start = src;
    for (const char *ptr = src; *ptr != '\0'; ptr++) {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == '\r') {
            if (ptr > start) {
                int length = ptr - start;
                result[index] = malloc((length + 1) * sizeof(char));

                result[index][length] = '\0';
                index++;
            }
            start = ptr + 1;
        }
    }

}