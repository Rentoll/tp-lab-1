//
// Created by Rentol on 06.10.2019.
//
#include "task1.h"
unsigned  long findValue(unsigned int min, unsigned max) {
    unsigned long answer = 0;
    bool flag = true;
    while (true) {
        answer++;
        flag = true;
        for (int i = min; i <= max; i++) {
            if (answer % i != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            break;
        }
    }
    return answer;
}
