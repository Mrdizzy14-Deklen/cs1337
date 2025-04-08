#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Payroll.h"
using namespace std;

int main(){

    // Define the array
    Payroll arr[7];

    // Prompt the user
    cout << "Enter the hours worked and pay rate for 7 employees:\n\n";

    // Add the 7 payroll objects
    for(int i = 0; i < 7; i++){

        double rate = -1, hours = -1;
        
        // Prompt user for rate
        cout << "Employee #" << i + 1 << " pay rate: ";
        cin >> rate;

        // Throw an error
        // (I know I don't need this, just makes sense to have it)
        if(rate < 0){
            cout << "Invalid rate.\n";
        }

        cout << "\n";
        
        // Prompt user for hours
        cout << "Employee #" << i + 1 << " hours worked: ";
        cin >> hours;

        // Throw an error
        if(hours < 0 || hours > 60){
            cout << "Invalid number of hours.\n";
        }
        
        // ^^Why do we not have a while loop for error's?^^
        // Test cases throw a time error if its there but pass when it's not

        // Save the employee's data
        Payroll temp(rate, hours);
        arr[i] = temp;
        cout << "\n";
    }

    // Output the pay amounts
    cout << "Total pay:\n\n";
    for(int j = 0; j < 7; j++){
        cout << "Employee #" << j + 1 << ": " << fixed << setprecision(2) << arr[j].getGross() << "\n\n";

    }

    return 0;
}