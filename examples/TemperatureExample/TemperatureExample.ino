/*
 *    TemperatureExample.ino - Temperature example using the Petduino library
 *    Copyright (c) 2015 Circuitbeard
 *
 *    Permission is hereby granted, free of charge, to any person
 *    obtaining a copy of this software and associated documentation
 *    files (the "Software"), to deal in the Software without
 *    restriction, including without limitation the rights to use,
 *    copy, modify, merge, publish, distribute, sublicense, and/or sell
 *    copies of the Software, and to permit persons to whom the
 *    Software is furnished to do so, subject to the following
 *    conditions:
 *
 *    This permission notice shall be included in all copies or
 *    substantial portions of the Software.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *    OTHER DEALINGS IN THE SOFTWARE.
 */

#include <LedControl.h>
#include <Petduino.h>

#define NUMBER_COUNT 10
byte numbers[NUMBER_COUNT][8] = {
  {
    B11100000,
    B10100000,
    B10100000,
    B10100000,
    B10100000,
    B10100000,
    B10100000,
    B11100000,
  },
  {
    B01100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
  },
  {
    B11100000,
    B00100000,
    B00100000,
    B11100000,
    B10000000,
    B10000000,
    B10000000,
    B11100000,
  },
  {
    B11100000,
    B00100000,
    B00100000,
    B11100000,
    B00100000,
    B00100000,
    B00100000,
    B11100000,
  },
  {
    B10100000,
    B10100000,
    B10100000,
    B11100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
  },
  {
    B11100000,
    B10000000,
    B10000000,
    B11100000,
    B00100000,
    B00100000,
    B00100000,
    B11100000,
  },
  {
    B11100000,
    B10000000,
    B10000000,
    B11100000,
    B10100000,
    B10100000,
    B10100000,
    B11100000,
  },
  {
    B11100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
    B00100000,
  },
  {
    B11100000,
    B10100000,
    B10100000,
    B11100000,
    B10100000,
    B10100000,
    B10100000,
    B11100000,
  },
  {
    B11100000,
    B10100000,
    B10100000,
    B11100000,
    B00100000,
    B00100000,
    B00100000,
    B11100000,
  }
};

float temp;
unsigned int ones, tens;

Petduino pet = Petduino();

void setup() {

  // Setup Petduino
  pet.begin();

}

void loop() {

  // Update pet
  pet.update();

  // Get the temperature
  temp = pet.getTemperature();

  // Split the digits
  tens = temp/10;
  ones = temp-tens*10;

  // Generate & draw number graphic
  for(int b = 0; b < 8; b++){
    pet.drawRow(b, numbers[tens][b] | numbers[ones][b] >> 4);
  }

  // Wait for a second
  delay(1000);

}
