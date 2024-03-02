// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    uint64_t icount = 0;
    for (uint64_t i = 1; i <= value; i++) {
        if (value % i == 0) {
            icount++;
        }
    }
    if (icount == 2) {
        return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    uint64_t icount2 = 0;
    uint64_t i = 1;
    while (true) {
        i++;
        if (checkPrime(i) == true) {
            icount2++;
        }
        if (icount2 == n) {
            return i;
        }
    }
}

uint64_t nextPrime(uint64_t value) {
    for (uint64_t i = value + 1;; i++) {
        if (checkPrime(i) == true) {
            return i;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    if (hbound < 3) {
        return 0;
    }
    if (hbound == 3) {
        return 2;
    }
    uint64_t sum = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i) == true) {
            sum = sum + i;
        }
    }
    return sum;
}
