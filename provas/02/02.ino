//definição do pino de LED

#define Led_Pin 22

void setup() {
  // configura o pino como saída 
  Serial.begin(115200);
  pinMode(Led_Pin, OUTPUT);
}

void loop() {
  digitalWrite(Led_Pin, HIGH);
  delay(400); // espera por 400ms
  digitalWrite(Led_Pin, LOW);
  delay(800); // espera por 800ms
}


