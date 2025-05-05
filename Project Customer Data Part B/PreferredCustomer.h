// Specification file for the PreferredCustomer class
#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H
#include "CustomerData.h"
#include <string>


class PreferredCustomer : public CustomerData
{

    private:
        double purchasesAmount;
        double discountLevel;

    public:
        
        // Constructors
        
        PreferredCustomer();
        
        PreferredCustomer(std::string _firstName, std::string _lastName, std::string _address, std::string _city, std::string _state, std::string _zip, std::string _phone, int _customerNumber, bool _mailingList, double _purchasesAmount);

        // Tool functions
        
        void setDiscount();

        // Mutator Functions

        void purchase(double amount);

        // Get functions

        double getPurchases();

        double getDiscount();
};

#endif