#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>

#define LED_PER_COL 4
#define LED_PER_LIN 5

int mountAddress(int x, int y);
void delay(unsigned int mseconds);
void printScreen();

int main() {

    initscr(); // Init curses
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);

    int c = 0;
    do {
        clear();
        refresh();
        printScreen();
        refresh();

        delay(1000);

        c++;
    } while(c < 10);

    endwin();           /* End curses mode        */        
    
    return 0;
}


/**
 * Converte um enderço x,y para um número sequencial entre 0 e mxn.
 * Em uma matroz 3x3 a seguinte sequência será gerada:
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

void printScreen() {
    for (int i = 0; i < LED_PER_LIN; i++) {
        for (int j = 0; j < LED_PER_COL; j++) {
            attron(COLOR_PAIR(i == 0?1:2));
            printw("%4d", mountAddress(i, j));
        }
        printw("\n");
    }
}