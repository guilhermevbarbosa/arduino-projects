const int LDR = A0; // Pino do LDR na entrada analogica
const int LED_CLARO = 12;
const int LED_MEDIO = 11;
const int LED_ESCURO = 10;
int leitura = 0;
float tensao = 0.0; 

void setup() {
  Serial.begin(9600);
  pinMode(LDR, INPUT); // LDR como entrada de dados
  pinMode(LED_CLARO, OUTPUT);
  pinMode(LED_MEDIO, OUTPUT);
  pinMode(LED_ESCURO, OUTPUT);
}

void loop() {
  leitura = analogRead(LDR); // pega a tensao do LDR
  
  Serial.print("Leitura: ");
  Serial.print(leitura); // Valor lido de 0 - 1023
  Serial.print("\t");

  digitalWrite(LED_CLARO,LOW);
  digitalWrite(LED_MEDIO,LOW);
  digitalWrite(LED_ESCURO,LOW);

  // Verifica a luminosidade do ambiente 
  if(leitura <= 300){
    // Ambiente Escuroçççççççççççç
    digitalWrite(LED_CLARO,HIGH);
  } else if(leitura < 500){
    // Ambiente Medio
    digitalWrite(LED_MEDIO,HIGH);
  } else{
    // Ambiente Claro
    digitalWrite(LED_ESCURO,HIGH);
  }

  // EXIBE A TENSAO NO CONSOLE, APENAS PARA EXIBIR
  tensao = leitura * 5.0 / 1023.0; // Converte o valor da leitura para tensao eletrica
  Serial.print("Tensao: ");
  Serial.print(tensao);
  Serial.print("V");

  Serial.println();
  // EXIBE A TENSAO NO CONSOLE, APENAS PARA EXIBIR

  delay(1000);
}
