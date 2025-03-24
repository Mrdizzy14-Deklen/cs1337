/*

    Records student data into structs and outputs all saved data.

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Student structure

struct Student
{
  string name; // Student name
  int idNum; // Student ID number
  int *tests; // Pointer to array of test scores
  double average; // Average test score
  char grade; // Course grade
};

char findGrade(int avg);
void outputStudents(Student *arr, int students);

int main(){

    // Define count variables
    int students, tests;

    // Prompt for student num and test num
    cin >> students;
    cin >> tests;

    Student arr[students];

    for(int i = 0; i < students; i++){
        
        Student temp;

        // Get the student's name and id
        cin >> temp.name;
        cin >> temp.idNum;

        // Go through and collect all test scores
        int testArr[tests];
        double avg = 0, score = 0;

        for(int j = 0; j < tests; j++){
            cin >> score;
            testArr[j] = score;
            avg += score;
        }

        // Save the test array, average, and grade value
        temp.tests = testArr;
        temp.average = avg/tests;
        temp.grade = findGrade(avg/tests);

        // Append the new student data
        arr[i] = temp;
    }

    outputStudents(arr, students);

    return 0;
}

char findGrade(int avg){

    // Temp grade
    char grade = 'F';

    // Loop through thresholds to find the grade
    if(avg > 60){
        grade = 'D';
        if(avg > 70){
            grade = 'C';
            if(avg > 80){
                grade = 'B';
                if(avg > 90){
                    grade = 'A';
                }
            }
        }
    }

    return grade;
}

void outputStudents(Student *arr, int students){

    // Output all student data
    for(int i = 0; i < students; i++){
        cout << "Student name: " << arr[i].name << "\n";
        cout << "ID number: " << arr[i].idNum << "\n";
        cout << "Average test score: " << fixed << setprecision(1) << arr[i].average << "\n";
        cout << "Grade: " << arr[i].grade << "\n";

    }
}