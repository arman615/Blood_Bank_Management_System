#include <iostream>
#include <vector>
#include "Donor.h"
#include "BloodUnit.h"
#include "BloodBankManager.h"

int main() {
    std::vector<Donor> donors;
    std::vector<BloodUnit> bloodInventory;

    registerDonor(donors, "Arman", "arman@example.com", "A+");
    registerDonor(donors, "Gago", "gago@example.com", "B-");

    addBloodUnit(bloodInventory, "A+", 250, "2023-07-01");
    addBloodUnit(bloodInventory, "B-", 500, "2023-07-05");
    addBloodUnit(bloodInventory, "O-", 100, "2023-07-10");
    addBloodUnit(bloodInventory, "AB+", 400, "2023-07-15");
  
    return 0;
}
