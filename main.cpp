#include <iostream>
#include<fstream>
#include <string>

#include "ADMINCONTROL.h"

using namespace std;

int main() {

    ADMINCONTROL admn;

    int choice;

    cout << "MOVIE TICKET SYSTEM" << endl;
    cout << endl;
	cout << "===================================" << endl;
	cout << endl;
	cout << "[1] START" << endl;
	cout << endl;
	cout << "===================================" << endl;
	cout << endl;

	cout << "Enter Command Number: ";
	cin >> choice;
	cout << endl;

	string AdminUser;
	string AdminPass;
	int adminchoice = -1;
	int userchoice;
	int ctr;

	switch(choice){
		case 1:

			cout << "===================================" << endl;
			cout << endl;
			cout << "Enter your Username and Password" << endl;

			cout << "\nUsername: ";
			cin >> AdminUser;
			cout << "Password: ";
			cin >> AdminPass;
			cout << endl;



			if (AdminUser == "admin" && AdminPass == "admin") {

				while (adminchoice != 0){

                    cout << "===================================" << endl;
                    cout << endl;
                    cout << "Welcome! Admin" << endl;
                    cout << "\nWhat do you want to do? "<< endl;
                    cout << "\n [1] Add List of Theaters & Venues" ;
                    cout << "\n [2] Add Movie Info and Schedule" ;
                    cout << "\n [3] View List of Theaters & Venues" ;
                    cout << "\n [4] View Movie Info and Schedules" ;
                    cout << "\n [5] Modify Movie Info" ;
                    cout << "\n [6] Login as User" ;
                    cout << "\n [0] Logout" ;
                    cout << "\n\n Enter command Number: ";
                    cin >> adminchoice;
                    cout <<  "\n";

                    cin.clear();
                    fflush(stdin);

                    switch (adminchoice){

                        case 1:
                            admn.addVenue();
                            break;

                        case 2:
                            admn.movieSchedule();
                            break;

                        case 3:
                            admn.viewVenue();
                            break;

                        case 4:
                            admn.viewMovieSchedule();
                            break;

                        case 5:
                            cout << "===================================" << endl;

                            cout << "\nEnter Movie ID to modify its Info: ";
                            cin >> ctr;

                            cin.clear();
                            fflush(stdin);

                            admn.modifyMovie(ctr);

                            break;

                        case 6:
                            cout << "===================================" << endl;
                            cout << endl;
                            cout << "Register before logging in" << endl;

                            admn.registerUser();


                            while (userchoice != 0){

                            cout << "===================================" << endl;
                            cout << endl;
                            cout << "Welcome! User" << endl;
                            cout << "\nWhat do you want to do? "<< endl;
                            cout << "\n [1] View List of Theaters & Venues" ;
                            cout << "\n [2] View Movie Info and Schedules" ;
                            cout << "\n [0] Logout" ;
                            cout << "\n\n Enter command Number: ";
                            cin >> userchoice;
                            cout <<  "\n";

                            cin.clear();
                            fflush(stdin);

                                switch (userchoice){

                                case 1:
                                    admn.viewVenue();
                                    break;

                                case 2:
                                    admn.viewMovieSchedule();
                                    break;

                                case 0:
                                    cout << "===================================" << endl;
                                    cout << endl;
                                    cout << "Thank you for using our system!\n";
                                    break;
                                }

                        }


                        case 0:
                            cout << "===================================" << endl;
                            cout << endl;
                            cout << "Thank you for using our system!\n";
                            break;

                    }

                }
            }

            else {

                cout << "Incorrect Username or Password";
                cout << endl;
                exit (0);

            }

			break;

	}

}
