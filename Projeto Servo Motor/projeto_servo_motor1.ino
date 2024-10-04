// BIBLIOTECA DO SERVO MOTOR
#include <Servo.h>

// CRIANDO OBJETO DO TIPO SERVO MOTOR
Servo objetoservo;

// VARIÁVEIS PARA SALVAR AS PORTAS DO SERVO E DOS BOTÕES
int servo = 3;
int botao = 2;     // Botão para aumentar a posição
int botao02 = 4;   // Botão para diminuir a posição

// VARIÁVEIS PARA A POSIÇÃO DO SERVO
int posicao = 0;   // Posição inicial do servo
int posicao02 = 180; // Posição máxima do servo

void setup() {
  // Inicialização do servo
  objetoservo.attach(servo); 

  // DEFINIR BOTÕES COMO ENTRADA
  pinMode(botao, INPUT);
  pinMode(botao02, INPUT);

  // Definir a posição inicial do servo
  objetoservo.write(posicao);
  delay(2000);
}

void loop() {
  // SE O BOTÃO 1 FOR PRESSIANDO, GIRA O SERVO A 1°
  if (digitalRead(botao) == HIGH && posicao < 180) {
    posicao = posicao +10;// PODE SER USADO TAMBEM posicao ++10
    objetoservo.write(posicao);
    delay(10); // Atraso para o movimento
  }

  // SE O BOTÃO 2 FOR PRESSIANDO, RETROCEDE O SERVO A 1°
  if (digitalRead(botao02) == HIGH && posicao > 0) {
    posicao = posicao -5;// PODE SER USADO TAMBEM posicao -- 5;
    objetoservo.write(posicao);
    delay(10); // Atraso para o movimento
  }
}
