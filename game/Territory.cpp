//
// Created by Alex Hall on 10/08/2023.
//

#include "Territory.h"

Territory &TerritoryCollection::get(const Territory::idstring id) {
    for (auto &territory: this->territories) {
        if (territory.code == id) {
            return territory;
        }
    }
}
