#include <iostream>
#include <vector>
#include "operation.h"
using namespace std;



int main() {
    vector<Coordinate> openedCuts;

    Coordinate cutPoint1, cutPoint2;
    Coordinate sutPoint1, sutPoint2;
    Coordinate temp1, temp2;
    while (true) {
        cout << "Input your command:" << endl;
        string command;
        cin >> command;
        switch (command) {
            case "scalpel" : scalpel(cutPoint1, cutPoint2, openedCuts);
            case "hemostat" : hemostat(temp1);
            case "tweezers" : tweezers(temp2);
            case "suture" : suture(sutPoint1, sutPoint2);
            case "exit" :
                if (hasOpenedCuts(openedCuts)) {
                    cout << "You still have opened cuts to suture" << endl;
                } else break;
        }
    }
    return 0;
}