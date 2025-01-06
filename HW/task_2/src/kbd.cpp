#include <iostream>
#include <vector>
#include "kbd.h"
#include "ram.h"

void input() {
    for (int i = 0; i < 8; ++i) {
        double d;
        std::cin >> d;
        write(d);
    }
}