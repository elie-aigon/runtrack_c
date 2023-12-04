//
// Created by eliea on 29/11/2023.
//
# include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}