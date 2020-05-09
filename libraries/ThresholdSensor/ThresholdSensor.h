#ifndef THRESHOLD_SENSOR_H
#define THRESHOLD_SENSOR_H
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif
#include "Sensor.h"

class ThresholdSensor : public Sensor
{
public:
  void read();
  bool isOn();
  void setThreshold(int threshold);

protected:
  uint8_t pin;
  int threshold;
  int resist;
  bool enabled;
};

#endif
