//
// Created by eliea on 30/11/2023.
//
#include <unistd.h>
#include <stdio.h>

int my_sqrt(int x){
    if (x == 0 || x == 1) {
        return x;
    }
    int start = 0;
    int end = x;
    int result = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid <= x / mid) {
            start = mid + 1;
            result = mid;
        } else {
            end = mid - 1;
        }
    }
    return result;
}