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
void escreveChar(char ch, int pos);
CHAR_VIEW getCharView(char ch);
char** alocaMatrizChar(int lin, int col);
#line 1 "src/sketch.ino"
//#include <Adafruit_NeoPixel.h>
//#include "alphabet.h"

#define Z 0x0000FF //AZUL
#define E 0x008000 //VERDE
#define L 0xFFA500 //LARANJA
#define A 0xFFFF00 //AMARELO
#define R 0x003300 //VERMELHO

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

  for(int i=0;i<lM;i++){
    for(int j=0;j<cM;j++) {
      Serial.print(M[i][j]);
    }
    Serial.println("");
  }
  char msg[8] = "EH ISSO";

  for(int i=0;i<7;i++) {
    escreveChar(msg[i], i*6);
  }

}

void loop()
{
  printWindow(c%cM);
  c++;

  if(c > cM) c = 0;
  delay(100);
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

void escreveChar(char ch, int pos) {
  copyMatrix(getCharView(ch), pos);
}

CHAR_VIEW getCharView(char ch) {
  switch(ch) {
    case ' ': return c_SPC;
    case 'A': return c_A;
    case 'B': return c_B;
    case 'C': return c_C;
    case 'D': return c_D;
    case 'E': return c_E;
    case 'F': return c_F;
    case 'G': return c_G;
    case 'H': return c_H;
    case 'I': return c_I;
    case 'J': return c_J;
    case 'K': return c_K;
    case 'L': return c_L;
    case 'M': return c_M;
    case 'N': return c_N;
    case 'O': return c_O;
    case 'P': return c_P;
    case 'Q': return c_Q;
    case 'R': return c_R;
    case 'S': return c_S;
    case 'T': return c_T;
    case 'U': return c_U;
    case 'V': return c_V;
    case 'W': return c_W;
    case 'X': return c_X;
    case 'Y': return c_Y;
    case 'Z': return c_Z;
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