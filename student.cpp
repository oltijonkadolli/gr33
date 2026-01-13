#include <iostream>
#include "student.h"

using namespace std;

int totalNxenes = 0;
int kapacitetiShkolles = 100;

void shtoNxenes(int numriNxenesve)
{
    if (totalNxenes + numriNxenesve > kapacitetiShkolles)
    {
        cout << "Nuk ka kapacitet" << endl;
        return;
    }
    totalNxenes += numriNxenesve;
}

void largoNxenes(int numriNxenesve)
{
    totalNxenes -= numriNxenesve;
}