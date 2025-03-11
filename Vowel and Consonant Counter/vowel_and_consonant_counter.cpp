/*

    Takes in an input and prompts the user to enter an option. 

    Depending on what they choose, the number of vowels, 
    the number of consonants, or both will be printed, the user will be prompted for another 
    input, or the program will end.

*/
#include <iostream>

using namespace std;

// Define prototypes for the sorting algorithms
int vowelCount(char *arr);
int consonantCount(char *arr);

int main(){

    // Define the max count for the string and recieve the input
    const int MAX = 100;
    char input[MAX];
    cin.getline(input, MAX);

    // Define the choice loop for the user
    string choice;
    while(true){
        
        // Read in the choice and perform the function
        cin >> choice;
        if(choice == "A"){
            // Prints the vowel count
            cout << "The string has " << vowelCount(input) << " vowels." << endl;
        }else if(choice == "B"){
            // Prints the consonant count
            cout << "The string has " << consonantCount(input) << " consonants." << endl;
        }else if(choice == "C"){
            // Prints both
            cout << "The string has " << vowelCount(input) << "vowels and " << consonantCount(input) << " consonants." << endl;
        }else if(choice == "D"){
            // Prompts for another input
            cin.ignore();
            cin.getline(input, MAX);
        }else if(choice == "E"){
            // Ends the loop
            break;
        }
    }
    
    return 0;
}

// Takes in an array pointer, returns the vowel count
int vowelCount(char *arr){
    int count = 0;
    bool check;

    // Check each index for vowel
    for(int i = 0; arr[i] != '\0'; i++){
        check = false;
        switch(tolower(arr[i])){
            case 'a':
                check = true;
                break;
            case 'e':
                check = true;
                break;
            case 'i':
                check = true;
                break;
            case 'o':
                check = true;
                break;
            case 'u':
                check = true;
                break;
            case 'y':
                check = true;
                break;
        }
        if(check){
            count++;
        }
    }
    return count;
}

// Takes in an array pointer, returns the consonant count
int consonantCount(char *arr){
    int count = 0;
    bool check;

    // Check each index for consonant
    for(int i = 0; arr[i] != '\0'; i++){
        check = false;
        switch(tolower(arr[i])){
            case 'b':
                check = true;
                break;
            case 'c':
                check = true;
                break;
            case 'd':
                check = true;
                break;
            case 'f':
                check = true;
                break;
            case 'g':
                check = true;
                break;
            case 'h':
                check = true;
                break;
            case 'j':
                check = true;
                break;
            case 'k':
                check = true;
                break;
            case 'l':
                check = true;
                break;
            case 'm':
                check = true;
                break;
            case 'n':
                check = true;
                break;
            case 'p':
                check = true;
                break;
            case 'q':
                check = true;
                break;
            case 'r':
                check = true;
                break;
            case 's':
                check = true;
                break;
            case 't':
                check = true;
                break;
            case 'v':
                check = true;
                break;
            case 'w':
                check = true;
                break;
            case 'x':
                check = true;
                break;
            case 'z':
                check = true;
                break;
            
        }
        if(check){
            count++;
        }
    }
    return count;
}