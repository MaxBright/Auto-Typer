/**
  MaxUtilities.cpp
  Copyright 2012 Max Bright
*/
#include "MaxUtilities.h"

#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
#include <time.h>

#include "Windows.h"

DWORD Max::time_start(0);

using namespace std;

void Max::startTimeCount()
{
    Max::time_start = 0;
    Max::time_start = GetTickCount64();
}

DWORD Max::getTimeElapsed()
{
    DWORD time_elapsed = (GetTickCount64() - Max::time_start);
    return time_elapsed;
}

int Max::string_to_int(string sti_input)
{
    int sti_output(0);
    stringstream convert(sti_input);
    convert >> sti_output;
    return sti_output;
}

int Max::match_string_int(string msi_input, string desiredvalue, int matchvar)
{
    if(msi_input == desiredvalue)
    {
        return matchvar;
    }
    else return 0;
}

void Max::println(string println_input)
{
    cout << println_input << "\n";
}

void Max::print(string print_input)
{
    cout << print_input;
}


