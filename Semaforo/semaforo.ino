//Projeto semaforo

void setup() {
   //  Configurando pinos de LEDS de saída
   pinMode(9, OUTPUT);  // Verde Pedestre
   pinMode(10, OUTPUT);  // Vermelho Pedestre
   pinMode(11, OUTPUT);  // Vermelho Veículos
   pinMode(12, OUTPUT);  // Amarelo Veículos
   pinMode(13, OUTPUT);  // Verde Veículos
}

void loop() {
  //  Sinal Pedestre Fechado
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  //  Sinal Veículo aberto
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);

  // Sinal fechando 
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(3000);

  //Sinal fechado
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  //  Sinal Pedestre Aberto
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(5000);

  //Sinal Piscante para o pedestre quando estiver para fechar
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
}
