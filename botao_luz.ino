#define btn 9 // Pino que está configurado o botão
#define led 12 // Pino do LED

bool acesa = true;
void setup() {
  pinMode(btn, INPUT); 
  pinMode(led, OUTPUT); 
}

void loop() {
  if(digitalRead(btn) == HIGH){
    delay(170);
    
    if(acesa){
       digitalWrite(led, HIGH);
       acesa = false;
    }else{
      digitalWrite(led, LOW);
      acesa = true;
    } 
  }
}
