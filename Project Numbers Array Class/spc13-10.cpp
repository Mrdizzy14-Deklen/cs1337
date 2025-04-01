// Chapter 13, Programming Challenge 10: Number Array Class
#include <iostream>
#include "NumberArray.h"
using namespace std;

int main(){


    // Get the size of the array
    int size = 0;
    cin >> size;


    // Create the object
    NumberArray arr(size);


    // Output the numbers
    cout << "Here are the numbers you entered:\n";


    for(int i = 0; i < size; i++){
        cout << "Number " << i + 1 << ": " << arr.getVal(i) << "\n";
    }

    
    cout << "\n---------------------------------";
    cout << "The average of those numbers is: " << arr.getAvg();
    cout << "The highest of those numbers is: " << arr.getHighest();
    cout << "The lowest of those numbers is: " << arr.getLowest();
    return 0;
}