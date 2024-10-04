// C++ code
// Controle de dois LEDs RGB, cada um com pinos separados para as cores vermelha, verde e azul

int R = 6;   // Porta para o LED vermelho do primeiro LED RGB
int G = 3;   // Porta para o LED verde do primeiro LED RGB
int B = 5;   // Porta para o LED azul do primeiro LED RGB

int V = 11;  // Porta para o LED vermelho do segundo LED RGB
int VE = 10; // Porta para o LED verde do segundo LED RGB
int A = 9;   // Porta para o LED azul do segundo LED RGB

void setup()
{
  // Configuração dos pinos como saídas para o primeiro LED RGB
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  
  // Configuração dos pinos como saídas para o segundo LED RGB
  pinMode(V, OUTPUT);
  pinMode(VE, OUTPUT);
  pinMode(A, OUTPUT);
}

void loop()
{
  // Geração de números aleatórios para o primeiro LED RGB
  // Cada variável representa um valor de intensidade para as cores (vermelho, verde, azul)
  int v1 = random(0, 255);  // Valor aleatório para o vermelho do primeiro LED (0 a 255)
  int v2 = random(0, 255);  // Valor aleatório para o verde do primeiro LED (0 a 255)
  int v3 = random(0, 255);  // Valor aleatório para o azul do primeiro LED (0 a 255)
  
  // Geração de números aleatórios para o segundo LED RGB
  // Cada variável representa um valor de intensidade para as cores (vermelho, verde, azul)
  int v4 = random(0, 255);  // Valor aleatório para o vermelho do segundo LED (0 a 255)
  int v5 = random(0, 255);  // Valor aleatório para o verde do segundo LED (0 a 255)
  int v6 = random(0, 255);  // Valor aleatório para o azul do segundo LED (0 a 255)
  
  // Aplicação dos valores aleatórios para o primeiro LED RGB
  analogWrite(R, v1); // Ajusta a intensidade do vermelho do primeiro LED (0 a 255)
  analogWrite(G, v2); // Ajusta a intensidade do verde do primeiro LED (0 a 255)
  analogWrite(B, v3); // Ajusta a intensidade do azul do primeiro LED (0 a 255)
  
  // Aplicação dos valores aleatórios para o segundo LED RGB
  analogWrite(V, v4);  // Ajusta a intensidade do vermelho do segundo LED (0 a 255)
  analogWrite(VE, v5); // Ajusta a intensidade do verde do segundo LED (0 a 255)
  analogWrite(A, v6);  // Ajusta a intensidade do azul do segundo LED (0 a 255)
  
  // Pausa de 50 milissegundos antes de atualizar os valores novamente
  delay(50); 
}
