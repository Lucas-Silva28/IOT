// C++ code
// variavel

int led = 3;
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
    //passar ao led intensidade máxima
  //digitalWrite(led,HIGH);//LIGAR LED
    analogWrite(led,1023);
  }if(luz>500 & luz<900){
    //passar ao led intesidade media
    analogWrite(led,500);
      
  }else{// SE ESTIVER LUZ
 // digitalWrite(led,LOW);//DESLIGAR LED
     //passar ao led intesidade minima
    analogWrite(led,0);
  }
}
