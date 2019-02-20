#include "ReliableDelay.h"

ReliableDelay::ReliableDelay() {
  SetState();
}

void ReliableDelay::SetState() {
  ReliableDelay::PreviousState = millis();
}

bool ReliableDelay::WaitMillis(unsigned long long PauseMillis) {
  unsigned long long CurrentMillis = millis();
  if (CurrentMillis >= PauseMillis + PreviousState) {
    return true;
  }
  return false;
}