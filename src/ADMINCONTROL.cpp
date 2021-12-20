#include "ADMINCONTROL.h"
#include <iostream>
#include <string>

using namespace std;

ADMINCONTROL::ADMINCONTROL()
{
    //ctor
}

ADMINCONTROL::~ADMINCONTROL()
{
    //dtor
}

void ADMINCONTROL :: addVenue(){

    for (int ctr = 0; ctr < venues; ctr++){

        string name;

        cout << "Name of Theater/Venue: ";
        cin >> name;

        cout << endl;

        place [ctr].name = name;

        cin.clear();
        fflush(stdin);
    }

}

void ADMINCONTROL :: movieSchedule(){

    cout << "Use ' _ ' to indicate spaces on Movie titles\n\n";

    for (int ctr = 0; ctr < movies; ctr++){

        string movie;
        string price;
        string time;

        cout << "Name of Movie: ";
        cin >> movie;

        cout << endl;

        cout << "Available Time: ";
        cin >> time;

        cout << endl;

        cout << "Price: ";
        cin >> price;

        cout << endl;

        film [ctr].movieName = movie;
        clock[ctr].movieTime = time;
        film [ctr].moviePrice = price;

        cin.clear();
        fflush(stdin);

    }

}

void ADMINCONTROL :: registerUser(){

    string user;
    string pass;
    string username;
    string password;

    cout << endl;

    cout << "Enter New Username: ";
    cin >> user;

    cout << "Enter New Password: ";
    cin >> pass;

    cout << endl;

    cout << "===================================" << endl;
    cout << endl;
    cout << "You may now Log in " << user << endl;
    cout << endl;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;
    cout << endl;

    if (username != user || password != pass){

        cout << "Incorrect Username or Password";
        cout << endl;
        exit (0);

    }

}

void ADMINCONTROL :: viewVenue(){

    cout << "===================================" << endl;
    cout << endl;
    cout << "AVAILABLE VENUES\n\n";

    cout << place [0].name << endl;
    cout << endl;

    cout << place [1].name << endl;
    cout << endl;

    cout << place [2].name << endl;
    cout << endl;

    cout << place [3].name << endl;
    cout << endl;

    cout << place [4].name << endl;
    cout << endl;
}

void ADMINCONTROL :: viewMovieSchedule(){

    cout << "===================================" << endl;
    cout << endl;
    cout << "SCHEDULES\n\n";

    cout << "Title: ";
    cout << film [0].movieName << endl;
    cout << "Time: ";
    cout << clock[0].movieTime << endl;
    cout << "Price: ";
    cout << film [0].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Title: ";
    cout << film [1].movieName << endl;
    cout << "Time: ";
    cout << clock[1].movieTime << endl;
    cout << "Price: ";
    cout << film [1].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Title: ";
    cout << film [2].movieName << endl;
    cout << "Time: ";
    cout << clock[2].movieTime << endl;
    cout << "Price: ";
    cout << film [2].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Title: ";
    cout << film [3].movieName << endl;
    cout << "Time: ";
    cout << clock[3].movieTime << endl;
    cout << "Price: ";
    cout << film [3].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Title: ";
    cout << film [4].movieName << endl;
    cout << "Time: ";
    cout << clock[4].movieTime << endl;
    cout << "Price: ";
    cout << film [4].moviePrice << endl;
    cout << endl;
    cout << endl;

}
