#include "USERCONTROL.h"
#include "ADMINCONTROL.h"

USERCONTROL::USERCONTROL()
{
    //ctor
}

USERCONTROL::~USERCONTROL()
{
    //dtor
}

void USERCONTROL :: registerUser(){

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

    cout << "----------------------------------" << endl;
    cout << endl;
    cout << "You may now Log in " << user << endl;
    cout << endl;

    cout << "Username:";
    cin >> username;
    cout << endl;

    cout << "Password:";
    cin >> password;
    cout << endl;

    if (username != user && password != pass){

        cout << "Incorrect Username or Password";

    }

}

void USERCONTROL :: viewVenue(){

    cout << "----------------------------------" << endl;
    cout << endl;
    cout << "Available Venues";
    cout << endl;
    cout << admn.addVenue();

}
