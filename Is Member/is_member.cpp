#include <iostream>
#include <iomanip>
using namespace std;

bool isMember(int *arr, int size, int val);

int main(){

    // Get array elements
    int elementNum = 0;
    cin >> elementNum;
    
    int arr[elementNum];
    for(int i = 0; i < elementNum; i++){
        cin >> arr[i];
    }
    
    // Call recursive function with base value
    isMember(arr, elementNum, 0);
    
    return 0;

}



bool isMember(int *arr, int size, int val){

    // Test all elements for target value
    bool temp = false;
    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            temp = true;
            break;
        }
    }

    // Output result
    if(temp){
        cout << val << " is found in the array.\n";
    }else{
        cout << val << " is not found in the array.\n";
    }

    // Recur function again
    if(val < 20){
        isMember(arr, size, val + 1);
    }

    return temp;

}