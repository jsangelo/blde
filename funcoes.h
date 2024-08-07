#include "math.h"
#include "stdlib.h"
#define EPS 0.0

void calculaFuncao(double *ind, int d, int nivel, double *leader, double *follower, int funcao);
int getDimensao(int funcao, int nivel);
int getTipo(int funcao, int nivel);
double getLower(int nivel, int funcao, int indice);
double getUpper(int nivel, int funcao, int indice);

int getNEval(int nivel);
