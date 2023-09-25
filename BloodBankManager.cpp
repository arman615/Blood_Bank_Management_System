#include "BloodBankManager.h"
#include <iostream>
#include <fstream>

void registerDonor(std::vector<Donor>& donors, const std::string& name, const std::string& contactInfo, const std::string& bloodType) {
    Donor newDonor(name, contactInfo, bloodType);
    donors.push_back(newDonor);
    std::cout << "Donor registered successfully.\n";
}

void addBloodUnit(std::vector<BloodUnit>& bloodInventory, const std::string& bloodType, int quantity, const std::string& date) {
    BloodUnit newBloodUnit(bloodType, quantity, date);
    bloodInventory.push_back(newBloodUnit);
    std::cout << "Blood unit added to inventory.\n";
}

std::vector<BloodUnit> searchBloodUnits(const std::vector<BloodUnit>& bloodInventory, const std::string& bloodType) {
    std::vector<BloodUnit> foundBloodUnits;
    for (const BloodUnit& bloodUnit : bloodInventory) {
        if (bloodUnit.getBloodType() == bloodType) {
            foundBloodUnits.push_back(bloodUnit);
        }
    }
    return foundBloodUnits;
}

void generateBloodInventoryReport(const std::vector<BloodUnit>& bloodInventory) {
    std::ofstream file("blood_inventory_report.txt");
    if (file.is_open()) {
        file << "Blood Inventory Report\n";
        for (const BloodUnit& bloodUnit : bloodInventory) {
            file << "Blood Type: " << bloodUnit.getBloodType() << std::endl;
            file << "Quantity: " << bloodUnit.getQuantity() << " ml" << std::endl;
            file << "Date: " << bloodUnit.getDate() << std::endl;
            file << "-------------------------\n";
        }
        file.close();
        std::cout << "Blood inventory report generated and saved to file successfully.\n";
    } else {
        std::cout << "Unable to generate blood inventory report or save to file.\n";
    }
}

void generateLowStockReport(const std::vector<BloodUnit>& bloodInventory, int threshold) {
    std::cout << "Low Stock Blood Types:\n";
    for (const BloodUnit& bloodUnit : bloodInventory) {
        if (bloodUnit.getQuantity() < threshold) {
            std::cout << "Blood Type: " << bloodUnit.getBloodType() << std::endl;
            std::cout << "Quantity: " << bloodUnit.getQuantity() << " ml" << std::endl;
            std::cout << "-------------------------\n";
        }
    }
}

void generateMonthlyReport(const std::vector<BloodUnit>& bloodInventory, const std::string& month) {
    std::ofstream file("monthly_report.txt");
    if (file.is_open()) {
        file << "Monthly Report for " << month << "\n";
        for (const BloodUnit& bloodUnit : bloodInventory) {
            std::string bloodUnitMonth = bloodUnit.getDate().substr(5, 2);
            if (bloodUnitMonth == month) {
                file << "Blood Type: " << bloodUnit.getBloodType() << std::endl;
                file << "Quantity: " << bloodUnit.getQuantity() << " ml" << std::endl;
                file << "Date: " << bloodUnit.getDate() << std::endl;
                file << "-------------------------\n";
            }
        }
        file.close();
        std::cout << "Monthly report generated and saved to file successfully.\n";
    } else {
        std::cout << "Unable to generate monthly report or save to file.\n";
    }
}
