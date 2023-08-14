//
// Created by Alex Hall on 10/08/2023.
//

#ifndef TIW_TERRITORY_H
#define TIW_TERRITORY_H

#include <string>
#include <vector>

using namespace std;

class Territory {
public:
    typedef char idstring[4];

    enum Domain {
        LAND, SEA
    };
    idstring code;
    string name;
    Domain type[2];
    bool isResourceCentre;
    idstring parent;
    vector<idstring> neighbours;

    unsigned int holdStrength;
    unsigned int attackStrength;
};


class TerritoryCollection {
public:
    Territory &get(const Territory::idstring);

    void add(Territory);

private:
    vector<Territory> territories;
};


#endif //TIW_TERRITORY_H
