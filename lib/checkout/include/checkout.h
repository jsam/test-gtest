//
// Created by sam on 26.05.21.
//

#ifndef GOOGLE_TEST_CHECKOUT_H
#define GOOGLE_TEST_CHECKOUT_H

#include <string>
#include <map>

class Checkout {
private:
    std::map<std::string, int> _prices;

public:
    void addItemPrice(const std::string& item_name, int i);

    int getItemPrice(const std::string &item_name);
};


#endif //GOOGLE_TEST_CHECKOUT_H
