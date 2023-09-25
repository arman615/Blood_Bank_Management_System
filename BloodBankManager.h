#ifndef BLOODBANKMANAGER_H
#define BLOODBANKMANAGER_H

#include "Donor.h"
#include "BloodUnit.h"
#include <vector>

void registerDonor(std::vector<Donor>& donors, const std::string& name, const std::string& contactInfo, const std::string& bloodType);
void addBloodUnit(std::vector<BloodUnit>& bloodInventory, const std::string& bloodType, int quantity, const std::string& date);
std::vector<BloodUnit> searchBloodUnits(const std::vector<BloodUnit>& bloodInventory, const std::string& bloodType);
void generateBloodInventoryReport(const std::vector<BloodUnit>& bloodInventory);
void generateLowStockReport(const std::vector<BloodUnit>& bloodInventory, int threshold);
void generateMonthlyReport(const std::vector<BloodUnit>& bloodInventory, const std::string& month);

#endif // BLOODBANKMANAGER_H
