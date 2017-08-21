#include <Adafruit_NeoPixel.h>
#include <stdlib.h>

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

typedef struct char_view {
    char match;
    int nLines;
    int nColumns;
    int data[7][5];
} CHAR_VIEW;

int mountAddress(int x, int y);
void printWindow(int jBegin);
void copyMatrix(CHAR_VIEW view, int x, int y);

const CHAR_VIEW char_A = { 'A', 7, 5, 
    0,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,1,
    1,0,0,0,1,
    1,0,0,0,1
};

const CHAR_VIEW char_B = { 'B', 7, 5,
    1,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,0
};

const CHAR_VIEW char_C = { 'C', 7, 5, 
    0,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,1,
    0,1,1,1,0
};


const CHAR_VIEW char_D = { 'D', 7, 5, 
    1,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,0
};

const CHAR_VIEW char_E = { 'E', 7, 5, 
    1,1,1,1,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,1,1,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,1,1,1,0
};

const CHAR_VIEW char_F = { 'F', 7, 5, 
    1,1,1,1,1,
    1,0,0,0,0,
    1,0,0,0,0,
    1,1,1,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0
};

const CHAR_VIEW char_G = { 'G', 7, 5, 
    1,1,1,1,1,
    1,0,0,0,0,
    1,0,0,0,0,
    1,1,1,1,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,1
};

const CHAR_VIEW char_H = { 'H', 7, 5, 
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1
};

const CHAR_VIEW char_I = { 'I', 7, 5, 
    1,1,1,0,0,
    0,1,0,0,0,
    0,1,0,0,0,
    0,1,0,0,0,
    0,1,0,0,0,
    0,1,0,0,0,
    1,1,1,0,0
};

const CHAR_VIEW char_J = { 'J', 7, 5, 
    0,0,1,1,1,
    0,0,0,1,0,
    0,0,0,1,0,
    0,0,0,1,0,
    0,0,0,1,0,
    1,0,0,1,0,
    0,1,1,0,0
};

const CHAR_VIEW char_K = { 'k', 7, 5, 
    1,0,0,1,0,
    1,0,0,1,0,
    1,0,1,0,0,
    1,1,0,0,0,
    1,0,1,0,0,
    1,0,0,1,0,
    1,0,0,1,0
};

const CHAR_VIEW char_L = { 'L', 7, 5, 
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,1,1,1,0
};

const CHAR_VIEW char_M = { 'M', 7, 5, 
    0,0,0,0,0,
    1,0,0,0,1,
    1,1,0,0,1,
    1,0,1,0,1,
    1,0,0,1,1,
    1,0,0,0,1,
    1,0,0,0,1
};

const CHAR_VIEW char_N = { 'N', 7, 5, 
    0,0,0,0,0,
    0,0,0,0,0,
    1,1,0,0,1,
    1,0,1,0,1,
    1,0,0,1,1,
    1,0,0,0,1,
    1,0,0,0,1
};

const CHAR_VIEW char_O = { 'O', 7, 5, 
    0,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    0,1,1,1,0
};

const CHAR_VIEW char_P = { 'P', 7, 5, 
    1,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0
};

const CHAR_VIEW char_Q = { 'Q', 7, 5, 
    0,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    0,1,1,1,0,
    0,0,0,0,1
};

const CHAR_VIEW char_R = { 'R', 7, 5, 
    0,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,1
};

const CHAR_VIEW char_S = { 'S', 7, 5, 
    0,1,1,1,0,
    1,0,0,0,1,
    1,0,0,0,0,
    0,1,1,1,0,
    0,0,0,0,1,
    1,0,0,0,1,
    0,1,1,1,0
};

const CHAR_VIEW char_T = { 'T', 7, 5, 
    1,1,1,1,1,
    0,0,1,0,0,
    0,0,1,0,0,
    0,0,1,0,0,
    0,0,1,0,0,
    0,0,1,0,0,
    0,0,1,0,0
};

const CHAR_VIEW char_U = { 'U', 7, 5, 
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    0,1,1,1,0
};

const CHAR_VIEW char_V = { 'V', 7, 5, 
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    1,0,0,0,1,
    0,1,0,1,0,
    0,1,0,1,0,
    0,0,1,0,0
};

const CHAR_VIEW char_W = { 'W', 7, 5, 
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,1,0,
    1,0,1,0,1,
    0,1,0,0,0
};

const CHAR_VIEW char_X = { 'X', 7, 5, 
    0,0,0,0,0,
    0,0,0,0,0,
    1,0,0,0,1,
    0,1,0,1,0,
    0,0,1,0,0,
    0,1,0,1,0,
    1,0,0,0,1
};

const CHAR_VIEW char_Y = { 'Y', 7, 5, 
    1,0,0,0,1,
    1,0,0,0,1,
    0,1,0,1,0,
    0,0,1,0,0,
    0,0,1,0,0,
    0,0,1,0,0,
    0,0,1,0,0
};

const CHAR_VIEW char_Z = { 'Z', 7, 5, 
    0,0,0,0,0,
    0,1,1,1,1,
    0,0,0,0,1,
    0,0,0,1,0,
    0,0,1,0,0,
    0,1,0,0,0,
    0,1,1,1,1
};

const CHAR_VIEW char_ESPACE = { ' ', 7, 5, 
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0
};


//Cria uma instância da Classe Adafruit NeoPixel chamado "leds"
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

#define MSG 10

int lM = 7;
int cM = 50;
int **M;

int posj = 0;
int c = 0;
char message[MSG] = "A B C D";

void setup()
{
  Serial.begin(9600);//Inicia a serial com baud rate
  
  M = alocaMatrizInteiros(lM, cM);
//  copyMatrix(char_A, 0, 0);
  
  for(int i=0;i<lM;i++){
    for(int j=0;j<cM;j++){
      Serial.print(M[i][j]);
    } 
    Serial.println("");
  }  
  leds.begin(); // Inicia a fita de LED
  leds.show(); // Atualiza o estados dos LEDs
  
  
  escreveMensagem();

  
}

void loop()
{
  printWindow(c%cM);
  delay(80);
  c++;
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
void copyMatrix(CHAR_VIEW view, int x, int y) {
    for(int i = 0; i < view.nLines; i++) {
        for(int j = 0; j < view.nColumns; j++) {
            M[x+i][y+j] = view.data[i][j];
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
            
            if(M[i][pos_j]) {
              ligaLED(mountAddress(i, j-jBegin), E);
            } else {
              apagaLED(mountAddress(i, j-jBegin));            
            }
            
        }        
    }
}

int** alocaMatrizInteiros(int lin, int col)
{
    int **m = (int**) malloc(lin * sizeof(int*));   
    for (int i = 0; i < lin; i++) {
        m[i] = (int*) malloc(col * sizeof(int));
        for (int j = 0; j < col; j++) {
            m[i][j] = 0;
        }
    }
    return m;
}

void escreveMensagem() {
    for(int i=0;i<MSG;i++) {
      escreveChar(message[i]);
    }    
}

void escreveChar(char a) {
  if(a == ' ') { copyMatrix(char_ESPACE, 0, posj); posj+=5; }
  else if(a == 'A') { copyMatrix(char_A, 0, posj); posj+=6; }
  else if(a == 'B') { copyMatrix(char_B, 0, posj); posj+=6; }
  else if(a == 'C') { copyMatrix(char_C, 0, posj); posj+=6; }
  else if(a == 'D') { copyMatrix(char_D, 0, posj); posj+=6; }
  else if(a == 'E') { copyMatrix(char_E, 0, posj); posj+=6; }
  else if(a == 'F') { copyMatrix(char_F, 0, posj); posj+=6; }
  else if(a == 'G') { copyMatrix(char_G, 0, posj); posj+=6; }
  /*else if(a == 'H') { copyMatrix(char_H, 0, posj); posj+=6; }
  else if(a == 'I') { copyMatrix(char_I, 0, posj); posj+=6; }
  else if(a == 'J') { copyMatrix(char_J, 0, posj); posj+=6; }
  else if(a == 'K') { copyMatrix(char_K, 0, posj); posj+=6; }
  else if(a == 'L') { copyMatrix(char_L, 0, posj); posj+=6; }
  else if(a == 'M') { copyMatrix(char_M, 0, posj); posj+=6; }
  else if(a == 'N') { copyMatrix(char_N, 0, posj); posj+=6; }
  else if(a == 'O') { copyMatrix(char_O, 0, posj); posj+=6; }
  else if(a == 'P') { copyMatrix(char_P, 0, posj); posj+=6; }
  else if(a == 'Q') { copyMatrix(char_Q, 0, posj); posj+=6; }
  else if(a == 'R') { copyMatrix(char_R, 0, posj); posj+=6; }
  else if(a == 'S') { copyMatrix(char_S, 0, posj); posj+=6; }
  else if(a == 'T') { copyMatrix(char_T, 0, posj); posj+=6; }
  else if(a == 'U') { copyMatrix(char_U, 0, posj); posj+=6; }
  else if(a == 'V') { copyMatrix(char_V, 0, posj); posj+=6; }
  else if(a == 'W') { copyMatrix(char_W, 0, posj); posj+=6; }
  else if(a == 'X') { copyMatrix(char_X, 0, posj); posj+=6; }
  else if(a == 'Y') { copyMatrix(char_Y, 0, posj); posj+=6; }
  else if(a == 'Z') { copyMatrix(char_Z, 0, posj); posj+=6; }*/
}
