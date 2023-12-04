//
// Created by eliea on 30/11/2023.
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

int my_atoi(char *str){
    int result = 0;
    int sign = 1;

    while (*str == ' ') {
        str++;
    }
    if (*str == '-' || *str == '+') {
        sign = (*str++ == '-') ? -1 : 1;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void print(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}
int main(int argc, char *argv[]){
    if (argc == 2){
        int n = my_atoi(argv[1]);
        unsigned long long result = factorial(n);
        print(my_itoa(result));
    } else {
        print("Bad input type, please restart");
    }
    return 0;
}