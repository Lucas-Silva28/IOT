// BIBLIOTECA PARA CONEXÃO SERIAL DO SENSOR
#include <SoftwareSerial.h>

int sensor = A0;  // PINO DO SENSOR DE UMIDADE DO SOLO
int LedR = 3;     // PINO DO LED VERMELHO
int LedG = 6;     // PINO DO LED VERDE
int LedB = 5;     // PINO DO LED AZUL

void setup()
{
  // DEFINIR O SENSOR COMO ENTRADA
  pinMode(sensor, INPUT);
  
  // INICIALIZANDO O MONITOR SERIAL COM A TAXA DE 9600 BPS
  Serial.begin(9600);

  // DEFINIR OS LEDS COMO SAÍDA
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedB, OUTPUT);
}

void loop()
{
  // GUARDAR O VALOR LIDO PELO SENSOR DE UMIDADE
  int umidade = analogRead(sensor);
  
  // IMPRIMIR O VALOR LIDO NO MONITOR SERIAL
  Serial.print("Umidade do Solo: ");
  Serial.println(umidade);
  delay(1000);

  // VERIFICAR O NÍVEL DE UMIDADE E ATUALIZAR O STATUS DOS LEDS
  if (umidade < 300) {
    // SE O SOLO ESTÁ SECO
    Serial.println("SOLO SECO");
    Serial.println(umidade);
    delay(1000);

    // ACENDER O LED VERMELHO (SOLO SECO)
    analogWrite(LedR, 255);
    analogWrite(LedG, 0);
    analogWrite(LedB, 0);
  } 

  // SE O SOLO ESTÁ EM CONDIÇÃO IDEAL
  if (umidade > 300 && umidade < 500) {
    Serial.println("SOLO IDEAL");
    Serial.println(umidade);
    delay(1000);

    // ACENDER O LED VERDE (SOLO IDEAL)
    analogWrite(LedR, 0);
    analogWrite(LedG, 255);
    analogWrite(LedB, 0);
  }

  // SE O SOLO ESTÁ ÚMIDO
  if (umidade > 500 && umidade < 876) {
    Serial.println("SOLO UMIDO");
    Serial.println(umidade);
    delay(1000);

    // ACENDER O LED AZUL (SOLO ÚMIDO)
    analogWrite(LedR, 0);
    analogWrite(LedG, 0);
    analogWrite(LedB, 255);
  }
}
