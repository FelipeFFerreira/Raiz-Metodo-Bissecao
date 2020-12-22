/*
 * bisseccao.c
 * Implementacao das funcoes definidas nos prototipos.
 *
 * Autor: Felipe Ferreira
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bisseccao.h"

void calcular_intervalo(bool op, double * x1, double * x2) {
     double imagem = 0, _x1;
     int i;
     if (op) {
        _x1 = 0;
        for (i = 0; imagem >= 0  ; i++ ) {
            imagem = calcular_imagem(_x1 + i) * calcular_imagem(_x1 + i + 1);
            printf("\nf(%.2lf) = %.2lf , f(%.2lf) = %.2lf\n", _x1 + i, calcular_imagem(_x1 + i), _x1 + i + 1, calcular_imagem (_x1 + i + 1));
        }
        printf("Teorema de Bolzano = f(%.2lf) * f(%.2lf) = %.2lf\n\n ", _x1 + i - 1, _x1 + i, imagem);
        *x1 = _x1 + i - 1;
        *x2 = _x1 + i;
     }
        else {
            _x1 =  0;
            for (i = 0; imagem >= 0; i-- ) {
                imagem = calcular_imagem(_x1 + i) * calcular_imagem(_x1 + i - 1);
                printf("\nf(%.2lf) = %.2lf , f(%.2lf) = %.2lf\n", _x1 + i, calcular_imagem(_x1 + i), _x1 + i - 1, calcular_imagem (_x1 + i - 1));
        }
        printf("Teorema de Bolzano = f(%.2lf) * f(%.2lf) = %.2lf\n\n ", _x1 + i + 1, _x1 + i, imagem);
        *x1 = _x1 + i + 1;
        *x2 = _x1 + i;
        }
}

void calcular_raiz(bool op,double a, double b)
{
    double xn = 0, sinal = 0, parada = 1;
    int cont = 0;
    while (parada  >= 0.01){
        cont++;
        parada = op == true ? (a - b) : (a * -1) - (b * -1);
        xn = ((a + b) / 2) ;
        printf("%d. [ a = %.3lf .:. b = %.3lf .:. xn = %.3lf ] f(a) = %.3lf .:. f(b) = %.3lf .:. f(xn) = %.3lf\t[fn*fn = %.3lf\t] .:. ", cont, b, a, xn, calcular_imagem(b), calcular_imagem(a), calcular_imagem(xn), calcular_imagem(a) * calcular_imagem(xn));
        sinal = calcular_imagem(a) * calcular_imagem(xn);
        if (sinal < 0 ) b = xn;
        else a = xn;
        printf("parada = %lf\n", parada);
    }
    printf("\n");

}

double calcular_imagem(double x)
{
    return x - cos(x);
}
