#include <stdio.h>

#define LED_PER_COL 4
#define LED_PER_LIN 5

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

int main() {
        
    for (int i = 0; i < LED_PER_LIN; i++) {
        for (int j = 0; j < LED_PER_COL; j++) {
            printf("%d %d: %d\n", i, j, mountAddress(i, j));
        }
    }

    return 0;
}