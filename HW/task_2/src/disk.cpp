#include <iostream>
#include <vector>
#include <fstream>
#include <disk.h>
#include "ram.h"
using namespace std;

void save() {
    ofstream saveFile;
    saveFile.open("data.txt");
    if (!saveFile.is_open()) {
        cout << "Error in opening file" << endl;
        return;
    }
    for (double& i : read()) {
        saveFile << i << endl;
    }
}


void load() {
    ifstream loadFile;
    loadFile.open("data.txt");
    if (!loadFile.is_open()) {
        cout << "Error in opening file" << endl;
        return;
    }
    while (!loadFile.eof()) {
        double d;
        loadFile >> d;
        write(d);
    }
}