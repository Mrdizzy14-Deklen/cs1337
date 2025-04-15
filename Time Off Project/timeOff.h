// Specification file for the TimeOff class
#ifndef TIMEOFF_H
#define TIMEOFF_H

#include <string>
#include "numDays.h"


class TimeOff
{
    private:
    
        std::string name;
        int id;
        numDays maxSickDays;
        numDays sickTaken;
        numDays maxVacation;
        numDays vacTaken;
        numDays maxUnpaid;
        numDays unpaidTaken;
    
    public:
        
        TimeOff();

        TimeOff(std::string _name, int _id, double _maxSickDays, double _sickTaken, double _maxVacation, double _vacTaken, double _maxUnpaid, double _unpaidTaken);

        std::string getName();

        int getEmpNum();


        // Sick days functions
        double getMaxSick();

        double getSickTaken();

        double getSickTakenDays();


        // Vacation days functions
        double getMaxVacation();

        double getVacationTaken();

        double getVacationTakenDays();


        // Unpaid days functions
        double getMaxUnpaid();

        double getUnpaidTaken();

        double getUnpaidTakenDays();
};

#endif