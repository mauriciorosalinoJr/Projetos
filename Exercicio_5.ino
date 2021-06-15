// Nome: Mauricio Rosalino Junior
// Exercicio 5:
#define LED1 12
#define LED2 14
#define LED_LIGADO 0
#define LED_DESLIGADO 1
#define BOTAO1 5
#define BOTAO2 4
#define BOTAO_LIGADO 0
#define BOTAO_DESLIGADO 1
int B = 0;
void inicializa_hardware(){  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, LED_DESLIGADO);
  digitalWrite(LED2, LED_DESLIGADO);
  pinMode(BOTAO1, INPUT_PULLUP);
  pinMode(BOTAO2, INPUT_PULLUP);}
  long tempo1,tempo2;  
void inicializa_interrupcoes(){
    attachInterrupt(digitalPinToInterrupt(BOTAO2), mudar_led_int, FALLING);                                }
void setup(){
    inicializa_hardware();
    inicializa_interrupcoes();
    tempo1 = millis();
    tempo2 = millis();}
    void mudar_led_int(){
    B = 0;}  
    void loop(){
    if(digitalRead(BOTAO1) == BOTAO_LIGADO && B == 0){
    B = 1;}      
       if(millis() - tempo1 >= 500 && B == 1){
          tempo1 = millis();
          digitalWrite(LED1, !digitalRead(LED1));
          digitalWrite(LED2, !digitalRead(LED2));}
          if(millis() - tempo2 >= 250 && B == 1){
           tempo2 = millis();
           digitalWrite(LED2, !digitalRead(LED2));}
           if(B == 0){
    digitalWrite(LED1, LED_DESLIGADO);
    digitalWrite(LED2, LED_DESLIGADO); }
 }





          
