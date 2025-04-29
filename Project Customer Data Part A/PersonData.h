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
    int zip;
    int phone;

    public:

    // Constructors

    PersonData(){

        lastName = "";
        firstName = "";
        address = "";
        city = "";
        state = "";
        zip = 0;
        phone = 0;
        
    }

    PersonData(std::string _lastName, std::string _firstName, std::string _address, std::string _city, std::string _state, int _zip){
        
        lastName = _lastName;
        firstName = _firstName;
        address = _address;
        city = _city;
        state = _state;
        zip = _zip;
        phone = 0;

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
    int getZip(){
        return zip;
    }
    int getPhone(){
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
    void setZip(int temp){
        zip = temp;
    }
    void setPhone(int temp){
        phone = temp;
    }

};

#endif