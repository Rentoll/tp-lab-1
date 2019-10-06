//
// Created by Rentol on 06.10.2019.
//
#include "task3.h"
#include "task2.h"
#include <cmath>

unsigned long long sumPrime(unsigned int hbound) {
    unsigned long long sum = 0;
    for (int i = 2; i < hbound; i++) {
        if(checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
