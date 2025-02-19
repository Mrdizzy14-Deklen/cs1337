/*

    Performs a bubble sort algorithm and a selection sort algorithm on 2 identical
    arrays. Then compares the steps taken in each, listing the number of passes made.

*/

#include <iostream>

using namespace std;

// Define prototypes for the sorting algorithms
void bubbleSort(int size, int arr[]);
void selectionSort(int size, int arr[]);

int main(){

    // Define the 2 arrays
    int arrInput1[8] = { 105, 102, 107, 103, 106, 100, 104, 101 };
    int arrInput2[8] = { 105, 102, 107, 103, 106, 100, 104, 101 };

    // Call the 2 sorting algorithms
    bubbleSort(8, arrInput1);
    cout << "\n";
    selectionSort(8, arrInput2);

    return 0;
}

void bubbleSort(int size, int arr[]){

    // Header
    cout << "Now performing the bubble sort\n------------------------------\n";

    // Define a pass counter
    int passes = 0;

    // Loop through each index]
    for(int i = 0; i < size - 1; i++){

        // For each index, compare all the way to the end
        for(int j = 1; j < size; j++){

            // If higher, perform a switch
            if(arr[j - 1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            
            // Increment pass number
            passes++;

            // Output the pass number and the new array
            cout << "After pass " << passes << ": ";
            for(int k = 0; k < size; k++){
                cout << arr[k];
                if(k < size - 1){
                    cout << " ";
                }
            } 
            cout << "\n";
        }
    }
}

void selectionSort(int size, int arr[]){

    // Header
    cout << "Now performing the selection sort\n---------------------------------\n";

    // Define a pass counter
    int passes = 0;
    
    for(int i = 0; i < size - 1; i++){
        
        // Define temp variable for the smallest item
        int smallestIndex = i;

        // Find the smallest item
        for(int j = i; j < size; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }

        // Switch the 2 elements
        if(i != smallestIndex){
            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
        }

        // Increment pass number
        passes++;

        // Output the pass number and the new array
        cout << "After pass " << passes << ": ";
        for(int k = 0; k < size; k++){
            cout << arr[k];
            if(k < size - 1){
                cout << " ";
            }
        } 
        cout << "\n";
    }
}

