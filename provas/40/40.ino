//definição do pino de LED

#define Led_Pin 14

void setup() {
  // configura o pino como saída 
  Serial.begin(115200);
  pinMode(Led_Pin, OUTPUT);
}

void loop() {
  digitalWrite(Led_Pin, HIGH);
  delay(600); // espera 
  digitalWrite(Led_Pin, LOW);
  delay(200); // espera 
}


