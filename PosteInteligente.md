# Controle de LED com Sensor de Luminosidade.

Este projeto em C++ tem como objetivo controlar a intensidade de um LED com base na leitura de um sensor de luminosidade analógico. 
O LED aumenta ou diminui sua intensidade conforme a quantidade de luz bloqueada pelo sensor.
O código utiliza um sensor de luminosidade (fotossensor) conectado a uma entrada analógica para detectar a intensidade da luz no ambiente. 
O valor da leitura é usado para controlar a intensidade de um LED conectado a uma porta PWM .Dependendo da quantidade de luz, o LED responderá de acordo.

# Componentes Usados.

- 1 Arduino.
- 1 Protobord.
- 1 Resistor de 150 Ohms.
- 1 Resistor de 10 KOhms.
- 1 Fotoresistor.
- 7 Jumpers Macho-Macho.
- 1 Led Amarelo.
# Montagem do Circuito.

Poste Inteligente

![imagem poste inteligente](https://github.com/user-attachments/assets/b660f2c2-c360-469c-bcce-edcd7ce8eb87)


  # Explicação do Código.

  -- C++ code
--  variavel

int led = 3;
int sensorLuminosidade = A0; 
--
int luz = 0;

void setup()
{
 --led é de saida
  pinMode(led,OUTPUT);
  --  sensor é de entrada
  pinMode(sensorLuminosidade,INPUT);  
}

void loop()
{
  --  capturar o que o sensor leu no ambiente
  -- analogRead é usado para leitura analogica
  luz = analogRead(sensorLuminosidade);
  /* as portad analogicas capturam dados variam de 1 ate 1023*/
  
  -- SE ESTIVER COM POUCA LUZ NO AMBIENTE
  if(luz<500){
    -- passar ao led intensidade máxima
  -- digitalWrite(led,HIGH);  -- LIGAR LED
    analogWrite(led,1023);
  }if(luz>500 & luz<900){
      --  passar ao led intesidade media
    analogWrite(led,500);
      
  }else{-- SE ESTIVER LUZ
 -- digitalWrite(led,LOW);--  DESLIGAR LED
     --  passar ao led intesidade minima
    analogWrite(led,0);
  }
}
