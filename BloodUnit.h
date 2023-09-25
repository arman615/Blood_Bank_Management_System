#ifndef BLOODUNIT_H
#define BLOODUNIT_H

#include <string>

class BloodUnit {
private:
    std::string bloodType;
    int quantity; // in milliliters
    std::string date;

public:
    BloodUnit(const std::string& bloodType, int quantity, const std::string& date);

    const std::string& getBloodType() const;
    int getQuantity() const;
    const std::string& getDate() const;
};

#endif // BLOODUNIT_H
