/**
 * Esercizio 1
 * 
 * Descrizione
 * Dati due numeri A e B verificare se A è il quadrato di B (ovvero A = B * B)
 * @author Gabriele Lo Bianco
 */
#include <stdio.h>

int main(void) {

    // Step 1: Dichiaro le variabili
    int A = 0;
    int B = 0;

    // Step 2: Chiedo in input il valore di A
    printf("\nDigita il valore di A:");
    scanf("%d", &A);

    // Step 3: Chiedo in input il valore di B
    printf("\nDigita il valore di B:");
    scanf("%d", &B);

    // Step 4: valuto con (if) se il valore di A è il quadrato di B
    if(A == (B*B)){
        printf("\nA è il quadato di B");
    } else {
        printf("\nA non è il quadrato di B");
    }

    // Fine programma
    printf("\n");
    return 0;
}