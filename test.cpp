#include "Payment.h"
#include <gtest/gtest.h>

// Test PayPal with amount = 100
TEST(CheckoutTest, PayPalPayment100) {
    EXPECT_EQ(checkout(PaymentMode::PayPal, 100),
              "Processing PayPal payment of $100.000000");
}

// Test GooglePay with amount = 100
TEST(CheckoutTest, GooglePayPayment100) {
    EXPECT_EQ(checkout(PaymentMode::GooglePay, 100),
              "Processing GooglePay payment of $100.000000");
}

// Test CreditCard with amount = 100
TEST(CheckoutTest, CreditCardPayment100) {
    EXPECT_EQ(checkout(PaymentMode::CreditCard, 100),
              "Processing Credit Card payment of $100.000000");
}

// Test invalid mode with amount = 100
TEST(CheckoutTest, InvalidPayment100) {
    EXPECT_EQ(checkout(PaymentMode::Unknown, 100),
              "Invalid payment mode selected!");
}
