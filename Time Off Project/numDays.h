// Specification file for the numDays class
#ifndef NUMDAYS_H
#define NUMDAYS_H

class numDays
{
    private:
        double hours;
        double days;

        double calcDays(){
            return hours/8.0;
        }

        double calcHours(){
            return days * 8.0;
        }
    public:
    
        numDays();

        numDays(double h);
        
        void setHours(double h);

        void setDays(double d);

        double getHours(){
            return hours;
        }

        double getDays(){
            return days;
        }

        numDays operator+(const numDays& x);

        numDays operator-(const numDays& x);

        numDays operator++();

        numDays operator++(int);

        numDays operator--();

        numDays operator--(int);
};

#endif