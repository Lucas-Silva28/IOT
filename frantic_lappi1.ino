// Projeto Microcontroladores - Semáforo de veículos e pedestre controlado por sensor

// Declarando variáveis que não mudarão
const int ledGreenCar = 8;   // Porta do Led Verde do semáforo dos carros 
const int ledYellowCar = 10; // Porta do Led Amarelo do semáforo dos carros 
const int ledRedCar = 12;    // Porta do Led Vermelho do semáforo dos carros 

const int ledGreenPed = 6;   // Porta do Led Verde do semáforo dos pedestres 
const int ledRedPed = 4;     // Porta do Led Vermelho do semáforo dos pedestres 

const int sensorEcho = 9;    // Porta Echo do sensor ultrassônico
const int sensorTrig = 7;    // Porta Trigger do sensor ultrassônico

// Declarando variáveis que mudarão
unsigned long tempo;    // Guardará o momento em que o programa iniciou

void setup() {
  tempo = millis(); // Atribui à variável tempo o valor do início do programa
  
  pinMode(ledGreenCar, OUTPUT);   // Define a porta 8 como saída
  pinMode(ledYellowCar, OUTPUT);  // Define a porta 10 como saída
  pinMode(ledRedCar, OUTPUT);     // Define a porta 12 como saída
  
  pinMode(ledGreenPed, OUTPUT);   // Define a porta 6 como saída
  pinMode(ledRedPed, OUTPUT);     // Define a porta 4 como saída
  
  pinMode(sensorTrig, OUTPUT);    // Define o pino do trigger do sensor como saída
  pinMode(sensorEcho, INPUT);     // Define o pino do echo do sensor como entrada

  digitalWrite(ledGreenCar, HIGH);  // Acende a luz verde do semáforo dos carros
  digitalWrite(ledRedPed, HIGH);    // Acende a luz vermelha do semáforo dos pedestres
}

void loop() {
  // Verifica a distância do sensor ultrassônico
  long distancia = calculaDistancia();

  if ((millis() - tempo) > 5000 || distancia < 50) { // Verifica se passaram 5 segundos ou se o sensor detectou algo a menos de 50cm
    
    if (distancia < 50) { // Verifica se o sensor detectou um objeto
      digitalWrite(ledGreenCar, LOW);    // Apaga a luz verde do semáforo dos carros
      digitalWrite(ledYellowCar, HIGH);  // Acende a luz amarela do semáforo dos carros
      delay(2000);                       // Espera de 2 segundos de segurança
      digitalWrite(ledYellowCar, LOW);   // Apaga a luz amarela do semáforo dos carros
      digitalWrite(ledRedCar, HIGH);     // Acende a luz vermelha do semáforo dos carros
      delay(1000);                       // Espera de 1 segundo de segurança
      digitalWrite(ledRedPed, LOW);      // Apaga a luz vermelha do semáforo dos pedestres
      digitalWrite(ledGreenPed, HIGH);   // Acende a luz verde do semáforo dos pedestres
      
      delay(15000);                      // Espera de 15 segundos enquanto o semáforo de pedestres está verde

      digitalWrite(ledGreenPed, LOW);    // Apaga a luz verde do semáforo dos pedestres   
      digitalWrite(ledRedPed, HIGH);     // Acende a luz vermelha do semáforo dos pedestres
      delay(500);                        // Espera de 0,5 segundos de segurança
      
      digitalWrite(ledRedCar, LOW);      // Apaga a luz vermelha do semáforo dos carros
      digitalWrite(ledGreenCar, HIGH);   // Acende a luz verde do semáforo dos carros
            
      tempo = millis();                  // Atualiza o valor atribuído ao tempo
    }
  }
  delay(10);
}

// Função para calcular a distância com o sensor ultrassônico
long calculaDistancia() {
  digitalWrite(sensorTrig, LOW);  // Garante que o trigger esteja em nível baixo
  delayMicroseconds(2);
  digitalWrite(sensorTrig, HIGH); // Envia um pulso de 10µs para o trigger
  delayMicroseconds(10);
  digitalWrite(sensorTrig, LOW);
  
  long duracao = pulseIn(sensorEcho, HIGH);  // Recebe o tempo que o pulso levou para retornar
  long distancia = duracao * 0.034 / 2;      // Calcula a distância em centímetros
  
  return distancia;  // Retorna a distância calculada
}