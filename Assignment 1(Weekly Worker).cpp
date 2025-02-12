/*

  Takes the hourly pay and the amount of hours a worker worked

  Outputs the employees weekly pay

*/

#include <iostream>
using namespace std;

int main() {

  // Defines variables
  double rate, hours;

  // Prompt and recieve the rate and hours worked
  cout << "Input hourly pay rate: ";
  cin >> rate;
  cout << "Input # of hours: ";
  cin >> hours;

  // Output weekly pay
  cout << "Your weekly pay: " << rate * hours << "/n";

  return 0;
}
