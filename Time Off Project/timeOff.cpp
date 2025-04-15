// Implementation file for the TimeOff class
#include <iostream>
#include <string>
#include "timeOff.h"
using namespace std;


// Constructor for TimeOff
TimeOff::TimeOff(){
    name = "";
    id = 0;
}

// Alternate Constructor
TimeOff::TimeOff(string _name, int _id, double _maxSickDays, double _sickTaken, double _maxVacation, double _vacTaken, double _maxUnpaid, double _unpaidTaken){
    name = _name;
    id = _id;
    maxSickDays.setHours(_maxSickDays);
    sickTaken.setHours(_sickTaken);
    if(_maxVacation > 240){
        _maxVacation = 240;
    }
    maxVacation.setHours(_maxVacation);
    vacTaken.setHours(_vacTaken);
    maxUnpaid.setHours(_maxUnpaid);
    unpaidTaken.setHours(_unpaidTaken);
}


// Get employee data
string TimeOff::getName(){
    return name;
}

int TimeOff::getEmpNum(){
    return id;
}


// Sick days functions
double TimeOff::getMaxSick(){
    return maxSickDays.getHours();
}

double TimeOff::getSickTaken(){
    return sickTaken.getHours();
}

double TimeOff::getSickTakenDays(){
    return sickTaken.getDays();
}


// Vacation days functions
double TimeOff::getMaxVacation(){
    return maxVacation.getHours();
}

double TimeOff::getVacationTaken(){
    return vacTaken.getHours();
}

double TimeOff::getVacationTakenDays(){
    return vacTaken.getDays();
}


// Unpaid days functions
double TimeOff::getMaxUnpaid(){
    return maxUnpaid.getHours();
}

double TimeOff::getUnpaidTaken(){
    return unpaidTaken.getHours();
}

double TimeOff::getUnpaidTakenDays(){
    return unpaidTaken.getDays();
}