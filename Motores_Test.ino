#include <onep.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  //int button = onep.Button()

  if(onep.Button() == HIGH) //Si se presiona el boton
  {
    onep.Led1(HIGH);    
    onep.Led0(LOW);
    delay(50);
  
    onep.Led0(HIGH);
    onep.Led1(LOW);
    delay(50);
    
    int pot = onep.Trimpot(); //one.Trimpot te devuelve de 0 a 100 segun la posicion del trimpot
    onep.MotorL(pot); //  -100 min, 0 apagado, 100 max
    onep.MotorR(pot); //  -100 min, 0 apagado, 100 max

  } 

  else  //  Boton Sin Presionar
  {
    onep.Led1(LOW); //Apagamos leds
    onep.Led0(LOW);
    onep.MotorR(0); //Apagamos Motores
    onep.MotorL(0);
  }

}
