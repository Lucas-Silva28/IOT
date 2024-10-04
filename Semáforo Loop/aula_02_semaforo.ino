int LedVermelho = 3;
int LedAmarelo = 5;
int LedVerde = 6;

void setup() {
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedAmarelo, OUTPUT);
  pinMode(LedVerde, OUTPUT);
}

void loop() {
  // Acender o LED Vermelho
  digitalWrite(LedVermelho, HIGH);  // Liga o LED Vermelho
  digitalWrite(LedAmarelo, LOW);    // Garante que o LED Amarelo esteja apagado
  digitalWrite(LedVerde, LOW);      // Garante que o LED Verde esteja apagado
  delay(2500);                      // Espera por 2.5 segundos

  // Acender o LED Amarelo
  digitalWrite(LedVermelho, LOW);   // Apaga o LED Vermelho
  digitalWrite(LedAmarelo, HIGH);   // Liga o LED Amarelo
  digitalWrite(LedVerde, LOW);      // Garante que o LED Verde esteja apagado
  delay(1500);                      // Espera por 1 segundo

  // Acender o LED Verde
  digitalWrite(LedVermelho, LOW);   // Garante que o LED Vermelho esteja apagado
  digitalWrite(LedAmarelo, LOW);    // Apaga o LED Amarelo
  digitalWrite(LedVerde, HIGH);     // Liga o LED Verde
  delay(1000);                      // Espera por 1.5 segundos

  // Reinicia o ciclo
}
