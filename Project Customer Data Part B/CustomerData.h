// CustomerData class
#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
using namespace std;
#include "PersonData.h"

class CustomerData : public PersonData
{
    private:

    int customerNumber;
    bool mailingList;

    public:

    // Constructors
    
    CustomerData() : PersonData(){
        customerNumber = 0;
        mailingList = false;
    }
    
    CustomerData(std::string _firstName, std::string _lastName, std::string _address, std::string _city, std::string _state, std::string _zip, std::string _phone, int _customerNumber, bool _mailingList) : PersonData(_firstName, _lastName, _address, _city, _state, _zip, _phone){
        customerNumber = _customerNumber;
        mailingList = _mailingList;
    }

    // Get functions

    int getCustomerNumber(){
        return customerNumber;
    }

    std::string getMailingList(){
      if(mailingList){
        return "Yes";
      }else{
        return "No";
      }
    }

    // Mutator Functions

    void setCustomerNumber(int temp){
        customerNumber = temp;
    }

    void setMailingList(bool temp){
        mailingList = temp;
    }

};

#endif