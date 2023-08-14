//
// Created by alexh on 14/08/2023.
//

#ifndef TIW_ORDER_H
#define TIW_ORDER_H

#include <string>
#include <vector>
#include "Territory.h"
#include "Faction.h"

using namespace std;

class Order {
public:
    int solve();

    enum Movement {
        ATTACK, SUPPORT, HOLD
    };
    unsigned int id;
    unsigned int faction;
    Territory::idstring from;
    Territory::idstring to;
};

class OrderCollection {
public:
    Order *get(unsigned int);

    OrderCollection getWhereFrom(const Territory::idstring);

    void add(Order *);

private:
    vector<Order *> orders;
};


#endif //TIW_ORDER_H
