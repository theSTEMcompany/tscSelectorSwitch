/*
  tscSelectorSwitch.cpp - A library for controlling selector switches
  Created by The Stem Company, Aug 9, 2019
  Repository: https://github.com/theSTEMcompany/tscSelectorSwitch.git
*/

#ifndef tscSelectorSwitch_h
#define tscSelectorSwitch_h

#include "Arduino.h"

class tscSelectorSwitch
{
    public:
        tscSelectorSwitch(int pinOne, int pinTwo);
        void setPositionValues(int[] positionValues);
        int getCurrentValue();

    private:
        int positionValues[3] = {1, 2, 3};
        int pinOne;
        int pinTwo;

}