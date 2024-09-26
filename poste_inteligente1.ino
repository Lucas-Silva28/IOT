// C++ code
// variavel

int led = 4;
int sensorLuminosidade = A0; 
//
int luz = 0;

void setup()
{
 //led é de saida
  pinMode(led,OUTPUT);
  //sensor é de entrada
  pinMode(sensorLuminosidade,INPUT);  
}

void loop()
{
  // capturar o que o sensor leu no ambiente
  // analogRead é usado para leitura analogica
  luz = analogRead(sensorLuminosidade);
  /* as portad analogicas capturam dados variam de 1 ate 1023*/
  
  // SE ESTIVER COM POUCA LUZ NO AMBIENTE
  if(luz<500){
  digitalWrite(led,HIGH);//LIGAR LED
  }else{// SE ESTIVER LUZ
  digitalWrite(led,LOW);//DESLIGAR LED
  }
}