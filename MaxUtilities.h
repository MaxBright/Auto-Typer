/**
  MaxUtilities.h
  Copyright 2012 Max Bright
*/
#ifndef MAXUTILITIES_H
#define MAXUTILITIES_H

#include <string>
#include <Windows.h>

using namespace std;

extern int maxtime_elapsed;




namespace Max
{
    extern DWORD time_start;
    void startTimeCount();
    int string_to_int(string sti_input);
    int match_string_int(string msi_input, string desiredvalue, int matchvar);
    DWORD getTimeElapsed();
}


#endif

