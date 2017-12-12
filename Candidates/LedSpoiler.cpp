#include "LedSpoiler.h"

LedSpoiler::LedSpoiler(ShiftRegister74HC595& sr) : sr(sr){
  
}

void LedSpoiler::setRed(){
  sr.set(redPin, LOW);
  sr.set(bluePin, HIGH);
}

void LedSpoiler::setBlue(){
  sr.set(redPin, HIGH);
  sr.set(bluePin, LOW);
}

void LedSpoiler::setOff(){
  sr.set(redPin, HIGH);
  sr.set(bluePin, HIGH);
}

