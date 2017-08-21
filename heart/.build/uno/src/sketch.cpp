#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "alphabet.h"
void setup();
void loop();
void ligaLED(int g, unsigned long fita);
void apagaLED(int g);
int mountAddress(int x, int y);
void copyMatrix(CHAR_VIEW view, int y);
void printWindow(int jBegin);
char** alocaMatrizChar(int lin, int col);
#line 1 "src/sketch.ino"
//#include <Adafruit_NeoPixel.h>
//#include "alphabet.h"
#define R 0x009900 //VERMELHO
#define LED_PER_COL 7
#define LED_PER_LIN 7
#define PIN 4 // Pino de controle
#define LED_COUNT 60 // Quantidade de LED's

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

int lM = 7;
int cM = 50;
char **M;

int posj = 0;
int c = 0;
char *message;

void setup()
{
  Serial.begin(9600);//Inicia a serial com baud rate
  leds.begin(); // Inicia a fita de LED
  leds.show(); // Atualiza o estados dos LEDs   
  M = alocaMatrizChar(lM, cM);
}

void loop()
{
  delay(1000);
  copyMatrix(c_OPEN, 0);
  printWindow(0);
  delay(100);
  copyMatrix(c_CLOSE, 0);
  printWindow(0);
  delay(100);
  // c++;
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
        return line + y + 1;
    } else {
        return line + (LED_PER_COL-1 - y) + 1;
    }
}

/**
 * Copia uma matrox mxn dentro de M a partir da posição x,y
 */
void copyMatrix(CHAR_VIEW view, int y) {
    for(int i = 0; i < view.nLines; i++) {
        for(int j = 0; j < view.nColumns; j++) {
            M[i][y+j] = view.data[i][j];
        }
    }
}

/**
 * Print LED_PER_LINxLED_PER_COL of M starting at column jBegin. 
 * if jBegin+LIN_PER_COL > cM, jBegin is set to 0
 */
void printWindow(int jBegin) {
    int pos_j = 0;
    for (int i = 0; i < LED_PER_LIN; i++) {
        for (int j = jBegin; j < LED_PER_COL+jBegin; j++) {
            pos_j = j;
            if(pos_j >= cM) {
              pos_j = pos_j - cM; 
            }
            
            if(M[i][pos_j] == '1') {
              ligaLED(mountAddress(i, j-jBegin), R);
            } else {
              apagaLED(mountAddress(i, j-jBegin));            
            }
            
        }        
    }
}

char** alocaMatrizChar(int lin, int col)
{
    char **m = (char**) malloc(lin * sizeof(char*));   
    for (int i = 0; i < lin; i++) {
        m[i] = (char*) malloc(col * sizeof(char));
        for (int j = 0; j < col; j++) {
            m[i][j] = '0';
        }
    }
    return m;
}