const int pinoChave = 7; //PINO DIGITAL UTILIZADO PELA CHAVE FIM DE CURSO
const int pinoChave2 = 8; //PINO DIGITAL UTILIZADO PELA CHAVE FIM DE CURSO
const int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED
const int pinoLed2= 11; //PINO DIGITAL UTILIZADO PELO LED

void setup() {
pinMode(pinoChave, INPUT_PULLUP); //DEFINE O PINO COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
  //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH)
  
pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO

pinMode(pinoChave2, INPUT_PULLUP); //DEFINE O PINO COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
  //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH)
pinMode(pinoLed2, OUTPUT); //DEFINE O PINO COMO SAÍDA
digitalWrite(pinoLed2, LOW); //LED INICIA DESLIGADO
}
void loop(){
  if(digitalRead(pinoChave) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
      digitalWrite(pinoLed, HIGH); //ACENDE O LED
  }else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
  }
    if(digitalRead(pinoChave2) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
      digitalWrite(pinoLed2, HIGH); //ACENDE O LED
  }else{ //SENÃO, FAZ
    digitalWrite(pinoLed2, LOW); //APAGA O LED
  }
}