// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes
#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;


int main(){

    CustomerData c1("Smith", "Joan", "123 Main Street", "Smithville", "NC", 99999, 12345, true);
    CustomerData c2("Jones", "Jenny", "555 East Street", "Jonesville", "VA", 88888, 77777, false);
    
    cout << "Customer #1\n----------- \n";
    cout << "Last Name: " << c1.getLastName() << "\n";
    cout << "First Name: " << c1.getFirstName() << "\n";
    cout << "Address: " << c1.getAddress() << "\n";
    cout << "City: " << c1.getCity() << "\n";
    cout << "State: " << c1.getState() << "\n";
    cout << "ZIP: " << c1.getZip() << "\n";
    cout << "Customer Number: " << c1.getCustomerNumber() << "\n";
    if(c1.getMailingList()){
        cout << "Mailing List: Yes\n\n";
    }else{
        cout << "Mailing List: No\n\n";
    }

    cout << "Customer #2\n-----------\n";
    cout << "Last Name: " << c2.getLastName() << "\n";
    cout << "First Name: " << c2.getFirstName() << "\n";
    cout << "Address: " << c2.getAddress() << "\n";
    cout << "City: " << c2.getCity() << "\n";
    cout << "State: " << c2.getState() << "\n";
    cout << "ZIP: " << c2.getZip() << "\n";
    cout << "Customer Number: " << c2.getCustomerNumber() << "\n";
    if(c2.getMailingList()){
        cout << "Mailing List: Yes\n";
    }else{
        cout << "Mailing List: No\n";
    }
    

    return 0;
}