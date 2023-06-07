#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std; // don't be like me, don't use namespece std... I'm just lazy

/*
Modulus Def: The Modulus is the remainder of the euclidean division of one number by another. % is called the modulo operation.
For instance, 9 divided by 4 equals 2 but it remains 1. Here, 9 / 4 = 2 and 9 % 4 = 1.


*/


int diceFunction(){
    const short minValue = 1; // initializing the minimum value of the dice
    const short maxValue = 6; // initializing the maximum value of the dice
    srand(time(0)); // this line seeds the rand() function. this means we tell it what values it will use to create the random number. time(0) uses the current time of seconds elapsed from 1/1/1970
    short randomNumber1 = rand() % ((maxValue - minValue + 1)) + minValue; // rand() will provide us with the seeded random number. "Check Modulus def" then we add minValue to make sure we dont get a 0! 
    short randomNumber2 = rand() % ((maxValue - minValue + 1)) + minValue;
    cout << "YOUR DICE ROLL: " << randomNumber1 << "," << randomNumber2 << endl
    << "would you like to roll the dice again?" << endl
    << "1. Yes" << endl
    << "Any other key. Quit" << endl
    << "> ";

    string userInput; // taking in the user input, check the above cout statement to see options
    cin >> userInput;
    if (userInput == "1"){
        diceFunction();
    }else{ // this else statement just means if the user inputs anything other than '1' close the program
        cout << "Thanks for using TerminalDice!" << endl;
    }

    return 0;
}

int mainMenu(){ // the main menu function, this will be the hub that starts other functions if we decide to code them in there. 
    cout << "To roll the dice, enter '1'" << endl
    << "> ";
    string userInput;
    cin >> userInput;
    if (userInput == "1"){
        diceFunction();
    } else {
        cout << "Please enter a valid option 'type 1 into the terminal'." << endl; // in this cout statement we can take out the "type 1 into the terminal" thing if we add different functions to the program
        mainMenu();
    }
    
    return 0;
}

int main(){ // the main function always runs in a cpp program.
    mainMenu();
    return 0;
}