/*
  TscSelectorSwitch.cpp - A library for controlling selector switches
  Created by The Stem Company, Aug 9, 2019
  Repository: https://github.com/theSTEMcompany/tscSelectorSwitch.git
*/

#ifndef tscSelectorSwitch_h
#define tscSelectorSwitch_h

#include "Arduino.h"

class TscSelectorSwitch
{
    public:
        TscSelectorSwitch(int pinOne, int pinTwo);
        void setPositionValues(int[] positionValues);
        void setDefaultValue(int defaultValue);
        int getCurrentValue();
        int getCurrentPosition();

    private:
        int positionValues[3] = {1, 2, 3};
        int defaultValue = 0;
        int pinOne;
        int pinTwo;
}