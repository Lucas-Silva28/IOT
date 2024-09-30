// Definição dos pinos para os LEDs do semáforo e pedestre
int ledVermelho = 4;        // LED Vermelho do semáforo conectado ao pino 4
int ledAmarelo = 2;         // LED Amarelo do semáforo conectado ao pino 2
int ledVerde = 5;           // LED Verde do semáforo conectado ao pino 5
int pedestreFechado = 10;   // LED para pedestre "não pode atravessar" conectado ao pino 10
int pedestreAberto = 9;     // LED para pedestre "pode atravessar" conectado ao pino 9

void setup() {
  // Configuração dos pinos como saída para controlar os LEDs
  pinMode(ledVermelho, OUTPUT);       // Define o pino do LED Vermelho como saída
  pinMode(ledAmarelo, OUTPUT);        // Define o pino do LED Amarelo como saída
  pinMode(ledVerde, OUTPUT);          // Define o pino do LED Verde como saída
  pinMode(pedestreFechado, OUTPUT);   // Define o pino do LED "Pedestre Fechado" como saída
  pinMode(pedestreAberto, OUTPUT);    // Define o pino do LED "Pedestre Aberto" como saída
}

void loop() {
  // Fase 1: Semáforo Vermelho e Pedestre pode atravessar
  digitalWrite(ledVermelho, HIGH);     // Liga o LED Vermelho do semáforo (veículos param)
  digitalWrite(ledAmarelo, LOW);       // Garante que o LED Amarelo esteja apagado
  digitalWrite(ledVerde, LOW);         // Garante que o LED Verde esteja apagado
  digitalWrite(pedestreAberto, HIGH);  // Liga o LED de "pedestre pode atravessar"
  digitalWrite(pedestreFechado, LOW);  // Apaga o LED de "pedestre não pode atravessar"
  delay(1900);                         // Mantém essa fase por 1.9 segundos

  // Fase 2: Semáforo Amarelo e Pedestre deve esperar
  digitalWrite(ledVermelho, LOW);      // Apaga o LED Vermelho do semáforo
  digitalWrite(ledAmarelo, HIGH);      // Liga o LED Amarelo do semáforo (atenção para veículos)
  digitalWrite(ledVerde, LOW);         // Garante que o LED Verde esteja apagado
  digitalWrite(pedestreAberto, LOW);   // Apaga o LED de "pedestre pode atravessar"
  digitalWrite(pedestreFechado, HIGH); // Liga o LED de "pedestre deve esperar"
  delay(1500);                         // Mantém essa fase por 1.5 segundos

  // Fase 3: Semáforo Verde e Pedestre deve esperar
  digitalWrite(ledVermelho, LOW);      // Garante que o LED Vermelho esteja apagado
  digitalWrite(ledAmarelo, LOW);       // Apaga o LED Amarelo do semáforo
  digitalWrite(ledVerde, HIGH);        // Liga o LED Verde do semáforo (veículos podem seguir)
  digitalWrite(pedestreAberto, LOW);   // Apaga o LED de "pedestre pode atravessar"
  digitalWrite(pedestreFechado, HIGH); // Liga o LED de "pedestre deve esperar"
  delay(1000);                         // Mantém essa fase por 1 segundo
}
