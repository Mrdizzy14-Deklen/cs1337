// PersonData class
#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData
{
    private:

    std::string lastName;
    std::string firstName;
    std::string address;
    std::string city;
    std::string state;
    std::string zip;
    std::string phone;

    public:

    // Constructors

    PersonData(){

        lastName = "";
        firstName = "";
        address = "";
        city = "";
        state = "";
        zip = "";
        phone = "";
        
    }

    PersonData(std::string _firstName, std::string _lastName, std::string _address, std::string _city, std::string _state, std::string _zip, std::string _phone){
        
        lastName = _lastName;
        firstName = _firstName;
        address = _address;
        city = _city;
        state = _state;
        zip = _zip;
        phone = _phone;

    }

    // Get functions

    std::string getLastName(){
        return lastName;
    }
    std::string getFirstName(){
        return firstName;
    }
    std::string getAddress(){
        return address;
    }
    std::string getCity(){
        return city;
    }
    std::string getState(){
        return state;
    }
    std::string getZip(){
        return zip;
    }
    std::string getPhone(){
        return phone;
    }

    // Mutator functions
    
    void setLastName(std::string temp){
        lastName = temp;
    }
    void setFirstName(std::string temp){
        firstName = temp;
    }
    void setAddress(std::string temp){
        address = temp;
    }
    void setCity(std::string temp){
        city = temp;
    }
    void setState(std::string temp){
        state = temp;
    }
    void setZip(std::string temp){
        zip = temp;
    }
    void setPhone(std::string temp){
        phone = temp;
    }

};

#endif