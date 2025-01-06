#pragma once
#include <vector>
using namespace std;

struct Coordinate {
    int x1;
    int y1;


    int tempX;
    int tempY;

    int z;
};



bool globalCompare(Coordinate& a1, Coordinate& b1, Coordinate& a2, Coordinate& b2);

bool comparePoints(Coordinate& c1, Coordinate& c2);

void hemostat(Coordinate& temp);

void tweezers(Coordinate& temp2);

void suture(Coordinate& c1, Coordinate& c2);

void scalpel(Coordinate& c1, Coordinate& c2, vector<Coordinate>& openedCuts);

bool hasOpenedCuts(vector<Coordinate>& openedCuts);
