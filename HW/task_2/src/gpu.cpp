#include <iostream>
#include "gpu.h"
#include "ram.h"
using namespace std;

void display() {
    for (double& i : read()) {
        cout << i << " ";
    }
}