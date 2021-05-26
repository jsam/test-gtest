//
// Created by sam on 26.05.21.
//

#include <iostream>
#include <gtest/gtest.h>

#include "../include/checkout.h"
#include "../include/exceptions.h"


TEST(CheckoutTest, CanInstantiateCheckout) {
    Checkout co;
}

TEST(CheckoutTest, CanAddItemPrice) {
    Checkout co;
    co.addItemPrice("a", 1);
    co.addItemPrice("2", -1);
}

TEST(CheckoutTest, CanGetItemPrice) {
    Checkout co;
    co.addItemPrice("a", 1);
    int price = co.getItemPrice("a");
    ASSERT_EQ(price, 1);
}

TEST(CheckoutTest, CanNotGetItemPrice) {
    Checkout co;
    try {
        int price = co.getItemPrice("a");
        FAIL();
    } catch (NotFound& err) {
        EXPECT_EQ(err.what(), "element not found");
    } catch (...) {
        FAIL();
    }
}