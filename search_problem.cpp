/*

    Takes in a sorted list and compares the iterations of a linear search 
    and a binary search used on the input

*/
#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int search);
int binarySearch(int arr[], int size, int search);

int main(){
  
    // Define the size of the array and take the input
    int size = 20;
    cin >> size;

    // Define the array and take in the inputs
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        cout << arr[i] << "\n";
    }

    // Define the element we are searching for and take in the input
    int search;
    cin >> search;
    cout << "Searching for the value " << search << ", located near the end of the array.";

    // Output the results
    cout << "The linear search made " << linearSearch(arr, size, search) << " comparisons. The binary search made " << binarySearch(arr, size, search) << " comparisons.\n";
    
    return 0;
}

// Check for the number of iterations in a linerar search
int linearSearch(int arr[], int size, int search){

    // Define a check count    
    int linearChecks = 0;

    // Search through one by one
    for(int i = 0; i < size; i++){

        // Increment the num of checks
        linearChecks++;

        // Check if found
        if(arr[i] == search){
            break;
        }
    }

    // Return the result
    return linearChecks;
}

// Check for the number of iterations in a binary search
int binarySearch(int arr[], int size, int search){
    
    // Define a check count and a check found
    int binaryChecks = 0;
    bool found = false;

    // Define the head and tail of the search
    int head = size - 1;
    int tail = 0;

    // While still searching
    while(!found){

        // Increment the num of checks
        binaryChecks++;

        // Define whats being checked
        int checkedSpot = (head + tail)/2;
        int checking = arr[checkedSpot];

        // Check if found
        if(checking == search){

            found = true;
            break;
        }else if(checking > search){

            // Else move the head
            head = checkedSpot - 1;
        }else{

            // Else move the tail
            tail = checkedSpot + 1;
        }
    }

    // Return the result    
    return binaryChecks;
}