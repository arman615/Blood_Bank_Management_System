#include "Donor.h"

Donor::Donor(const std::string& name, const std::string& contactInfo, const std::string& bloodType)
    : name(name), contactInfo(contactInfo), bloodType(bloodType) {}

const std::string& Donor::getName() const {
    return name;
}

const std::string& Donor::getContactInfo() const {
    return contactInfo;
}

const std::string& Donor::getBloodType() const {
    return bloodType;
}
