// BloodUnit.cpp

#include "BloodUnit.h"

BloodUnit::BloodUnit(const std::string& bloodType, int quantity, const std::string& date)
    : bloodType(bloodType), quantity(quantity), date(date) {}

const std::string& BloodUnit::getBloodType() const {
    return bloodType;
}

int BloodUnit::getQuantity() const {
    return quantity;
}

const std::string& BloodUnit::getDate() const {
    return date;
}
