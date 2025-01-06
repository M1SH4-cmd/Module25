#include <iostream>
#include <vector>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
using namespace std;

int main() {

    while (true) {
        cout << "Enter your command:" << endl;
        string command;
        cin >> command;

        switch (command) {
            case "exit": return 0;
            case "display": display();
            case "save" : save();
            case "load" : load();
            case "sum" : compute();
            case "input" : input();
        }
    }

    return 0;
}