#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double x1 = 0, x2 = 0;
    int op;
    printf("\t[Raiz Metodo Bisseccao]\n\n");
    do {
        printf("Digite [0]: para intervalos positivos\n");
        printf("Digite [1]: para intervalos negativos: ");
        scanf("%d", &op);
        switch (op) {
            case 0 :
                calcular_intervalo(true, &x1, &x2);
                printf("O valor do primeiro intervalo obtido [%.2lf ... %.2lf]\n\n", x1, x2);
                calcular_raiz(true, x2, x1);
                break;
            case 1 :
                calcular_intervalo(false, &x1, &x2);
                printf("O valor do primeiro intervalo obtido [%.2lf ... %.2lf]\n\n", x1, x2);
                calcular_raiz(true, x2, x1);
                break;
            case 2 :
                break;
            default :
                printf("\nOpcao invalida!");
        }
   } while(op != 2);



    return 0;
}
