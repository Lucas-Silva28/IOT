#include <AccelStepper.h>
#include <MultiStepper.h>

  // incluir a biblioteca

 
  // 360° = 1024
  // 180° = 512
  // 90° = 256
  // 60° = 170
  //45° = 128

  // Variavel para controlar as voltas motor 

  #define Voltas 1024
  // Criando objeto para controlar o motor
  AccelStepper motor (AccelStepper::FULL4WIRE,8,10,9,11);

  void setup(){
  // denifir a velocidade maxima do motor
  motor.setMaxSpeed(1000);
  //  definir aceleração maxima desse motor

  motor.setAcceleration(100);
 motor.moveTo(Voltas);
  //girar a sentido contrario
}

void loop(){
  // habilitar as portas de controle do motor no arduino
 
 
  if (motor.distanceToGo() ==0){
  // Executa o comando para dar uma volta no sentido contrario
   motor.moveTo(-motor.currentPosition());
  
}
 motor.run();
  //fazer o motor se movimentar

}
