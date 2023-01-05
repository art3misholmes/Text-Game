//
// Created by conta on 11/28/2020.
//

#include "GameData.h"
// sets size of answers vector
void GameData :: vec(){
    answers.resize(3);
}

// displays title of game
int GameData :: homeScreen(){
    cout << "Saints Park" << endl;
    cout << "Play through the story as three friends sneak onto an abandoned military base to discover what happened there 20 years ago and why it was abandoned." << endl;
    cout << "To play the game please enter one of the numeric values presented (enter 1,2, or 3)." << endl;
    cout << endl;
}

// reads in & displays the 1st set of text for the story
bool GameData :: startText(){
    // reads in info from a file
    ifstream fileIn("StartText.txt");

    // check for an error
    if(fileIn.fail()){
        cout << "Could not open file." << endl;
        return -1;
    }

    // reads in info
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;

    }

    // close the file
    fileIn.close();

}

// has user chose between two choices and depending on the choice different text is displayed.
bool GameData :: questionTwo(){

    cout << "1. \"Because you and Tom are too scared!\"" << endl;
    cout << "2. \"Because it's off limits to civilians and if we get caught the military will kill us!\"" << endl;
    cin >> x;

    if (x == 1) {
        // stores users answer to vector titled answers
        answers.at(1)= "    \"Because you and Tom are too scared!\"";

        // reads in info from a file
        ifstream fileIn("ScaredyCat.txt");

        // check for an error
        if (fileIn.fail()) {
            cout << "Could not open file." << endl;
            return -1;
        }

        // reads in info
        while (!fileIn.eof()) {
            getline(fileIn, line);
            cout << line << endl;
        }

        // close the file
        fileIn.close();
    }else{
        // stores users answer to vector titled answers
        answers.at(1)= "    \"Because it's off limits to civilians and if we get caught the military will kill us!\"";

        // reads in info from a file
        ifstream fileIn("Offlimits.txt");

        // check for an error
        if (fileIn.fail()) {
            cout << "Could not open file." << endl;
            return -1;
        }

        // reads in info
        while (!fileIn.eof()) {
            getline(fileIn, line);
            cout << line << endl;
        }

        // close the file
        fileIn.close();
    }
}

// has user chose between two choices and depending on the choice different text is displayed.
bool GameData :: questionOne(){
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> x;

    if (x == 1) {
        // stores users answer to vector titled answers
        answers.at(0)= "    Yes";

        // reads in info from a file
        ifstream fileIn("Yes.txt");

        // check for an error
        if (fileIn.fail()) {
            cout << "Could not open file." << endl;
            return -1;
        }

        // reads in info
        while (!fileIn.eof()) {
            getline(fileIn, line);
            cout << line << endl;
        }

        // close the file
        fileIn.close();

        // stores users answer to vector titled answers
        answers.at(1)= "    Did not get asked this question";

    }else{
        // stores users answer to vector titled answers
        answers.at(0)= "    No";

        // reads in info from a file
        ifstream fileIn("No.txt");

        // check for an error
        if (fileIn.fail()) {
            cout << "Could not open file." << endl;
            return -1;
        }

        // reads in info
        while (!fileIn.eof()) {
            getline(fileIn, line);
            cout << line << endl;
        }

        // close the file
        fileIn.close();

        questionTwo();
    }
}

// reads in & displays the 2nd set of text for the story
bool GameData :: partOne(){
    // reads in info from a file
    ifstream fileIn("storypt1.txt");

    // check for an error
    if(fileIn.fail()){
        cout << "Could not open file." << endl;
        return -1;
    }

    // reads in info
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;

    }

    // close the file
    fileIn.close();
}

// play tape found in room
bool GameData :: tape(){
// reads in info from a file
    ifstream fileIn("log.txt");

    // check for an error
    if (fileIn.fail()) {
        cout << "Could not open file." << endl;
        return -1;
    }

    // reads in info
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;
    }

    // close the file
    fileIn.close();
}

// reads in & displays the 3rd set of text for the story
bool GameData :: theRoom(){
    // reads in info from a file
    ifstream fileIn("Room.txt");

    // check for an error
    if (fileIn.fail()) {
        cout << "Could not open file." << endl;
        return -1;
    }

    // reads in info
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;
    }

    // close the file
    fileIn.close();

    cout << endl;
    tape();
}

// has user chose between three choices and depending on the choice different text is displayed.
bool GameData :: questionThree(){
   while (true) {
       cout << "1. The left one" << endl;
       cout << "2. The middle one" << endl;
       cout << "3. The right one" << endl;
       cin >> x;

       if (x == cave) {
           // stores users answer to vector titled answers
           answers.at(2)= "    The middle one";

           theRoom();
           cout << endl;
           break;
       } else {
           cout << "Kate: \" Oh no it\'s a dead end!" << endl;
           cout << "Try again";
       }
   }

}

// reads in & displays the last set of text for the story
bool GameData :: partTwo(){
    // reads in info from a file
    ifstream fileIn("end.txt");

    // check for an error
    if (fileIn.fail()) {
        cout << "Could not open file." << endl;
        return -1;
    }

    // reads in info
    while (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;
    }

    // close the file
    fileIn.close();
}

// displays final line of text and shows end of game
void GameData :: endText(){
    cout << endl;
    cout << "*The growing sound of radio static fills the air, the once dormant lights of the base flicker to life and explode as energy surges through them. The three friends are left in the pitch black. The sound of radio static has grown so loud the kids can't even hear their own thoughts." << endl;
    cout << endl;
    cout << "Jack: \" I don't feel good..\"" << endl;
    cout << endl;
    cout << "*Jack feels his nose begin to bleed and collapses to the ground. Kate and Tom collapse too. Everything goes black." << endl;
    cout << endl;
    cout << "7:00 A.M." << endl;
    cout << endl;
    cout << "*Jack awakes in his bedroom with a splitting headache as sunlight pours through his window." << endl;
    cout << endl;
    cout << "Jack: \"What happened?\" " << endl;
    cout << endl;
}

// takes in answers vector and prints the users answers with the questions
void GameData :: answer(){
    cout << "Your answers: " << endl;

    // question 1
    cout << "1. You ready?" << endl;
    cout << answers.at(0) << endl;
    cout << endl;

    // question 2
    cout << "2. And why not?" << endl;
    cout << answers.at(1) << endl;
    cout << endl;

    // question 3
    cout << "3. So which cave leads out?" << endl;
    cout << answers.at(2) << endl;
    cout << endl;
}
