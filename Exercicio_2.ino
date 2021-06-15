// Nome: Mauricio Rosalino Junior
// Exercicio 2:

#define LED1 14
#define LED_LIGADO 0
#define LED_DESLIGADO 1
#define BOTAO1 5
#define BOTAO_LIGADO 0
#define BOTAO_DESLIGADO 1
int b = 0;

void inicializa_hardware(){  
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1, LED_DESLIGADO);
  pinMode(BOTAO1, INPUT_PULLUP);
}
void setup() {
  inicializa_hardware();
}
void loop() {
  if(digitalRead(BOTAO1) == BOTAO_LIGADO && b == 0){
    digitalWrite(LED1, LED_LIGADO);
    b = 1;
    delay(500);
    } 
    if(digitalRead(BOTAO1) == BOTAO_LIGADO && b == 1){
     digitalWrite(LED1, LED_DESLIGADO);
    b = 0;
    delay(500);
    }    
}
