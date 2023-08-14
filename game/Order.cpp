//
// Created by alexh on 14/08/2023.
//

#include "Order.h"
#include "Territory.h"

/**
 * Add an already defined order to this collection.
 * @param order
 */
void OrderCollection::add(Order *order) {
    this->orders.push_back(order);
}

/**
 * Get the order at the specified index.
 * @param offset
 * @return
 */
Order *OrderCollection::get(unsigned int offset) {
    return this->orders.at(offset);
}

/**
 * Takes a three (or four in the case of some coasts) char code representing a
 * 'target' territory and returns all orders in the collection which point at
 * that territory.
 * @param toCode
 * @return OrderCollection
 */
OrderCollection OrderCollection::getWhereFrom(const Territory::idstring toCode) {
    OrderCollection collection;
    for (auto order : this->orders) {
        if (order->to != toCode) {
            continue;
        }

        collection.add(order);
    }

    return collection;
}
