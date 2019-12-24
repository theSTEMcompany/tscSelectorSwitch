/*
  TscSelectorSwitch.cpp -
  Created by The STEM Company, Aug 9, 2019
*/

#include "Arduino.h"
#include "TscSelectorSwitch.h"

TscSelectorSwitch::TscSelectorSwitch(int pinOne, int pinTwo)
{
    this->pinOne = pinOne;
    this->pinTwo = pinTwo;
}

void TscSelectorSwitch::initialize()
{
    pinMode(this->pinOne, INPUT);
    pinMode(this->pinTwo, INPUT);
}

void TscSelectorSwitch::setPositionValues(int* positionValues)
{
    this->positionValues = positionValues;
}

void TscSelectorSwitch::setDefaultValue(int defaultValue)
{
    this->defaultValue = defaultValue;
}

int TscSelectorSwitch::getCurrentPosition()
{
    int pinOneValue = digitalRead(this->pinOne);
    int pinTwoValue = digitalRead(this->pinTwo);

    if (pinOneValue == LOW && pinTwoValue == HIGH) {
        return 2;
    } else if (pinOneValue == LOW && pinTwoValue == LOW) {
        return 1;
    } else if (pinOneValue == HIGH && pinTwoValue == LOW) {
        return 0;
    } else {
        return this->defaultValue;
    }
}

int TscSelectorSwitch::getCurrentValue()
{
    return this->positionValues[this->getCurrentPosition()];
}
