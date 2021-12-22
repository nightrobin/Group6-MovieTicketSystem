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

    cout <<"========= Enter Venue Name =========\n\n";

    for (int ctr = 0; ctr < venues; ctr++){

        string name;

        cout << endl;

        cout << "Name of Theater/Venue: ";
        getline(cin, name);

        cout << endl;

        place [ctr].name = name;

        cin.clear();
        fflush(stdin);
    }

}

void ADMINCONTROL :: movieSchedule(){

    cout <<"===== Enter Movie Information =====\n\n";

    for (int ctr = 0; ctr < movies; ctr++){

        string movie;
        string time;
        string price;

        cout << "Name of Movie: ";
        getline(cin, movie);

        cout << endl;

        cout << "Available Time: ";
        getline (cin, time);

        cout << endl;

        cout << "Price: ";
        cin >> price;

        film [ctr].movieName = movie;
        clock[ctr].movieTime = time;
        film [ctr].moviePrice = price;

        cin.clear();
        fflush(stdin);

    }

}

void ADMINCONTROL :: modifyMovie(int ctr){

    cout << "Name of Movie: " << film [ctr].movieName << endl;
    cout << "Modified Name of Movie: ";
    getline (cin, film [ctr].movieName);

    cout << endl;

    cout << "Available Time: " << clock[ctr].movieTime << endl;
    cout << "Modified Time: ";
    getline (cin, clock[ctr].movieTime);

    cout << endl;

    cout << "Price: " << film [ctr].moviePrice << endl;
    cout << "Modified Price: ";
    cin >> film [ctr].moviePrice;

    cout << endl;

    cin.clear();
    fflush(stdin);

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
    cout << "You may now Log in" << user << endl;
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

    cout << "Movie ID: 0" << endl;
    cout << "Title: ";
    cout << film [0].movieName << endl;
    cout << "Time: ";
    cout << clock[0].movieTime << endl;
    cout << "Price: ";
    cout << film [0].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Movie ID: 1" << endl;
    cout << "Title: ";
    cout << film [1].movieName << endl;
    cout << "Time: ";
    cout << clock[1].movieTime << endl;
    cout << "Price: ";
    cout << film [1].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Movie ID: 2" << endl;
    cout << "Title: ";
    cout << film [2].movieName << endl;
    cout << "Time: ";
    cout << clock[2].movieTime << endl;
    cout << "Price: ";
    cout << film [2].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Movie ID: 3" << endl;
    cout << "Title: ";
    cout << film [3].movieName << endl;
    cout << "Time: ";
    cout << clock[3].movieTime << endl;
    cout << "Price: ";
    cout << film [3].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "Movie ID: 4" << endl;
    cout << "Title: ";
    cout << film [4].movieName << endl;
    cout << "Time: ";
    cout << clock[4].movieTime << endl;
    cout << "Price: ";
    cout << film [4].moviePrice << endl;
    cout << endl;
    cout << endl;

}
