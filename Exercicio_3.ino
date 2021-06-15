// Nome: Mauricio Rosalino Junior
// Exercicio 3:

#define LED1 12
#define LED2 14
#define LED_LIGADO HIGH
#define LED_DESLIGADO LOW
#define INTERVALO 500

void setup()  {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
              }
void loop(){
    digitalWrite(LED1, LED_LIGADO);
    digitalWrite(LED2, LED_DESLIGADO);
    delay(INTERVALO);
    digitalWrite(LED2, LED_LIGADO);
    digitalWrite(LED1, LED_DESLIGADO);
    delay(INTERVALO);   
            }
