// Implementation file for the numDays class
#include <iostream>
#include "numDays.h"
using namespace std;


// Constructor for numDays
numDays::numDays(){
    hours = 0;
    days = 0;
}

// Alternate Constructor
numDays::numDays(double h){
    hours = h;
    days = calcDays();
}

// Stores hour value
void numDays::setHours(double h){
    hours = h;
    days = calcDays();
}

// + operator
numDays numDays::operator+(const numDays& x){
    numDays temp;
    temp.hours = this->hours + x.hours;
    temp.days = temp.calcDays();
    return temp;
}

// - operator
numDays numDays::operator-(const numDays& x){
    numDays temp;
    temp.hours = this->hours - x.hours;
    temp.days = temp.calcDays();
    return temp;
}

// ++ prefix operator
numDays numDays::operator++(){
    hours++;
    days = calcDays();
    return *this;
}

// ++ postfix operator
numDays numDays::operator++(int){
    numDays temp = *this;
    ++hours;
    days = calcDays();
    return temp;
}

// -- prefix operator
numDays numDays::operator--(){
    hours--;
    days = calcDays();
    return *this;
}

// -- postfix operator
numDays numDays::operator--(int){
    numDays temp = *this;
    --hours;
    days = calcDays();
    return temp;
}