#ifndef SENSOR_H
#define SENSOR_H
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class Sensor
{
protected:
  int pin;

public:
  Sensor(int pin);
  bool isOn();
  void read();
};

#endif
