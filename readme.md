# TscSelectorSwitch by The STEM Company

A simple library for controlling three selector switches in an object oriented manner.

## How to use

Initialize the switch object by passing in the two pinNumbers it is using as input. In this example we are using pin numbers 1 and 2.
```
TscSelectorSwitch selector = TscSelectorSwitch(1, 2);
```

To get the current position of the switch in integer form use
```
int selectorPosition = selector.getCurrentPosition();
```

The position integer is internally mapped in the class like this:
- Pin 1 LOW + Pin 2 HIGH = 2
- Pin 1 LOW + Pin 2 LOW = 1
- Pin 1 HIGH + Pin 2 LOW = 0

Optionally you can add integer values to each position by passing in an array of integers:
```
int[3] values = {50, 100, 150};
selector.setPositionValues(values);

int value = selector.getCurrentValue(); // If the selector is currently in position 2, the return value will be 150.
```




