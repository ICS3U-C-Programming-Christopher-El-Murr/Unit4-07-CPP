// Copyright (c) 2025 Christopher El-Murr All rights reserved
// Created by Christopher El-Murr
// Date:2026/01/04
// this program prints the integers from 1000 to 2000,
// outputting five integers per line with each separated by a space.

#include <iostream>

int main() {
    int count = 0;
    for (int i = 1000; i <= 2000; ++i) {
        std::cout << i << " ";
        count++;
        if (count % 5 == 0) {
            std::cout << std::endl;
        }
    }
    return 0;
}
