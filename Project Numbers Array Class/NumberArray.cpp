// Implementation file for the NumberArray class
#include <iostream>
#include "NumberArray.h"
using namespace std;


// Constructor for NumberArray
NumberArray::NumberArray(int size){
    arr = new float[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    len = size;
}


// Destructor for NumberArray
NumberArray::~NumberArray(){
    delete [] arr;
}


// Stores values to the array
void NumberArray::storeVal(float item, int index){
    arr[index] = item;
}


// Gets values from the array
float NumberArray::getVal(int index){
    return arr[index];
}


// Gets the highest value from the array
float NumberArray::getHighest(){
    int temp = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] > arr[temp]){
            temp = i;
        }
    }
    return arr[temp];
}


// Gets the lowest value from the array
float NumberArray::getLowest(){
    int temp = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] < arr[temp]){
            temp = i;
        }
    }
    return arr[temp];
}


// Gets the average value of the array
float NumberArray::getAvg(){
    float avg = 0;
    for(int i = 0; i < len; i++){
        avg += arr[i];
    }
    return avg/len;
}