//
// Created by Rentol on 06.10.2019.
//
#include "task2.h"
#include <cmath>
#include <iostream>

bool checkPrime(unsigned int value) {
    for(unsigned long long i = 2; i * i <= value; i++) {
        if(value % i == 0)
            return false;
    }
    return true;
}

unsigned long long nPrime(unsigned n) {
    unsigned long long answer = 1, count = 0;
    while(count != n) {
        answer++;
        if(checkPrime(answer)) {
            count++;
        }
    }
    return answer;
}

unsigned long long nextPrime(unsigned long long value) {
    unsigned long long answer = value+1;

    while(!checkPrime(answer)) {
        answer++;
    }
    return answer;
}
