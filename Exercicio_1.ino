// Nome: Mauricio Rosalino Junior
// Exercicio 1:

#define LED1 14
#define LED_LIGADO 0
#define LED_DESLIGADO 1
#define BOTAO1 5
#define BOTAO2 4
#define BOTAO_LIGADO 0
#define BOTAO_DESLIGADO 1

void inicializa_hardware(){
  
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1, LED_DESLIGADO);
  pinMode(BOTAO1, INPUT_PULLUP);
  pinMode(BOTAO2, INPUT_PULLUP);
}
void setup() {
  inicializa_hardware();
}
void loop() {
  if(digitalRead(BOTAO1) == BOTAO_LIGADO && digitalRead(BOTAO2) == BOTAO_DESLIGADO ){
    digitalWrite(LED1, LED_LIGADO);
    } 
  if(digitalRead(BOTAO2) == BOTAO_LIGADO && digitalRead(BOTAO1) == BOTAO_DESLIGADO){
     digitalWrite(LED1, LED_DESLIGADO);
    }  
}
