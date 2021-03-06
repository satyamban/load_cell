#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


byte num_disp_u[11][8] = {
{0x0E,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11},
{0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01},
{0x1F,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F},
{0x1F,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F},
{0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F},
{0x1F,  0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x1F},
{0x1F,  0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x10},
{0x1F,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01},
{0x1F,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F},
{0x1F,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F},
{0x01,  0x19,  0x19,  0x02,  0x02,  0x02,  0x04,  0x04}   };



byte num_disp_l[11][8] = {
{0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x0E},
{0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01},
{0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x1F},
{0x1F,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F},
{0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01},
{0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F},
{0x1F,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F},
{0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01},
{0x1F,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F},
{0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F},
{0x04,  0x04,  0x08,  0x08,  0x08,  0x13,  0x13,  0x10}  };

    



void setup()
{

  lcd.begin(16,2);
  
  lcd.createChar(0,num_disp_u[1]);
  lcd.createChar(1,num_disp_l[1]);
  lcd.createChar(2,num_disp_u[0]);
  lcd.createChar(3,num_disp_l[0]);
  lcd.createChar(4,num_disp_u[0]);
  lcd.createChar(5,num_disp_l[0]);
  lcd.createChar(6,num_disp_u[10]);
  lcd.createChar(7,num_disp_l[10]);

  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2));
  lcd.write(byte(3));
  lcd.write(byte(4));
  lcd.write(byte(5));
  lcd.write(byte(6));
  lcd.write(byte(7));
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
