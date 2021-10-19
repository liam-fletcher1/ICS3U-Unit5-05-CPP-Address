// Copyright (c) 2021 Liam Fletcher All rights reserved.
//
// Created by: Liam Fletcher
// Created on: October 2021
// This program gets info from user and shows their address

#include <iostream>
#include <string>

std::string AddressFormatted(std::string fullName,
                      std::string streetNum,
                      std::string streetName,
                      std::string userCity,
                      std::string userProvince,
                       std::string postalCode,
                      std::string ApartmentNumber = "") {
    // This function makes a address in proper format

    std::string Address;

    // Process
    if (ApartmentNumber.size() != 0) {
        Address = fullName + "\n" + ApartmentNumber, + \
                      + "-" + streetNum + streetName + "\n" + userCity \
                      + " " + userProvince + "  " + postalCode;
    } else {
        Address = fullName + "\n" + streetNum + streetName, "\n" + \
                      userCity + " " + userProvince + \
                      "  " + postalCode;
    }
    return Address;
}

int main() {
    // gets users info to format

    std::string userFullName;
    std::string userApartment;
    std::string question;
    std::string userStreetNum;
    std::string userStreetName;
    std::string userCityName;
    std::string userProvinceName;
    std::string userPostalCode;
    std::string cardFormat;
    std::string userApartmentNumber = "";

    // Input
    std::cout << "Enter your full name: " << std::endl;
    std::getline(std::cin, userFullName);
    std::cout << "Do you live in an apartement? (y/n): " << std::endl;
    std::getline(std::cin, question);
    if (question == "y" || question == "yes") {
        std::cout << "Enter your apartment number: " << std::endl;
        std::getline(std::cin, userApartment);
    }
    std::cout << "Enter your street number: "
              << std::endl;
    std::getline(std::cin, userStreetNum);
    std::cout << "Enter your street name AND type (Main St...): " << std::endl;
    std::getline(std::cin, userStreetName);
    std::cout << "Enter your city: "
              << std::endl;
    std::getline(std::cin, userCityName);
    std::cout << "Enter your province (short form): " << std::endl;
    std::getline(std::cin, userProvinceName);;
    std::cout << "Enter your postal code: "
              << std::endl;
    std::getline(std::cin, userPostalCode);

    // Process
    if (userApartmentNumber != "") {
        cardFormat = AddressFormatted(userFullName, userStreetNum,
        userStreetName, userCityName, userProvinceName,
        userPostalCode, userApartmentNumber);
    } else {
        cardFormat = AddressFormatted(userFullName, userStreetNum,
        userStreetName, userCityName, userProvinceName,
        userPostalCode);
    }
    // Output
    std::cout << "" << std::endl;
    std::cout << cardFormat << std::endl;
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
