#ifndef RELAY_H
#define RELAY_H
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class Relay
{
protected:
  int pin;
  int bit;
  bool isOn;

public:
  Relay(int p, int b);
  void toggle(int val);
  int getPin();
};

// class Relay : public RelayAbstract
// {
// protected:
//   int pin;
//   int bit;

// public:
//   Relay::Relay(int p, int b)
//   {
//     this->pin = p;
//     this->bit = b;
//   }

//   void toggle(int val)
//   {
//     if ((byte(val) & byte(this->bit)) == this->bit)
//     {
//       digitalWrite(pin, HIGH);
//     }
//     else
//     {
//       digitalWrite(pin, LOW);
//     }
//   }
//   int getPin()
//   {
//     return pin;
//   }
// };
#endif
