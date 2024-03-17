#include "DigiKeyboard.h"

void setup() {
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  //turn volume up to max level
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -w h -NoP -NonI $k=50;$o=New-Object -ComObject WScript.Shell;for($i = 0;$i -lt $k;$i++){$o.SendKeys([char] 175)}");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  //run the video
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd /c start chrome \"https://www.youtube.com/watch?v=2qBlE2-WL60\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(3500);
  DigiKeyboard.sendKeyStroke(KEY_F);
}

void loop() {
}
