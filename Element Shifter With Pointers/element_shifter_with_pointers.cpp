/*

    Takes the size of an array and the elements of an array.

    Prints the elements of the given array and the elements
    of the array after being shifted over once with 0 in the 
    first index

*/

#include <iostream>

using namespace std;

// Define prototypes for the shift and print functions
int *shift(int size, int arr[]);
void printArr(int size, int arr[]);

int main(){

    // Define and recieve the size of the array
    int size;

    cin >> size;

    // Define and recieve the elements of the array
    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Print out the original array
    cout << "The contents of the original array are:\n";
    printArr(size, arr);

    // Shift the array
    int *newArr = shift(size, arr);

    // Print out the new array after being shifted
    cout << "The contents of the new array are:\n";
    printArr(size + 1, newArr);

    return 0;
}

int *shift(int size, int arr[]){

    // Define the new array
    int *newArr = new int[size];
    
    newArr[0] = 0;

    // Shift all elements over 1 index
    for(int i = 0; i < size; i++){
        newArr[i + 1] = arr[i];
    }

    // Return the new array's pointer
    return newArr;
}

void printArr(int size, int arr[]){

    // Print out each element in the given array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}