#include <iostream>
#include "Payment.h"

int main() {
    double amount = 150.75;

    std::cout << checkout(PaymentMode::PayPal, amount) << std::endl;
    std::cout << checkout(PaymentMode::GooglePay, amount) << std::endl;
    std::cout << checkout(PaymentMode::CreditCard, amount) << std::endl;
    std::cout << checkout(PaymentMode::Unknown, amount) << std::endl;

    return 0;
}
