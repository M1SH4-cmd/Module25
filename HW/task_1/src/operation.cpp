#include <iostream>
#include "operation.h"
#include <string>
using namespace std;

void scalpel(Coordinate& c1, Coordinate& c2, vector<Coordinate>& openedCuts)
{
    cout << "Please enter coordinates of first point (x y) :" << endl;
    cin >> c1.x1 >> c1.y1;
    cout << "Please enter coordinates of second point (x y) :" << endl;
    cin >> c2.x1 >> c2.y1;
    printf("Made a cut between (%d,%d) and (%d,%d)", c1.x1, c1.y1, c2.x1, c2.y1);
    openedCuts.push_back(c1);
    openedCuts.push_back(c2);
}

void hemostat(Coordinate& temp)
{
    cout << "Please enter coordinates of point (x y) :" << endl;
    cin >> temp.x1 >> temp.y1;
    printf("Added a hemostat at (%d,%d)", temp.tempX, temp.tempY);
}

void tweezers(Coordinate& temp2)
{
    cout << "Please enter coordinates of point (x y) :" << endl;
    cin >> temp2.x1 >> temp2.y1;
    printf("Added tweezers at (%d,%d)", temp2.tempX, temp2.tempY);
}

void suture(Coordinate& c1, Coordinate& c2, vector<Coordinate>& openedCuts)
{
    cout << "Please enter coordinates of first point (x y) :" << endl;
    cin >> c1.x1 >> c1.y1;
    cout << "Please enter coordinates of second point (x y) :" << endl;
    cin >> c2.x1 >> c2.y1;
    printf("Made a suture between (%d,%d) and (%d,%d)", c1.x1, c1.y1, c2.x1, c2.y1);
    if (comparePoints(c1, c2)) {
        cout << "The coordinates are the same." << endl;
        return;
    }

    vector<Coordinate>::iterator it;
    for (it = openedCuts.begin(); it != openedCuts.end(); ) {
        if (comparePoints(*it, c1) || comparePoints(*it, c2)) {
            it = openedCuts.erase(it); // Удаляем и получаем новый итератор
            cout << "Closed the cut at (%d, %d)\n", it->x1, it->y1; // Сообщение о закрытии
        } else {
            ++it; // Переходим к следующему элементу
        }
    }
}

bool comparePoints(Coordinate& c1, Coordinate& c2)
{
    return (c1.x1 == c2.x1 && c1.y1 == c2.y1);
}

bool globalCompare(Coordinate& a1, Coordinate& b1, Coordinate& a2, Coordinate& b2)
{
    return comparePoints(a1, a2) && comparePoints(b1, b2);
}

bool hasOpenedCuts(vector<Coordinate>& openedCuts)
{
    return openedCuts.size() > 0;
}