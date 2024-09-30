## Semaforo Inteligente.

# Introdução.

Este Projeto foi criado dentro do TinkerCard na disciplina de Internet das Coisas (IOT), 
tem intuito de medir a temperatura do ambiente, ele utiliza um sensor de temperatura conectado ao pino A0 de um microcontrolador (Arduino, por exemplo), 
e exibe a temperatura lida em graus Celsius em uma tela LCD de 16x2, que se comunica através do protocolo I2C.
A leitura da temperatura é feita em intervalos e o valor é piscado cinco vezes na tela, chamando atenção do usuário.

# Materiais Usados.

- 1 Arduino UNO.
- 1 Protobord.
- 1 Tela LCD 16x2.
- 1 Sensor de Temperatura [TMP36].
- 4 Jumpers Macho-Fémea.
- 5 Jumpers Macho-Macho.

# Imagem do Circuito

![temperaturaambiente](temperaturaambiente.png)


# Código.

-- Biblioteca LCD com módulo I2C
#include <LiquidCrystal_I2C.h>

-- Inicializar o LCD (endereço 0x20, com 16 colunas e 2 linhas)
LiquidCrystal_I2C telaLcd(0x20, 16, 2);

-- Variável para o sensor de temperatura (pino A0)
int sensorTMP = A0;

-- Variável para armazenar o valor lido do sensor de temperatura
int valorLido = 0;

void setup() {
  -- Definir o sensor de temperatura como entrada
  pinMode(sensorTMP, INPUT);

  -- Ligar a tela LCD
  telaLcd.init();

  -- Limpar qualquer dado que esteja na tela
  telaLcd.clear();
  
  -- Exibir mensagem de inicialização
  telaLcd.setCursor(0, 0); -- Posição (coluna 0, linha 0)
  telaLcd.print("Iniciando.");
  delay(1000); -- Aguardar 1 segundos
  telaLcd.clear();
  telaLcd.print("Iniciando..");
  delay(1000); -- Aguardar 1 segundos
  telaLcd.clear();
  telaLcd.print("Iniciando...");
  delay(1700); -- Aguardar 1 segundos
  telaLcd.clear(); -- Limpar a tela para exibir dados posteriormente
  
  -- Aumentar a luminosidade do LCD
  telaLcd.backlight();
}

void loop() {
  -- Capturar o valor analógico do sensor de temperatura
  valorLido = analogRead(sensorTMP);

  -- Converter o valor lido em uma tensão elétrica (em volts)
  float tensao = (valorLido * 5.0) / 1024.0;

  -- Converter a tensão em graus Celsius (baseado no tipo de sensor)
  float temperatura = (tensao - 0.5) * 100.0;

  -- Fazer a mensagem de temperatura piscar 5 vezes
  for (int i = 0; i < 5; i++) {// Código a ser repetido
    --### Passo a passo do ` for (int i = 0; i < 5; i++)`: 1.
    --**`int i = 0`**: - Inicializa a variável `i` com o valor `0`.
    --Esse valor serve como um contador que controla o número de vezes que o laço será executado. 
    -- O valor de `i` começa em 0, começando a primeira repetição do laço
    -- Exibir o valor da temperatura na tela LCD
    telaLcd.setCursor(0, 0); -- Posição (coluna 0, linha 0)
    telaLcd.print("Temperatura:");
    telaLcd.setCursor(0, 1); -- Posição (coluna 0, linha 1)
    telaLcd.print(temperatura); -- Exibir a temperatura
    telaLcd.print("C");
    
    delay(500); -- Manter a mensagem visível por 500ms
    
    -- Apagar a mensagem
    telaLcd.clear();
    
    delay(500); -- Manter a tela apagada por 500ms
  }

  -- Pequeno delay para evitar leituras muito rápidas
  delay(1000);
}



