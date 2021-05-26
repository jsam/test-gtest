//
// Created by sam on 26.05.21.
//
#include <string>
#include <exception>

#include "../include/checkout.h"
#include "../include/exceptions.h"


void Checkout::addItemPrice(const std::string& item_name, int i) {
    this->_prices.emplace(item_name, i);
}

int Checkout::getItemPrice(const std::string& item_name) {
    auto it = this->_prices.find(item_name);
    if (it != this->_prices.end()) {
        return it->second;
    }

    throw NotFound();
}
