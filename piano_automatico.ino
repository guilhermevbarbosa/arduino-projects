// Pino buzzer
const int buzzer = 10;

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
}

void loop(){
  tone(buzzer, c);
  delay(1000);

  tone(buzzer, d);
  delay(1000);

  tone(buzzer, e);
  delay(1000);

  tone(buzzer, f);
  delay(1000);

  tone(buzzer, g);
  delay(1000);

  tone(buzzer, a);
  delay(1000);

  tone(buzzer, b);
  delay(1000);

  noTone(buzzer);
  delay(2000);
}
