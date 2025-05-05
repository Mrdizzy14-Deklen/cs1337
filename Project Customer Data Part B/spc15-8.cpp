// Chapter 15, Programming Challenge 8: PreferredCustomer Class
#include <iostream>
#include <iomanip>
#include "PreferredCustomer.h"
using namespace std;


int main()
{
   string lastName;     // The person's last name
   string firstName;    // The person's first name
   string address;      // The person's address
   string city;         // The person's city
   string state;        // The person's state
   string zip;          // The person's ZIP code
   string phone;

   int customerNumber;     // Customer number
   string mailingListInput;  

	// Variable to hold the amount of purchases.
	double purchase;

  

  cin>>lastName>>firstName;
  cin.ignore();
  getline(cin, address);
  cin>>city>>state>>zip>>phone>>customerNumber>>mailingListInput>>purchase;

  // Determine if mailing list

  bool mailingList = (mailingListInput == "Yes" || mailingListInput == "yes");

  // Define a customer

  PreferredCustomer customer(firstName, lastName, address, city, state, zip, phone, customerNumber, mailingList, purchase);

  // Output

  cout << "Initial Customer Data\n---------------------\n";
  cout << "Last name: " << customer.getLastName() <<"\n";
  cout << "First name: " << customer.getFirstName() <<"\n";
  cout << "Address: " << customer.getAddress() <<"\n";
  cout << "City: " << customer.getCity() <<"\n";
  cout << "State: " << customer.getState() <<"\n";
  cout << "ZIP: " << customer.getZip() <<"\n";
  cout << "Phone: " << customer.getPhone() <<"\n";
  cout << "Customer number: " << customer.getCustomerNumber() <<"\n";
  cout << "Mailing list: " << customer.getMailingList() <<"\n";
  cout << "Purchases amount: $" << fixed << setprecision(2) << customer.getPurchases() <<"\n";
  cout << "Current discount level: " << customer.getDiscount() <<"\n\n";
  cout << "Enter an additional purchase amount: ";
  double amount;
  cin >> amount;
  customer.purchase(amount);
  cout << "\nPurchases amount: $" << fixed << setprecision(2)  << customer.getPurchases() <<"\n";
  cout << "Current discount level: " << customer.getDiscount() <<"";


}

