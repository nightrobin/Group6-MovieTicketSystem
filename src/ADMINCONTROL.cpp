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

        cout << endl;

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

    cout << "\nSPACES ARE NOT ALLOWED\n";

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

    cout << "MOVIE ID: 0" << endl;
    cout << "Title: ";
    cout << film [0].movieName << endl;
    cout << "Time: ";
    cout << clock[0].movieTime << endl;
    cout << "Price: ";
    cout << film [0].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 1" << endl;
    cout << "Title: ";
    cout << film [1].movieName << endl;
    cout << "Time: ";
    cout << clock[1].movieTime << endl;
    cout << "Price: ";
    cout << film [1].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 2" << endl;
    cout << "Title: ";
    cout << film [2].movieName << endl;
    cout << "Time: ";
    cout << clock[2].movieTime << endl;
    cout << "Price: ";
    cout << film [2].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 3" << endl;
    cout << "Title: ";
    cout << film [3].movieName << endl;
    cout << "Time: ";
    cout << clock[3].movieTime << endl;
    cout << "Price: ";
    cout << film [3].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 4" << endl;
    cout << "Title: ";
    cout << film [4].movieName << endl;
    cout << "Time: ";
    cout << clock[4].movieTime << endl;
    cout << "Price: ";
    cout << film [4].moviePrice << endl;
    cout << endl;
    cout << endl;

}

void ADMINCONTROL :: buyTicket(){

    string seatChoice;
    string placeChoice;
    string movieChoice;
    string timeChoice;

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

    cout << "\n\nSelect Theater: ";
    getline(cin, placeChoice);

    cin.clear();
    fflush(stdin);

    cout << endl;

    cout << "\t\t\t\t\t\tTHIS IS THE SEAT MATRIX FOR MOVIE:\n";
    cout << endl;
    cout << "\t\t[A1] [A2] [A3] [A4] [A5]   [A6] [A7] [A8] [A9] [A10] [A11] [A12] [A13]   [A14] [A15] [A16] [A17] [A18]" << endl;
    cout << endl;
    cout << "\t\t[B1] [B2] [B3] [B4] [B5]   [B6] [B7] [B8] [B9] [B10] [B11] [B12] [B13]   [B14] [B15] [B16] [B17] [B18]" << endl;
    cout << endl;
    cout << "\t\t[C1] [C2] [C3] [C4] [C5]   [C6] [C7] [C8] [C9] [C10] [C11] [C12] [C13]   [C14] [C15] [C16] [C17] [C18]" << endl;
    cout << endl;
    cout << "\t\t[D1] [D2] [D3] [D4] [D5]   [D6] [D7] [D8] [D9] [D10] [D11] [D12] [D13]   [D14] [D15] [D16] [D17] [D18]" << endl;
    cout << endl;
    cout << "\t\t[E1] [E2] [E3] [E4] [E5]   [E6] [E7] [E8] [E9] [E10] [E11] [E12] [E13]   [E14] [E15] [E16] [E17] [E18]" << endl;
    cout << endl;
    cout << "\t\t[F1] [F2] [F3] [F4] [F5]   [F6] [F7] [F8] [F9] [F10] [F11] [F12] [F13]   [F14] [F15] [F16] [F17] [F18]" << endl;
    cout << endl;
    cout << "\t\t[G1] [G2] [G3] [G4] [G5]   [G6] [G7] [G8] [G9] [G10] [G11] [G12] [G13]   [G14] [G15] [G16] [G17] [G18]" << endl;
    cout << endl;
    cout << "\t\t[H1] [H2] [H3] [H4] [H5]   [H6] [H7] [H8] [H9] [H10] [H11] [H12] [H13]   [H14] [H15] [H16] [H17] [H18]" << endl;
    cout << endl;
    cout << "\t\t[I1] [I2] [I3] [I4] [I5]   [I6] [I7] [I8] [I9] [I10] [I11] [I12] [I13]   [I14] [I15] [I16] [I17] [I18]" << endl;
    cout << endl;
    cout << "\t\t[J1] [J2] [J3] [J4] [J5]   [J6] [J7] [J8] [J9] [J10] [J11] [J12] [J13]   [J14] [J15] [J16] [J17] [J18]" << endl;
    cout << endl;
    cout << "\t\t[K1] [K2] [K3] [K4] [K5]   [K6] [K7] [K8] [K9] [K10] [K11] [K12] [K13]   [K14] [K15] [K16] [K17] [K18]" << endl;
    cout << endl;
    cout << "\t\t[L1] [L2] [L3] [L4] [L5]   [L6] [L7] [L8] [L9] [L10] [L11] [L12] [L13]   [L14] [L15] [L16] [L17] [L18]" << endl;
    cout << endl;
    cout << "\t\t[M1] [M2] [M3] [M4] [M5]   [M6] [M7] [M8] [M9] [M10] [M11] [M12] [M13]   [M14] [M15] [M16] [M17] [M18]" << endl;
    cout << endl;


    cout << "\t\t\t\t\t\t\tSCREEN THIS WAY";

    cout << endl;

    cout << "\n\nSelect Seat from the Matrix Above: ";
    cin >> seatChoice;

    cin.clear();
    fflush(stdin);

    cout << endl;

    cout << "SCHEDULES\n\n";

    cout << "MOVIE ID: 0" << endl;
    cout << "Title: ";
    cout << film [0].movieName << endl;
    cout << "Time: ";
    cout << clock[0].movieTime << endl;
    cout << "Price: ";
    cout << film [0].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 1" << endl;
    cout << "Title: ";
    cout << film [1].movieName << endl;
    cout << "Time: ";
    cout << clock[1].movieTime << endl;
    cout << "Price: ";
    cout << film [1].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 2" << endl;
    cout << "Title: ";
    cout << film [2].movieName << endl;
    cout << "Time: ";
    cout << clock[2].movieTime << endl;
    cout << "Price: ";
    cout << film [2].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 3" << endl;
    cout << "Title: ";
    cout << film [3].movieName << endl;
    cout << "Time: ";
    cout << clock[3].movieTime << endl;
    cout << "Price: ";
    cout << film [3].moviePrice << endl;
    cout << endl;
    cout << endl;

    cout << "MOVIE ID: 4" << endl;
    cout << "Title: ";
    cout << film [4].movieName << endl;
    cout << "Time: ";
    cout << clock[4].movieTime << endl;
    cout << "Price: ";
    cout << film [4].moviePrice << endl;

    cout << "\n\nEnter Movie Title: ";
    getline(cin, movieChoice);

    cin.clear();
    fflush(stdin);

    cout << "\nSelect Time: ";
    getline (cin, timeChoice);

    cin.clear();
    fflush(stdin);

    cout << "\n\n======= Summary of Purchase =======" << endl;
    cout << endl;
    cout << "Venue: " << placeChoice << endl;
    cout << "Seat: " << seatChoice << endl;
    cout << "Movie: " << movieChoice << endl;
    cout << "Time: " << timeChoice << endl;

    int confirmation;

    cout << "\n========= Confirm Purchase =========" << endl;
    cout << endl;
    cout << " [1] YES" << endl;
    cout << " [2] NO" << endl;
    cout << endl;
    cout << " Enter command Number: ";
    cin >> confirmation;

    switch (confirmation){

        case 1:
            cout << endl;
            cout << "===================================" << endl;
            cout << endl;
            cout << "This is your ticket, present this upon entering the venue" << endl;
            cout << endl;
            cout << "-----------------------------------" << endl;
            cout << endl;
            cout << "Venue: " << placeChoice << endl;
            cout << "Seat: " << seatChoice << endl;
            cout << "Movie: " << movieChoice << endl;
            cout << "Time: " << timeChoice << endl;
            cout << endl;
            cout << "-----------------------------------" << endl;
            cout << endl;
            break;

        case 2:
            cout << endl;
            cout << "===================================" << endl;
            cout << endl;
            cout << "Thank you! You may now rebook or logout after this prompt." << endl;
            cout << endl;
            cout << "===================================" << endl;
            cout << endl;;
            break;

    }


}
