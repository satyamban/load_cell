#include "HX711.h"

#define DOUT  3
#define CLK  2

HX711 scale(DOUT, CLK);

float cali=1.0;

void setup() 
{
  Serial.begin(9600);
  scale.set_scale();
  scale.tare();
  
  
}

void loop() 
{
  Serial.println("Now place the known 10g weight and press C");
  
  while(!Serial.available())
  {}
  
  char temp = Serial.read();
  float wgt = 10.0;                        //NEEDS TO BE INITIALIZED 
  float mes_wgt;
  
  if(temp == 'c' || temp == 'C')
  {
    
    mes_wgt = scale.get_units(10);
        
    cali = cali*mes_wgt/wgt;
    
    scale.set_scale(cali);
  }
       
   Serial.print("The value of cali is :");
   Serial.println(cali);
   Serial.print("The value of weight is :");
   Serial.println(scale.get_units(), 3);
   delay(2000);
}
