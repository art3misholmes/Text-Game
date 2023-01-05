/* CSCI261 Final Project - Saints Park
 *
 * Author: Kelsi Wood
 *
 * This program reads in text files and prints them to the users' conceal so they can play through the game by selecting one of the numbered options to continue through the game.
*/

#include <iostream>                             // for standard input/output
#include <fstream>                              // read in files
#include <string>

#include "GameData.h"

using namespace std;                            // using the standard namespace

int main() {
    // creates object called saintsPark
    GameData saintsPark;

    // runs functions in the GameData class for object called saintsPark
    saintsPark.vec();
    saintsPark.homeScreen();
    saintsPark.startText();
    saintsPark.questionOne();
    saintsPark.partOne();
    saintsPark.questionThree();
    saintsPark.partTwo();
    saintsPark.endText();

    // prints the end to users conceal
    cout << "The End?" << endl;
    cout << endl;

    // prints the users answers to each question asked
    saintsPark.answer();

    return 0;
}