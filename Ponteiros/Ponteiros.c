#include <stdio.h>

int main() {
    int x = 5;
    int *ponteiro = &x;  // ponteiro apontando para o endereço de memoria de x
    
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
    printf("Endereço armazenado no ponteiro: %p\n", ponteiro);
    
    *ponteiro = 10;  // Modificando o valor de x através do ponteiro
    
    printf("Novo valor de x: %d\n", x);

    return 0;
}