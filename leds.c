#include <Adafruit_NeoPixel.h>
#include <stdlib.h>
#include "alphabet.h"

#define P 0x000000//PRETO
#define Z 0x0000FF//AZUL
#define E 0x008000//VERDE

#define V 0xFF0000//VERMELLHO
#define L 0xFFA500//LARANJA
#define R 0xFFC0CB//ROSE
#define A 0xFFFF00//AMARELO
#define B 0xFFFFFF//BRANCO

#define LED_PER_COL 7
#define LED_PER_LIN 7
#define PIN 4// Pino de controle
#define LED_COUNT 60// Quantidade de LED's
//Cria uma instância da Classe Adafruit NeoPixel chamado "leds"
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);


int lM = 7;
int cM = 80;
int M [7][80];

int count=0;
int a=40;
long i = 0;
long r = 0;
long g = 0;
long b = 0;
long pos = 0;


/**
 * Print LED_PER_LINxLED_PER_COL of M starting at column jBegin. 
 * if jBegin+LIN_PER_COL > cM, jBegin is set to 0
 */
void printWindow(int jBegin) {
    int i = 0;
    int j = 0;
    int current_j = 0;
    for (i = 0; i < LED_PER_LIN; i++) {
        for (j = jBegin; j < LED_PER_COL+jBegin; j++) {
            current_j = j;
            if(j >= LED_PER_COL) {
                current_j = j - LED_PER_COL;
            }
            if(M[i][current_j]){
              ligaLED(mountAddress(i, current_j),Z);
            }
            
 
        }
        
    }

}


void setup()
{
  Serial.begin(9600);//Inicia a serial com baud rate


  
  copyMatrix(char_A,0,0);
  copyMatrix(char_B,0,5);
  leds.begin(); // Inicia a fita de LED

  leds.show(); // Atualiza o estados dos LEDs
}

void loop()
{

     printWindow(count);
     delay(1000);
     count++;
}


//Função liga led individual
void ligaLED(int g, unsigned long fita)//Recebe a posição e tempo de Delay
{
leds.setPixelColor(g, fita);//Aciona o LED requerido
 leds.show();//Atualiza o LED
}



//Função apaga LED individual
void apagaLED(int g)
{
leds.setPixelColor(g, 0);//Desaciona o LED requerido
 leds.show();//Atualiza o LED
}



/**
 * Converte um endereço x,y para um número sequencial entre 0 e mxn.
 * Em uma matriz 3x3 a seguinte sequência será gerada:
 *   6 7 8
 *   5 4 3
 *   0 1 2
 */
int mountAddress(int x, int y) {
    int line = (LED_PER_LIN-1 - x) * LED_PER_COL;
    if(line % 2 == 0) {
        return line + y+1;
    } else {
        return line + (LED_PER_COL-1 - y+1);
    }
}



/**
 * Copia uma matrox mxn dentro de M a partir da posição x,y
 */
void copyMatrix(CHAR_VIEW view, int x, int y) {
    for(int i = 0; i < view.nLines; i++) {
        for(int j = 0; j < view.nColumns; j++) {
            M[x+i][y+j] = view.data[i][j];
        }
    }
}   