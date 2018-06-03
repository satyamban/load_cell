#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte num_0_u[8] = {0x0E, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x11};
byte num_0_l[8] = {0x11, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x0E};

byte num_1_u[8] = {0x01, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01};
byte num_1_l[8] = {0x01, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01};

byte num_2_u[8] = {0x1F, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F};
byte num_2_l[8] = {0x10, 0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x1F};

byte num_3_u[8] = {0x1F, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F};
byte num_3_l[8] = {0x1F, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F};

byte num_4_u[8] = {0x11, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F};
byte num_4_l[8] = {0x01, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01};

byte num_5_u[8] = {0x1F, 0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x1F};
byte num_5_l[8] = {0x01, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F};

byte num_6_u[8] = {0x1F, 0x10,  0x10,  0x10,  0x10,  0x10,  0x10,  0x10};
byte num_6_l[8] = {0x1F, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F};

byte num_7_u[8] = {0x1F, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01};
byte num_7_l[8] = {0x01, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x01};

byte num_8_u[8] = {0x1F, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F};
byte num_8_l[8] = {0x1F, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F};

byte num_9_u[8] = {0x1F, 0x11,  0x11,  0x11,  0x11,  0x11,  0x11,  0x1F};
byte num_9_l[8] = {0x01, 0x01,  0x01,  0x01,  0x01,  0x01,  0x01,  0x1F};

byte num_per_u[8] = {0x01, 0x19,  0x19,  0x02,  0x02,  0x02,  0x04,  0x04};
byte num_per_l[8] = {0x04, 0x04,  0x08,  0x08,  0x08,  0x13,  0x13,  0x10};








void setup()
{

  lcd.begin(16,2); 

  lcd.createChar(0,num_1_u);
  lcd.createChar(1,num_1_l);
  lcd.createChar(2,num_0_u);
  lcd.createChar(3,num_0_l);
  lcd.createChar(4,num_0_u);
  lcd.createChar(5,num_0_l);
  lcd.createChar(6,num_per_u);
  lcd.createChar(7,num_per_l);

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
