/**
  spammer.cpp
  Copyright 2012 Max Bright
*/
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include "classes.h"
#include "MaxUtilities.h"



using namespace std;




void sendtext(string message, int alt_sleep){


    int size(message.length());
    Max::startTimeCount();

    for (int spam_count(0); spam_count < size; spam_count++)
    { //This scans through each value of the char* array


        cout << "\nInitiated for loop, current time elapsed is " << Max::getTimeElapsed();

        //Checks if character is alt+2+1, and pauses if true
            if (message[spam_count] == '§')
            {
                Sleep(alt_sleep);
            }


            else if (message[spam_count] == '¶')
            {
                keybd_event(VK_RETURN, 0, 0, 0);
                keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
            }

            else if (message[spam_count] == '«') // <<
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
            }
            else if (message[spam_count] == '»') // >>
            {
                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
            }


        //}
        else
        {
            int spam_key = (VkKeyScan(message[spam_count]));
            if
            (
                    !(
                        (43 < message[spam_count] && message[spam_count] < 58) ||   //if statement checks if special characters are used that require shift to be pressed via their ASCII ID
                        (96 < message[spam_count] && message[spam_count] < 123) ||
                        (90 < message[spam_count] && message[spam_count] < 94) ||
                            (message[spam_count] == '=') ||
                            (message[spam_count] == ';') ||
                            (message[spam_count] == '\'')
                     )
            )
            {
        cout << "\nFinished massive if check, check passes, current time elapsed is " << Max::getTimeElapsed();

                 keybd_event(VK_SHIFT, 0, 0, 0); // Holds down shift
                 keybd_event(spam_key, 0, 0, 0);//Presses and releases the specified key from a char array
                 keybd_event(spam_key, 0, KEYEVENTF_KEYUP, 0);

                 keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);//releases shift
        cout << "\nPressed key then Shift, current time elapsed is " << Max::getTimeElapsed();

            }

            else
            {
        cout << "\nFailed if check, current time elapsed is " << Max::getTimeElapsed();

                keybd_event(spam_key, 0, 0, 0);  //Presses and releases the specified key from a char array
                keybd_event(spam_key, 0, KEYEVENTF_KEYUP, 0);
            }
        cout << "\nPressed key, current time elapsed is " << Max::getTimeElapsed();
        }//end of else
    }//end of for loop


    //presses enter
    keybd_event(VK_RETURN, 0, 0, 0);
    keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);



}
