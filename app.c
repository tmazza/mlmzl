#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>
#include "alphabet.h"

#define LED_PER_COL 7
#define LED_PER_LIN 7

int mountAddress(int x, int y);
void delay(unsigned int mseconds);
void printWindow(int jBegin);
int** alocaMatrizInteiros(int lin, int col);
void copyMatrix(CHAR_VIEW view, int x, int y);

int lM = 7;
int cM = 200;
int **M;

void writeMessage(char message[] ) {
    int posj = 0;

    for(int i=0;i<43;i++) {
        switch(message[i]) {
            case ' ': copyMatrix(char_ESPACE, 0, posj); posj+=5; break;
            case 'A': copyMatrix(char_A, 0, posj); posj+=6; break;
            case 'B': copyMatrix(char_B, 0, posj); posj+=6; break;
            case 'C': copyMatrix(char_C, 0, posj); posj+=6; break;
            case 'D': copyMatrix(char_D, 0, posj); posj+=6; break;
            case 'E': copyMatrix(char_E, 0, posj); posj+=6; break;
            case 'F': copyMatrix(char_F, 0, posj); posj+=6; break;
            case 'G': copyMatrix(char_G, 0, posj); posj+=6; break;
            case 'H': copyMatrix(char_H, 0, posj); posj+=6; break;
            case 'I': copyMatrix(char_I, 0, posj); posj+=6; break;
            case 'J': copyMatrix(char_J, 0, posj); posj+=6; break;
            case 'K': copyMatrix(char_K, 0, posj); posj+=6; break;
            case 'L': copyMatrix(char_L, 0, posj); posj+=6; break;
            case 'M': copyMatrix(char_M, 0, posj); posj+=6; break;
            case 'N': copyMatrix(char_N, 0, posj); posj+=6; break;
            case 'O': copyMatrix(char_O, 0, posj); posj+=6; break;
            case 'P': copyMatrix(char_P, 0, posj); posj+=6; break;
            case 'Q': copyMatrix(char_Q, 0, posj); posj+=6; break;
            case 'R': copyMatrix(char_R, 0, posj); posj+=6; break;
            case 'S': copyMatrix(char_S, 0, posj); posj+=6; break;
            case 'T': copyMatrix(char_T, 0, posj); posj+=6; break;
            case 'U': copyMatrix(char_U, 0, posj); posj+=6; break;
            case 'V': copyMatrix(char_V, 0, posj); posj+=6; break;
            case 'W': copyMatrix(char_W, 0, posj); posj+=6; break;
            case 'X': copyMatrix(char_X, 0, posj); posj+=6; break;
            case 'Y': copyMatrix(char_Y, 0, posj); posj+=6; break;
            case 'Z': copyMatrix(char_Z, 0, posj); posj+=6; break;
        }
    }
    
}

int main() {
    M = alocaMatrizInteiros(lM, cM);

    writeMessage("  CHEGA POR HOJE   BOA NOITE");

    initscr();
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);


    int c = 0;
    do {

        clear();
        refresh();
        printWindow(c%cM);
        refresh();

        delay(50);

        c++;
    } while(c);

    endwin();
    
    return 0;
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
        return line + y;
    } else {
        return line + (LED_PER_COL-1 - y);
    }
}

/** 
 * Hand made delay funtion (busy wating)
 */ 
void delay(unsigned int mseconds) {
    clock_t goal = mseconds*1000 + clock();
    while (goal > clock());
}

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
            attron(COLOR_PAIR(M[i][current_j] ? 1 : 2));
            printw("%2s", " ", mountAddress(i, current_j));
        }
        printw("\n");
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