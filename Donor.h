#ifndef DONOR_H
#define DONOR_H

#include <string>

class Donor {
private:
    std::string name;
    std::string contactInfo;
    std::string bloodType;

public:
    Donor(const std::string& name, const std::string& contactInfo, const std::string& bloodType);

    const std::string& getName() const;
    const std::string& getContactInfo() const;
    const std::string& getBloodType() const;
};

#endif // DONOR_H
