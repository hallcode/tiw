//
// Created by Alex Hall on 10/08/2023.
//

#ifndef TIW_TERRITORY_H
#define TIW_TERRITORY_H

#include <string>
#include <vector>

using namespace std;

class Territory {
    enum Domain {
        LAND, SEA, COAST, MULTI
    };
    int id;
    char code[4];
    string name;
    Domain type;
    bool isResourceCentre;
    Territory *parent;
    vector<Territory *> neighbours;
};


#endif //TIW_TERRITORY_H
