/*
 
    Takes in a number of friends, the amount of money each of them spent,
    then outputs the amount each friend needs to reimburse.
 
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define prototypes
void getAverage(double amounts[], int arraySize, double &average);
double roundToHundreths(double input);

int main(){
    
    // Define variable to be used for initializing arrays
    int friendNum;
    
    // Define variable used for storing the average cost
    double average;
    
    // Take in input for amount of people
    cin >> friendNum;
    
    // Create arrays using given length
    double amounts[friendNum], debts[friendNum];
    string names[friendNum];
    
    // Recieve input for all names and values
    for(int i = 0; i < friendNum; i++){
        cin >> names[i] >> amounts[i];
    }
    
    // Gets the average amount for expenses
    getAverage(amounts, friendNum, average);
    
    // Set each friend's debt
    for(int j = 0; j < friendNum; j++){
        debts[j] = roundToHundreths(amounts[j] - average);
    }
    
    // Print out the average
    cout << "Average: " << average << "\n";
    
    // Loop through all the debts
    for(int k = 0; k < friendNum; k++){
        
        // Check if in debt
        if(debts[k] < 0){
            
            // Loop through other debts
            for(int l = 0; l < friendNum; l++){
                
                // Check if current index needs to be paid
                if(debts[l] > 0){
                    
                    // Check which debt is larger
                    if(abs(debts[k]) > debts[l]){
                        
                        // Pay the dues
                        cout << names[k] << " " << names[l] << " " << abs(debts[l]) << "\n";
                        debts[k] += debts[l];
                        debts[l] = 0;
                    }else{
                        
                        // Pay the dues
                        cout << names[k] << " " << names[l] << " " << abs(debts[k]) << "\n";
                        debts[l] += debts[k];
                        debts[k] = 0;
                        break;
                    }
                    
                }
            }
        }
    }
    
    return 0;
}

// Gets the average of an arary of numbers
void getAverage(double amounts[], int arraySize, double &average){
    
    // Create a temporary variable for calculating average
    double temp = 0;
    
    // Loop through and add all amounts together
    for(int i = 0; i < arraySize; i++){
        temp += amounts[i];
    }
    
    // Return the average amount
    average = roundToHundreths(temp / arraySize);
    
}

// Round a number to the 100ths place
double roundToHundreths(double input){
    
    return round(input * 100) / 100;
    
}
