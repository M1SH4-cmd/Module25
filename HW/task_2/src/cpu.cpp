#include <iostream>
#include <vector>
#include "cpu.h"
#include "ram.h"
using namespace std;

void compute() {
    double sum = 0.0;
    for (double& i : read()) {
        sum += i;
    }
    cout << "sum = " << sum << endl;
}