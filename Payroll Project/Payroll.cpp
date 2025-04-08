#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Payroll.h"
using namespace std;

int main(){

    // Define the array
    Payroll arr[7];

    // Prompt the user
    cout << "Enter the hours worked and pay rate for 7 employees:\n";

    for(int i = 0; i < 7; i++){

        double rate = -1, hours = -1;
        
        // Repeatedly prompt rate until valid number is given 
        // (I know I only needed the while loop for the hours but just for good practice)
        while (rate < 0){
            cout << "Employee #" << i + 1 << " pay rate: ";
            cin >> rate;

            // Throw an error
            if(rate < 0){
                cout << "Invalid rate.";
            }
        }
        
        // Repeatedly prompt for hours until valid number is given
        while(hours < 0 || hours > 60){

            cout << "Employee #" << i + 1 << " hours worked: ";
            cin >> hours;

            // Throw an error
            if(hours < 0 || hours > 60){
                cout << "Invalid number of hours.";
            }
        }
        
        // Save the employee's data
        Payroll temp(rate, hours);
        arr[i] = temp;
        cout << "\n";
    }

    // Output the pay amounts
    cout << "Total pay:";
    for(int j = 0; j < 7; j++){
        cout << "Employee #" << j + 1 << ": " << fixed << setprecision(2) << arr[j].getGross();

    }

    return 0;
}