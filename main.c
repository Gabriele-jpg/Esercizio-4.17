#include <stdio.h>

int main() {
    int n, numero;
    int somma = 0;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);
        if (numero < 0) {
            numero =-numero; //in caso il numero fosse negativo
        }
        somma += numero;
    }

    printf("La somma dei valori assoluti è: %d\n", somma);

    return 0;
}
