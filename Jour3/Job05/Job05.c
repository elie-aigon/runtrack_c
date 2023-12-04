//
// Created by eliea on 30/11/2023.
//
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int calcFacto(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcFacto(n - 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        int entier = atoi(argv[1]);

        if (entier >= 0) {
            printf("La factorielle de %d est : %d\n", entier, calcFacto(entier));
        } else {
            printf("Veuillez entrer un entier non négatif.\n");
        }
    }
    else {
        printf("Veuillez entrer un entier en argument.\n");
    }

    return 0;
}