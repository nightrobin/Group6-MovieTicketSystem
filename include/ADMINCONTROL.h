#ifndef ADMINCONTROL_H
#define ADMINCONTROL_H

#include <iostream>
#include <string>

#include "venue.h"
#include "schedule.h"

using namespace std;

class ADMINCONTROL
{
    public:
        ADMINCONTROL();
        virtual ~ADMINCONTROL();

        static const int venues = 5;
        venue place[venues];

        static const int movies = 5;
        schedule film[movies];

        static const int times = 5;
        schedule clock[times];

        void addVenue();
        void movieSchedule();
        void registerUser();
        void viewVenue();
        void viewMovieSchedule();


    protected:

    private:
};

#endif // ADMINCONTROL_H
