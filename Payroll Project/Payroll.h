// Specification file for the Payroll class
#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll
{
    private:
        double hours;
        double payRate;
        double totalPay;
    public:
    
        Payroll(){
            hours = 0;
            payRate = 0;
            totalPay = 0;
        }

        Payroll(double r, double h){
            hours = h;
            payRate = r;
            totalPay = h * r;
        }

        float getGross() const {
            return totalPay;
        }
};

#endif