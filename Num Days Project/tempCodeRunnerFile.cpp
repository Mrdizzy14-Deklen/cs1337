#include <iostream>
#include "numDays.h"
using namespace std;

int main(){

    double input;

    cin >> input;
    numDays one(input);

    cin >> input;
    numDays two(input);

    cout << "One: " << one.getDays() << "\n";
    cout << "Two: " << two.getDays() << "\n";

    numDays three = one + two;
    cout << "Three: " << three.getDays() << "\n";

    numDays four = three++;
    cout << "Four = Three++ : " << four.getDays() << "\n";
    four = ++three;
    cout << "Four = ++Three: : " << four.getDays() << "\n";
    four = three--;
    cout << "Four = Three-- : " << four.getDays() << "\n";
    four = --three;
    cout << "Four = --Three : " << four.getDays() << "\n";

    return 0;
}