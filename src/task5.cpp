//
// Created by Rentol on 06.10.2019.
//
#include <cstdlib>
#include <string.h>
#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
    int len = strlen(buf);
    *N = 1;
    for (int i = 0; i < len; i++) {
        if (buf[i] == ch) {
            (*N)++;
        }
    }

    *result = (char **)malloc((*N) * sizeof(char*));
    auto temp = (char *)malloc((len + 1) * sizeof(char));
    int cnt = 1;
    *(*result + 0) = temp;

    for (int i = 0; i < len; i++) {
        temp[i] = buf[i];
        if (temp[i] == ch) {
            *(temp + i) = '\0';
            *(*result + cnt) = temp + i + 1;
            cnt++;
        }
    }
    temp[len] = '\0';
}
