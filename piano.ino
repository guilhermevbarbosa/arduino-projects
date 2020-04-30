// Pino buzzer
const int buzzer = 10;

const int led_vermelho = 13;
const int led_amarelo = 12;
const int led_verde = 11;
const int btn1 = 7;
const int btn2 = 6;
const int btn3 = 5;

// Frequencias de cada nota musical
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

void setup(){
  pinMode(buzzer, OUTPUT); // buzzer como saída
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
}

void loop(){
//  Salva o estado de cada botão
  bool estado_btn1 = digitalRead(btn1);
  bool estado_btn2 = digitalRead(btn2);
  bool estado_btn3 = digitalRead(btn3);

  if(estado_btn1 == LOW){
    tone(buzzer, c);
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, LOW);
  } else if(estado_btn2 == LOW){
    tone(buzzer, d);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, HIGH);
    digitalWrite(led_verde, LOW);
  } else if(estado_btn3 == LOW){
    tone(buzzer, e);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, HIGH);
  }else{
    noTone(buzzer);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, LOW);
  }

}
