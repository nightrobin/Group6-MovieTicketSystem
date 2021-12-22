#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include <string>

using namespace std;


class schedule
{
    public:
        schedule();
        virtual ~schedule();

        string movieName;
        string movieTime;
        string moviePrice;

    protected:

    private:
};

#endif // SCHEDULE_H
