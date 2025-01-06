#include <iostream>
#include <vector>
#include "ram.h"
using namespace std;

vector<double> buffer;

void write(double d) {
    buffer.push_back(d);
}

vector<double> read() {
    return buffer;
}

