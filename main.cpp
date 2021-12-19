#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {

	label:
	cout << "====================================" << endl;
	cout << endl;
	cout << "[1] Log in as Admin" << endl;
	cout << "[2] Log in as User" << endl;
	cout << endl;
	cout << "====================================" << endl;
	cout << endl;
	int choice;

	cout << "Enter Command Number: ";
	cin >> choice;
	system("cls");

	string AdminUser;
	string AdminPass;
	string UserUser;
	string UserPass;
	string
    command,
    name, password,
    inName, inPassword,
    registerName, registerPassword;
	int log, adminchoice;

	switch(choice){
		case 1:
		    system("cls");
			cout << "----------------------------------" << endl;
			cout << endl;
			cout << "Enter your username and password" << endl;

			cout << "\nUsername: ";
			cin >> AdminUser;
			cout << "Password: ";
			cin >> AdminPass;


			if (AdminUser == "admin" && AdminPass == "admin") {
                system("cls");
				cout << "===================================" << endl;
				cout << endl;
				cout << "Welcome! Admin" << endl;
				 cout << "\nWhat do you want to do? "<< endl;
            cout << "\n [1] Add List of Theaters & Venues" ;
            cout << "\n [2] Add Info for Movie Schedule " ;
            cout << "\n [3] Add Price of Ticket ";
            cout << "\n [4] Add Seating Availability";
            cout << "\n [5] Add Ticket Availability";
            cout << "\n Enter command no. : ";
            cin >> adminchoice;


   switch (adminchoice)
   {

   case 1:
       string thrsVenues ;
       cout << "Add List of Theaters and Venues" << endl;
       cout << "You're now Adding list of Theaters / Venues... ";
       cin >> thrsVenues ;

   }


			} else {
				cout << "----------------------------------" << endl;
				cout << endl;
				cout << "Incorrect Username or Password";



			}
			break;
		case 2:
		    system("cls");
			cout << "----------------------------------" << endl;
			cout << endl;
			cout << "You choose to login as a user" << endl;
			 while (1)
    		{

			cout << endl;
			 cout<<"(register/exit/login)\n"
            	<<"Command: ";
      			cin >> command;
			 if (command=="exit")
        {
            goto label;

        }
        if (command=="register")
        {
            ofstream g("registration.txt");
            if (!g.is_open())
            {
                cout<<"could not open file\n";
                return 0;
            }
            cout << "----------------------------------" << endl;
            cout<<"\n"
                <<"New Username: ";
            cin >> registerName;
            cout<<"New Password: ";
            cin >> registerPassword;
            g<<registerName;
            g<<'\n';
            g<<registerPassword;
            g.close();

            system("cls");
        }
        if (command=="login")
        {

            ifstream f("registration.txt");
            if (!f.is_open())
            {
                cout<<"could not open file\n";
                return 0;
            }
            getline(f, name, '\n');
            getline(f, password, '\n');
            f.close();

            while (1)
            {
                cout << "----------------------------------" << endl;
                cout<<"\n"
                    <<"Enter Username: ";
                cin >> inName;
                cout<<"Enter Password: ";
                cin >> inPassword;

                if (inName==name && inPassword==password)
                {
                    system("cls");
                	cout << "----------------------------------" << endl;
                    cout<<"Login Successful\n"
                        <<"Welcome, "
                        <<inName;
                    break;
                    system("cls");
                }
                cout << "----------------------------------" << endl;
                cout << endl;
                cout<<"incorrect name or password\n";

            }
            //now do something about the account
        }
        cout<<"\n\n";
       }
    return 1;




}
}


