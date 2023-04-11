//
//  main.cpp
//  CS 232 Recursion Count Down
//
//  Created by Melissa Gio on 3/6/23.
//

#include <iostream>
using namespace std;

//function prototype

void countDown(int numPar); //when the user puts a number, the function will be called, bc of the void, it will not return anything

int main() {
    //declarations
    int userNum;
    
    //get user input
    cout << "Enter a positive integer: ";
    cin >> userNum;
    
    //calculations
    countDown(userNum); //countdown function will be called
    
    
    //output
    
    
    return 0;
}


//function definitions

void countDown(int numPar) {
    if (numPar == 0) { //if number is 0 then it will be treated as the base case
        cout << numPar << endl;
    } else { //if the number isnt 0 then we will call the funcition and display the number - 1
        cout << numPar << endl;
        countDown(numPar - 1);
    }
}

//if the number is 10 then we will go to the else statement, the 10 will display and now the countdown function will be called, 10 - 1 and now its 9, it will now go through the if statement and check to see if the new number (9) is 0

//if the number finally hits 0 then it is down with its memory usage and the statement is done
