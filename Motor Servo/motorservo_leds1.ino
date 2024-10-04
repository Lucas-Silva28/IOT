// BIBLIOTECA DO SERVO MOTOR
#include <Servo.h>

// CRIANDO OBJETO DO TIPO SERVO MOTOR
Servo objetoservo;

// VARIÁVEIS PARA SALVAR AS PORTAS DO SERVO E DOS LEDs POR COR
int servo = 2;      // PINO DO SERVO
int ledAzul = 4;    // LED AZUL (45°)
int ledVerde = 5;   // LED VERDE (90°)
int ledAmarelo = 6; // LED AMARELO (135°)
int ledLaranja = 7; // LED LARANJA (145°)
int ledVermelho = 8;// LED VERMELHO (175°)
int ledBranco = 9;  // LED BRANCO (180°)

void setup() {
  // INICIALIZAÇÃO DO SERVO
  objetoservo.attach(servo); 
  
  // DEFINIR OS PINOS DOS LEDs COMO SAÍDA
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledLaranja, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledBranco, OUTPUT);
}

void loop() {
  // ROTACIONA O SERVO PARA 45° E ACENDE O LED AZUL
  objetoservo.write(30);
  digitalWrite(ledAzul, HIGH);  // ACENDE O LED AZUL
  delay(1000);
  digitalWrite(ledAzul, LOW);   // APAGA O LED AZUL

  // ROTACIONA O SERVO PARA 90° E ACENDE O LED VERDE
  objetoservo.write(60);
  digitalWrite(ledVerde, HIGH);  // ACENDE O LED VERDE
  delay(1000);
  digitalWrite(ledVerde, LOW);   // APAGA O LED VERDE

  // ROTACIONA O SERVO PARA 135° E ACENDE O LED AMARELO
  objetoservo.write(90);
  digitalWrite(ledAmarelo, HIGH);  // ACENDE O LED AMARELO
  delay(1000);
  digitalWrite(ledAmarelo, LOW);   // APAGA O LED AMARELO

  // ROTACIONA O SERVO PARA 145° E ACENDE O LED LARANJA
  objetoservo.write(145);
  digitalWrite(ledLaranja, HIGH);  // ACENDE O LED LARANJA
  delay(1000);
  digitalWrite(ledLaranja, LOW);   // APAGA O LED LARANJA

  // ROTACIONA O SERVO PARA 175° E ACENDE O LED VERMELHO
  objetoservo.write(175);
  digitalWrite(ledVermelho, HIGH);  // ACENDE O LED VERMELHO
  delay(1000);
  digitalWrite(ledVermelho, LOW);   // APAGA O LED VERMELHO

  // ROTACIONA O SERVO PARA 180° E ACENDE O LED BRANCO
  objetoservo.write(180);
  digitalWrite(ledBranco, HIGH);  // ACENDE O LED BRANCO
  delay(1000);
  digitalWrite(ledBranco, LOW);   // APAGA O LED BRANCO

  // RETORNA PELOS ÂNGULOS ANTERIORES E ACENDE OS LEDs

  // VOLTA PARA 175° E ACENDE O LED VERMELHO
  objetoservo.write(175);
  digitalWrite(ledVermelho, HIGH);  // ACENDE O LED VERMELHO
  delay(500);
  digitalWrite(ledVermelho, LOW);   // APAGA O LED VERMELHO

  // VOLTA PARA 145° E ACENDE O LED LARANJA
  objetoservo.write(145);
  digitalWrite(ledLaranja, HIGH);  // ACENDE O LED LARANJA
  delay(500);
  digitalWrite(ledLaranja, LOW);   // APAGA O LED LARANJA

  // VOLTA PARA 135° E ACENDE O LED AMARELO
  objetoservo.write(135);
  digitalWrite(ledAmarelo, HIGH);  // ACENDE O LED AMARELO
  delay(500);
  digitalWrite(ledAmarelo, LOW);   // APAGA O LED AMARELO

  // VOLTA PARA 90° E ACENDE O LED VERDE
  objetoservo.write(90);
  digitalWrite(ledVerde, HIGH);  // ACENDE O LED VERDE
  delay(500);
  digitalWrite(ledVerde, LOW);   // APAGA O LED VERDE

  // VOLTA PARA 45° E ACENDE O LED AZUL
  objetoservo.write(45);
  digitalWrite(ledAzul, HIGH);  // ACENDE O LED AZUL
  delay(500);
  digitalWrite(ledAzul, LOW);   // APAGA O LED AZUL

  // VOLTA PARA 0° (POSIÇÃO INICIAL) E TODOS OS LEDs FICAM APAGADOS
  objetoservo.write(0);
  delay(500);
}
