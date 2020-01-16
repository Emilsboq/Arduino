#include "U8glib.h"

U8GLIB_SSD1306_128X64 oled(U8G_I2C_OPT_NONE);


void setup() {
  // put your setup code here, to run once:

}


void draw(void) {
  oled.drawPixel(11, 44);
  oled.drawPixel(13, 44);

  oled.drawLine(12, 28, 12, 60);
  oled.drawLine(12, 60, 128, 60);
  oled.drawLine(12, 60, 128, 30);
}

void loop() {
  // put your main code here, to run repeatedly:
  oled.firstPage();
  do {
    draw();
  } while(oled.nextPage());

}
