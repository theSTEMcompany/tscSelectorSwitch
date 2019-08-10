/*
  tscSelectorSwitch.cpp -
  Created by The STEM Company, Aug 9, 2019
*/

#include "Arduino.h"
#include "CzMotor.h"

tscSelectorSwitch::tscSelectorSwitch(int pinOne, int pinTwo)
{
  this->pinOne = pinOne;
  this->pinTwo = pinTwo;
}

void setPositionValues(int[] positionValues)
{
    this->positionValues = positionValues;
}

int getCurrentValue()
{
    int pinOneValue = digitalRead(this->pinOne);
    int pinTwoValue = digitalRead(this->pinTwo);

    if (pinOneValue == LOW && pinTwoValue == HIGH) {
        return this->positionValues[2];
    } else if (pinOneValue == LOW && pinTwoValue == LOW) {
        return this->positionValues[1];
    } else if (pinOneValue == HIGH && pinTwoValue == LOW) {
        return this->positionValues[0];
    } else {
        return 0;
    }

}
