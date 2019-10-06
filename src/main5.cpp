//
// Created by Rentol on 06.10.2019.
//
#include <iostream>
#include "task5.h"

int main() {
    char buf[] = "dabodebodib";
    char** result;
    int n;
    split(&result, &n, buf, 'o');
    std::cout << "substrings count: " << n << std::endl;
    std::cout << "substrings:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}