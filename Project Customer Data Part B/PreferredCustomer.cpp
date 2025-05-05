// Implementation file for the PreferredCustomer class
#include "PreferredCustomer.h"

  // Constructors

PreferredCustomer::PreferredCustomer() : CustomerData(){
    purchasesAmount = 0.0;
    discountLevel = 0.0;
}

PreferredCustomer::PreferredCustomer(std::string _firstName, std::string _lastName, std::string _address, std::string _city, std::string _state, std::string _zip, std::string _phone, int _customerNumber, bool _mailingList, double _purchasesAmount) : CustomerData(_firstName, _lastName, _address, _city, _state, _zip, _phone, _customerNumber, _mailingList){
    purchasesAmount = _purchasesAmount;
    setDiscount();
}

  // Tool functions

void PreferredCustomer::setDiscount(){

    double temp = 0.0;
    
    if(purchasesAmount >= 500){
        temp = 0.05;
        if(purchasesAmount >= 1000){
            temp = 0.06;
            if(purchasesAmount >= 1500){
                temp = 0.07;
                if(purchasesAmount >= 2000){
                    temp = 0.1;
                }
            }
        }
    }

    discountLevel = temp;

}

  // Mutator Functions

void PreferredCustomer::purchase(double amount){
    purchasesAmount += amount;
    setDiscount();
}

  // Get functions

double PreferredCustomer::getPurchases(){
    return purchasesAmount;
}

double PreferredCustomer::getDiscount(){
    return discountLevel;
}
