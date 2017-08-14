#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>

#define LED_PER_COL 7
#define LED_PER_LIN 7

int mountAddress(int x, int y);
void delay(unsigned int mseconds);
void printWindow(int jBegin);

int lM = 7;
int cM = 7;
int M[7][7] = {0};

int main() {
    M[0][0] = 1;
    M[1][1] = 1;
    M[2][2] = 1;
    M[3][3] = 1;
    M[4][4] = 1;
    M[5][5] = 1;
    M[6][6] = 1;

    initscr(); // Init curses
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);


    int c = 0;
    do {

        clear();
        refresh();
        printWindow(c%7);
        refresh();

        delay(250);

        c++;
    } while(c < 100);

    endwin();           /* End curses mode        */        
    
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