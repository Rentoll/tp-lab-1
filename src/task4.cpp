//
// Created by Rentol on 06.10.2019.
//
#include <cstdlib>
#include "task4.h"

char * sum(char *x, char *y) {
    int lenX = 0, lenY = 0, lenRes = 0;
    char* res;
    int save = 0;
    int temp = 0;
    while (*(x + lenX + 1) != '\0' ) {
        lenX++;
    }
    while (*(y + lenY + 1) != '\0' ) {
        lenY++;
    }
    lenRes = lenX;
    if (*(x) - '0' + *(y) - '0' > 9) {
        lenRes++;
    }
    res = (char*) malloc ((lenRes + 1) * sizeof(char));
    *(res + lenRes + 1) = '\0';
    while (lenY >= 0) {
        temp = save + (*(x + lenX) - '0') + (*(y + lenY) - '0');
        *(res + lenRes) = (temp % 10) + '0';
        save = temp / 10;
        lenX--;
        lenY--;
        lenRes--;
    }
    while(lenX >=0) {
        temp = save + (*(x + lenX) - '0');
        *(res + lenRes) = (temp % 10) + '0';
        save = temp / 10;
        lenX--;
        lenRes--;
    }
    if (save != 0) {
        *(res + lenRes) = save + '0';
    }
    return res;
}
