#include <iostream>
#include "numDays.h"
using namespace std;

int main(){

    // Temp variable
    double input;

    // Take inputs for the first 2 objects
    cin >> input;
    numDays one(input);

    cin >> input;
    numDays two(input);

    // Output the original objects
    cout << "One: " << one.getDays() << "\n";
    cout << "Two: " << two.getDays() << "\n";

    // Perform functions on the objects
    numDays three = one + two;
    cout << "Three: " << three.getDays() << "\n";

    numDays four = three++;
    cout << "Four = Three++ : " << four.getDays() << "\n";
    four = ++three;
    cout << "Four = ++Three:" << four.getDays() << "\n";
    four = three--;
    cout << "Four = Three-- : " << four.getDays() << "\n";
    four = --three;
    cout << "Four = --Three : " << four.getDays() << "\n";

    return 0;
}