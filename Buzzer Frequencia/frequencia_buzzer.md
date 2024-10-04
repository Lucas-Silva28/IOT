## Pulo da Gaita - O Auto da Compadecida.

# Descrição.

Este código foi copiado do site (https://dragaosemchama.com/2019/02/musicas-para-arduino/#google_vignette), 
que permite ao Arduino tocar a melodia "Pulo da Gaita" do espetáculo "O Auto da Compadecida" utilizando um buzzer piezoelétrico. 
O código define as notas musicais e suas durações, gerando sons a partir da campainha conectada ao pino especificado.
Toda a sua estrutura foi criada no TinkerCard na linguagem C++. Tendo o Intuito de usar em vários luagres e momentos com por exmplo alarme de incêndio.

 ## O que foi usado para Funcionar.

- 1 Arduino Uno.
- 1 Buzzer piezoelétrico.
- 4 Jumpers Macho-Macho.
- 1 Protoboard.

## Imagem do Arduino Montada.

![buzzer_com_frequencia](buzzer_frequencia.png)


## Configuração de Tempo e Pino.


O tempo de execução da música é configurável através da variável tempo, que controla a velocidade das notas.
O pino utilizado para o buzzer é definido em variável buzzer.

int tempo = 100; -- Ajuste a velocidade da música
int buzzer = 3; -- Pino conectado ao buzzer

## Cálculo de Durações.


A duração de uma semibreve 
é ​​calculada com base na variável tempo, e as durações de cada nota são derivadas dela.

int wholenote = (60000 * 4) / tempo; -- Duração da semibreve em milissegundos.


## Funçãosetup()
A função setup()é executada uma vez quando o programa começa. 
Ela itera sobre as notas da melodia, calculando a duração de 
cada uma e emitindo o som correspondente através do buzzer.

void setup() {
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    -- Cálculo da duração da nota
    -- Toca a nota
    -- Espera antes de tocar a próxima nota
  }
}

 ## Funçãoloop();

 
A função loop()não é utilizada neste código, pois a melodia é tocada uma única vez.
Você pode adicionar lógica aqui se desejar tocar a melodia repetidamente.

void loop() {
  -- Não há necessidade de repetir a melodia
}



## Código.

----
-- PULO DA GAITA - O AUTO DA COMPADECIDA 
  -- CONECTE UM BUZZER PIEZO OU ALTO-FALANTE NO PINO 11 OU SELECIONE UM NOVO PINO.
  -- MAIS MÚSICAS DISPONÍVEIS EM https://github.com/robsoncouto/arduino-songs                                            
                                              
                                             -- ROBSON COUTO, 2019

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0


-- ALTERE ISSO PARA TORNAR A MÚSICA MAIS LENTA OU MAIS RÁPIDA
int tempo = 100;

-- ALTERE ISSO PARA O PINO QUE VOCÊ DESEJA USAR
int buzzer = 3;

-- NOTAS DA MELODIA SEGUIDAS DA DURAÇÃO.
-- UM 4 SIGNIFICA UMA SEMÍNIMA, 8 UMA COLCHEIA, 16 UMA SEMICOLCHEIA E ASSIM POR DIANTE.
-- !!NÚMEROS NEGATIVOS SÃO USADOS PARA REPRESENTAR NOTAS PONTUADAS,
-- ENTÃO -4 SIGNIFICA UMA SEMÍNIMA PONTUADA, ISTO É, UMA SEMÍNIMA MAIS UMA COLCHEIA!!
int melody[] = {
  
  -- PULO DA GAITA - AUTO DA COMPADECIDA 
  -- PARTITURA DISPONÍVEL EM https://musescore.com/user/196039/scores/250206
  
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,
  
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,8,
  NOTE_C4,2,

  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,

  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,8,
  NOTE_C4,16, NOTE_D5,8, NOTE_D5,16, NOTE_D5,16, NOTE_D5,8, NOTE_D5,16,

  NOTE_D5,16, NOTE_D5,8, NOTE_D5,16, NOTE_C5,8, NOTE_E5,-8,
  NOTE_C5,8, NOTE_C5,16, NOTE_E5,16, NOTE_E5,8, NOTE_C5,16,
  NOTE_F5,8, NOTE_D5,8, NOTE_D5,8, NOTE_E5,-8,
  NOTE_C5,8, NOTE_D5,16, NOTE_E5,16, NOTE_D5,8, NOTE_C5,16,

  NOTE_F5,8, NOTE_F5,8, NOTE_A5,8, NOTE_G5,-8,//21
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,
  NOTE_F5,-8, NOTE_E5,16, NOTE_D5,8, NOTE_C5,4,
  NOTE_C5,16, NOTE_C5,16, NOTE_C5,16, NOTE_C5,16,

  NOTE_F5,8, NOTE_F5,16, NOTE_A5,8, NOTE_G5,-8,//25
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,
  NOTE_F5,16, NOTE_E5,8, NOTE_D5,16, NOTE_C5,8, NOTE_E5,-8,
  NOTE_C5,8, NOTE_D5,16, NOTE_E5,16, NOTE_D5,8, NOTE_C5,16,
 
  NOTE_F5,8, NOTE_F5,16, NOTE_A5,8, NOTE_G5,-8,//29
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,
  NOTE_F5,8, NOTE_E5,16, NOTE_D5,8, NOTE_C5,8,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,-2,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,-2,
  NOTE_C4,16, NOTE_C4,8, NOTE_C4,16, NOTE_E4,16, NOTE_E4,8, NOTE_E4,16,
  NOTE_F4,16, NOTE_F4,8, NOTE_F4,16, NOTE_FS4,16, NOTE_FS4,8, NOTE_FS4,16,

  NOTE_G4,8, REST,8, NOTE_AS4,8, NOTE_C5,1,
  
  

};

-- SIZEOF DÁ O NÚMERO DE BYTES, CADA VALOR DE INT É COMPOSTO POR DOIS BYTES (16 BITS)
-- HÁ DOIS VALORES POR NOTA (TOM E DURAÇÃO), ENTÃO PARA CADA NOTA HÁ QUATRO BYTES
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

-- ISSO CALCULA A DURAÇÃO DE UMA SEMIBREVE EM MS
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

void setup() {
  -- ITERA SOBRE AS NOTAS DA MELODIA. 
  -- LEMBRE-SE, O ARRAY TEM O DOBRO DO NÚMERO DE NOTAS (NOTAS + DURAÇÕES)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    -- CALCULA A DURAÇÃO DE CADA NOTA
    divider = melody[thisNote + 1];
    if (divider > 0) {
      -- NOTA REGULAR, SIMPLESMENTE PROSSIGA
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      -- NOTAS PONTUADAS SÃO REPRESENTADAS COM DURAÇÕES NEGATIVAS!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // AUMENTA A DURAÇÃO EM METADE PARA NOTAS PONTUADAS
    }

    -- TOCAMOS A NOTA APENAS POR 90% DA DURAÇÃO, DEIXANDO 10% COMO UMA PAUSA
    tone(buzzer, melody[thisNote], noteDuration*0.9);

    -- ESPERA A DURAÇÃO ESPECIFICADA ANTES DE TOCAR A PRÓXIMA NOTA.
    delay(noteDuration);
    
    -- PARA A GERAÇÃO DA FORMA DE ONDA ANTES DA PRÓXIMA NOTA.
    noTone(buzzer);
  }
}

void loop() {
  -- NÃO HÁ NECESSIDADE DE REPETIR A MELODIA.
}