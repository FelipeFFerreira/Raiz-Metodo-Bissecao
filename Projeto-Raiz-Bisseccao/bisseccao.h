/*
 * Prototipos das funcoes para a modelagem do algortimo que calcula uma raiz
 * em uma funcao continua dado um intervalo fechado, utilizando o metodo da bisseccao.
 *
 * Autor: Felipe Ferreira
 */
#ifndef  _BISSECCAO_H_
#define  _BISSECCAO_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*
 * Função que procura o intervalo fechado no qual
 * possa haver uma raiz em uma funcao continua.
 */
void calcular_intervalo(bool, double *, double *);

/*
 * Função que calcular o valor de uma
 * imagem de uma funcao
 */
double calcular_imagem(double);

/*
 * Função que calcula a raiz da função dado 1 intervalo
 * fechado.
 */
void calcular_raiz(bool, double, double);

#endif // _BISSECCAO_H_

