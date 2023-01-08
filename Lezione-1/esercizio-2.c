/**
 * Esercio 2
 * 
 * Descrizione:
 * Dato un rettangolo, le due dimensioni (base e altezza) calcolare area e perimetro; infine se
base è uguale ad altezza, dire se si tratta di un quadrato o meno

 @author Gabriele Lo Bianco
 */

#include <stdio.h>

int main(void) {

    // Step 1: dichiaro le varibili di tipo int
    int base = 0, altezza = 0, area = 0, perimetro = 0;

    // Step 2: chiedo all'utente base e altezza
    printf("\nDigita il valore di altezza:");
    scanf("%d", &altezza);

    // Step 3: chiedo all'utente base e altezza
    printf("\nDigita il valore di base:");
    scanf("%d", &base);

    // Step 4: calcolo l'area
    area = base * altezza;

    // Step 5: calcolo il perimetro
    perimetro = (base * 2) + (altezza * 2);

    // Step 6: Visualizzo a schermo area e perimetro
    printf("\nIl valore di area= %d e il perimetro= %d", area, perimetro);

    // Step 7: si tratta di un quadrato ?
    if(base == altezza){
        printf("\n si tratta di un QUADRATO");
    } else {
        printf("\n si trata di un RETTANGOLO");
    }

    printf("\n");
    return 0;

}