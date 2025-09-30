#pragma once
#include <string>

// Enum for Payment Modes
enum class PaymentMode {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown
};

// Function declarations
std::string paymentModeToString(PaymentMode mode);
std::string checkout(PaymentMode mode, double amount);
