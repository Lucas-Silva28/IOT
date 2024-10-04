#include <Servo.h>

// CRIAÇÃO DO OBJETO SERVO MOTOR
Servo objetoservo;

// Definição dos pinos
 int led1 = 5;       // LED vermelho
 int servo = 2;   // Pino do servo motor
 int posicao = 0;
 int led2 = 6;

long distancia(int trigger, int echo){

  //TRIGGER PORTA DE SAIDA
  pinMode(trigger,OUTPUT);
  digitalWrite(trigger,LOW);
  delay(5);//espere 5 milisegundos.
  //mandando sinal 
  digitalWrite(trigger,HIGH);
  digitalWrite(trigger,LOW);
  //echo porta de entrada
  pinMode(echo,INPUT);
  //RETORNA OS DADOS QUE A PORTA RECEBE 
 return pulseIn(echo,HIGH);
  

}

void setup() {
  // Configuração do LED
  pinMode(led1, OUTPUT);   // Define o pino do LED vermelho como saída
  pinMode(led2, OUTPUT);
  
  objetoservo.attach(servo);
 
  objetoservo.write(posicao);            // Posição inicial do servo: 0 graus

}

void loop() {
	int cm = 0.01723 * distancia (9,10);
	if(cm<50){
      digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    //digitalWrite(led2, LOW);
	posicao = posicao +10;// PODE SER USADO TAMBEM posicao ++10
    objetoservo.write(posicao);
    delay(100); // Atraso de 1 segundo
}else{
	digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
      
}
}
