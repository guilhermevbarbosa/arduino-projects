// Ao utilizar INPUT_PULLUP, não só declara o pino como entrada, mas também
// habilita internamente no chip um resistor entre o pino e o VCC criando 
// um resistor de pull-up em nosso botão. A função deste resistor é a mesma que o resistor 
// de pull-down, mas quando você pressiona o botão, o valor no pino é LOW e não HIGH. 

const int buzzer = 10;
const int btn1 = 11;
const int btn2 = 9;

int frequencia = 2000;

void setup() {
  pinMode(buzzer, OUTPUT); // Pino do Buzzer como saída
  pinMode(btn1, INPUT_PULLUP); // Pino1 botão como entrada
  pinMode(btn2, INPUT_PULLUP); // Pino2 botão como entrada
  Serial.begin(9600);
}

void loop() {
  Serial.println(frequencia);
  
  //  btn1 pressionado, soma 100 a frequencia
  if(digitalRead(btn1) == LOW){
    frequencia = frequencia + 100;
  }
  
  //  btn2 pressionado, subtrai 100 a frequencia
  if(digitalRead(btn2) == LOW){
    frequencia = frequencia - 100;
  }

  tone(buzzer, frequencia); // toca o buzzer com a frequencia
  delay(1000);
  noTone(buzzer); // para o buzzer
  delay(1000);
}
