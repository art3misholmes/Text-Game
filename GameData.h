//
// Created by conta on 11/28/2020.
//

#ifndef SFML_TEMPLATE_GAMEDATA_H
#define SFML_TEMPLATE_GAMEDATA_H

#endif //SFML_TEMPLATE_GAMEDATA_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// creates the class needed to run the game
class GameData {
private:
    // creates a vector that stores all the users answer choices
    vector<string> answers;

    int x;
    string line;
    static const int  cave = 2;

public:
    int homeScreen();      // displays title of game and starts game when user presses the enter key
    bool startText();       // reads in & displays the 1st set of text for the story
    bool questionTwo();     // has user chose between two choices and depending on the choice different text is displayed.
    bool questionOne();     // has user chose between two choices and depending on the choice different text is displayed.
    bool partOne();         // reads in & displays the 2nd set of text for the story
    bool tape();            // play tape found in room
    bool theRoom();         // reads in & displays the 3rd set of text for the story
    bool questionThree();   // has user chose between three choices and depending on the choice different text is displayed.
    bool partTwo();         // reads in & displays the last set of text for the story
    void endText();         // displays final line of text and shows end of game
    void answer();   // takes in answers vector and prints the users answers with the questions
    void vec();     // resizes vector

};