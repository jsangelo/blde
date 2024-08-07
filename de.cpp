#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include <iostream>
using namespace std;

#define TESTE 0
#define PENALTY 1

int SIZEL, SIZEF;
int GENL, GENF;
int SEED;
int FUNCAO;
int DIML, DIMF;
double F, CR;
int VARIANTE;

#include "funcoes.h"

double **popL;
double **popLNova;
//Populacao para armazenar os valores da Follower correspondentes ao Leader em popL
double **popLValoresF;

void inicializaFollower(double** &pop, double *leader, int n, int d);
void inicializa(double** &pop, int n, int d, int nivel = 2);

//=============================================================================
//=============================================================================
void calculaVariancia(double **pop, double *var, int dim, int size){
        // variancias e medias de cada variavel
	double *med = new double[dim];

        for (int d = 0; d < dim; d++){
            double soma = 0;
            for (int n = 0 ; n < size ; n++){
                soma += pop[n][d];
            }
            med[d] = soma / size;
        }

        for (int d = 0; d < dim; d++){
            double soma_Pvar = 0;
            for (int n = 0 ; n < size ; n++){
                soma_Pvar += (pop[n][d] - med[d]) * (pop[n][d] - med[d]);
            }
            var[d] = soma_Pvar / size;
        }

        delete[] med;
}
//=============================================================================
//=============================================================================


void calculaAptidao(double *ind, int d, int nivel, double *leader, double *follower){
    
	if (follower == NULL || leader == NULL){
		ind[d] = RAND_MAX;
		ind[d + 1] = RAND_MAX;
		return;
	}
	calculaFuncao(ind, d, nivel, leader, follower, FUNCAO);
}


void imprimePopulacao(double **pop, int n, int d){
	for(int i = 0; i < n; i++){
		cout << i << ") ";
		for(int j = 0; j < d; j++){
			cout << pop[i][j] << " ";
		}
		cout << " Fit: " << pop[i][d] << " Const: " << pop[i][d+1];

		cout <<  " Foll.: ";
		for(int j = 0; j < DIMF; j++){
			cout << popLValoresF[i][j] << " ";
		}
		cout << " Fit: " << popLValoresF[i][DIMF] << " Const: " << popLValoresF[i][DIMF+1] << endl;
	}
}

void selecionaIndividuos(int &ind1, int &ind2, int &ind3, int i, int n){
	do{
		ind1 = rand()%n;
	} while(ind1 == i);

	do{
		ind2 = rand()%n;
	} while(ind2 == i || ind2 == ind1);

	do{
		ind3 = rand()%n;
	} while(ind3 == i || ind3 == ind1 || ind3 == ind2);
}

int compara(double *ind1, double *ind2, int d, int nivel){
	if (ind1[d+1] <= 0 && ind2[d + 1] > 0){
		return 1;
	} else if (ind1[d+1] > 0 && ind2[d + 1] <= 0){
		return 0;
	} else if (ind1[d+1] > 0 && ind2[d + 1] > 0){
		if (ind1[d+1] <= ind2[d + 1]){
			return 1;
		} else {
			return 0;
		}
	}

	//Se a função é de maximicao compara com >=
	//Caso contrário usa <=
	if (getTipo(FUNCAO, nivel) == 1){
		if (ind1[d] <= ind2[d]){
			return 1;
		} else {
			return 0;
		}
	} else {
		if (ind1[d] >= ind2[d]){
			return 1;
		} else {
			return 0;
		}
	}
}

int selecionaMelhor(double *ind, double **pop, int n, int d, int nivel){
    
	int m = 0;
	for(int j = 0; j < d + 2; j++){
            ind[j] = pop[0][j];
	}
        
	for (int i = 1; i < n; i++){
            if( compara(pop[i], ind, d, nivel) > 0 ){
                for(int j = 0; j < d + 2; j++){
                    ind[j] = pop[i][j];
                    m = i;
                }
            }
	}
	return m;
}

int iguais(double *ind1, double *ind2, int d){
    
	for(int i = 0; i < d; i++){
		if (ind1[i] != ind2[i]){
			return 0;
		}
	}
	return 1;
        
}

void deFollower(double *uL, double *uF){
	
	double **popF;
	double **popFNova;
	inicializaFollower(popF, uL, SIZEF, DIMF);
	inicializa(popFNova, SIZEF, DIMF, 2);

        // variancias e medias de cada variavel
        double *var_inicial = new double[DIMF];
        double *var_atual = new double[DIMF];        

	calculaVariancia(popF, var_inicial, DIMF, SIZEF);

	for (int gF = 0; gF < GENF; gF++){
            
		selecionaMelhor(uF, popF, SIZEF, DIMF, 2); //uF = melhor da populacao do seguidor

		for(int i = 0; i < SIZEL; i++){
			
			int ind1, ind2, ind3;
			selecionaIndividuos(ind1, ind2, ind3, i, SIZEL);
			
			double *u = new double[DIMF + 2];
			int jRand = rand()%DIMF;
			for(int j = 0; j < DIMF; j++){
				if (j == jRand || rand()/(float)RAND_MAX < CR){
                                    
                                    if (VARIANTE == 1){
					//DE/rand/1/bin
					u[j] = popF[ind1][j] + F*(popF[ind2][j] - popF[ind3][j]);
                                    } else if (VARIANTE == 2){
					//DE/best/1/bin
					u[j] = uF[j] + F*(popF[ind2][j] - popF[ind3][j]);
                                    } else if (VARIANTE == 3){
					//DE/target-to-rand/1/bin
					u[j] = popF[i][j] + F*(popF[ind1][j] - popF[i][j]) + F*(popF[ind2][j] - popF[ind3][j]);
                                    }

                                    if (u[j] < getLower(2, FUNCAO, j)) //LOWER
                                            u[j] = getLower(2, FUNCAO, j); 
                                    else if (u[j] > getUpper(2, FUNCAO, j)) //UPPER
                                            u[j] = getUpper(2, FUNCAO, j);

				} else {
					u[j] = popF[i][j];
				}
			}

			calculaAptidao(u, DIMF, 2, uL, u);
			

			if(compara(u, popF[i], DIMF, 1) > 0){
                            for(int j = 0; j < DIMF + 2; j++){
                                popFNova[i][j] = u[j];
                            }
			} else {
                            for(int j = 0; j < DIMF + 2; j++){
                                popFNova[i][j] = popF[i][j];
                            }
			}
			delete[] u;
		}              
                
		//copia a populacao nova
		for (int i = 0; i < SIZEF; i++){
			for(int j = 0; j < DIMF + 2; j++){
				popF[i][j] = popFNova[i][j];
			}
		}

                //critério de parada
//		calculaVariancia(popF, var_atual, DIMF, SIZEF);
//		double soma_total = 0;
//		for (int d = 0; d < DIMF; d++){
//                        soma_total += var_atual[d] / var_inicial[d];
//		}
//		if (soma_total < 0.000001){
//			break;
//		}
	
	}

	selecionaMelhor(uF, popF, SIZEF, DIMF, 2);

	for(int i = 0; i < SIZEF; i++){
		delete[] popF[i];
		delete[] popFNova[i];
	}
	delete[] popF;
	delete[] popFNova;

        //Libera memória do cálculo da variância
        delete[] var_inicial;
        delete[] var_atual;

}

void deLeader(){

        /////////////////////////////////////////////
        double *uBest = new double[DIML + 2];
        selecionaMelhor(uBest, popL, SIZEL, DIML, 1);
        /////////////////////////////////////////////

	for(int i = 0; i < SIZEL; i++){

		int ind1, ind2, ind3;
		selecionaIndividuos(ind1, ind2, ind3, i, SIZEL);
		
		double *u = new double[DIML + 2];
		int jRand = rand()%DIML;
		for(int j = 0; j < DIML; j++){
                        if (j == jRand || rand()/(float)RAND_MAX < CR){
                            
                             if (VARIANTE == 1){
                                //---------- DE/rand/1/bin
                                u[j] = popL[ind1][j] + F*(popL[ind2][j] - popL[ind3][j]);
                             } else if (VARIANTE == 2){
                                //--------- DE/best/1/bin
                                u[j] = uBest[j] + F*(popL[ind2][j] - popL[ind3][j]);
                             } else if (VARIANTE = 3){
                                //--------- DE/target-to-rand/1/bin
                                u[j] = popL[i][j] + F*(popL[ind1][j] - popL[i][j]) + F*(popL[ind2][j] - popL[ind3][j]);
                             }
                             
                        } else {
                                u[j] = popL[i][j];
                        }
                        //u[j] = (int)u[j];
                        if (u[j] < getLower(1, FUNCAO, j))//LOWER
                                u[j] = getLower(1, FUNCAO, j);
                        else if (u[j] > getUpper(1, FUNCAO, j)) //UPPER
                                u[j] = getUpper(1, FUNCAO, j);


		}

		double *uF = new double[DIMF + 2];
		deFollower(u, uF);

		if ( (iguais(u, popL[i], DIML) == 1) && (iguais(uF, popLValoresF[i], DIMF) == 0) ){
			if (compara(uF, popLValoresF[i], DIMF, 2) > 0){
				for(int j = 0; j < DIMF + 2; j++){
					popLValoresF[i][j] = uF[j];
				}
				calculaAptidao(popL[i], DIML, 1, popL[i], uF);
				if (uF[DIMF+1] > 0){
					popL[i][DIML+1] = popL[i][DIML+1] + PENALTY*uF[DIMF+1];
				}
			} else {
				for(int j = 0; j < DIMF + 2; j++){
					uF[j] = popLValoresF[i][j];
				}
			}
		}
		calculaAptidao(u, DIML, 1, u, uF);
		
		if (uF[DIMF+1] > 0){
			u[DIML+1] = u[DIML+1] + PENALTY*uF[DIMF+1];
		}		

		if(compara(u, popL[i], DIML, 1) > 0){

			for(int j = 0; j < DIML + 2; j++){
				popLNova[i][j] = u[j];
			}
			for(int j = 0; j < DIMF + 2; j++){
				popLValoresF[i][j] = uF[j];
			}
		} else {
			for(int j = 0; j < DIML + 2; j++){
				popLNova[i][j] = popL[i][j];
			}
		}
		delete[] uF;
		delete[] u;
	}

	//copia a populacao nova
	for (int i = 0; i < SIZEL; i++){
		for(int j = 0; j < DIML + 2; j++){
			popL[i][j] = popLNova[i][j];
		}
	}

	cout << endl;

	delete[] uBest;
}

void imprimeCabecalho(){
	cout << "g leader ";
	for(int i = 0; i < DIML; i++){
		cout << "x" << i << " ";
	}
	cout << "fitLeader fitLeaderValue constLeader constLeaderValue follower ";
	for(int i = 0; i < DIMF; i++){
		cout << "y" << i << " ";
	}
	cout << "fitFollower fitFollowerValue constFollower constFollowerValue" << " nEvalL nEvalF" << endl;
}

void inicializaFollower(double** &pop, double *leader, int n, int d){
    
	pop = new double*[n];
	for (int i = 0; i < n; i++){
		pop[i] = new double[d + 2];
		for(int j = 0; j < d; j++){
			pop[i][j] = getLower(2, FUNCAO, j) + (rand()/(double)RAND_MAX)*(getUpper(2, FUNCAO, j) - getLower(2, FUNCAO, j)); //UPPER - LOWER2
		}
		calculaAptidao(pop[i], d, 2, leader, pop[i]);
	}
}

void inicializa(double** &pop, int n, int d, int nivel){

	pop = new double*[n];

	for (int i = 0; i < n; i++){
            
		pop[i] = new double[d + 2];
		for(int j = 0; j < d; j++){
			pop[i][j] = getLower(nivel, FUNCAO, j) + (rand()/(double)RAND_MAX)*(getUpper(nivel, FUNCAO, j) - getLower(nivel, FUNCAO, j)); //UPPER - LOWER
		}

		if (nivel == 1){ //se lider, determina valores do seguidor

			deFollower(pop[i], popLValoresF[i]);                   
                
			calculaAptidao(pop[i], DIML, 1, pop[i], popLValoresF[i]);
                        
			if (popLValoresF[i][DIMF+1] > 0){
				pop[i][DIML+1] = pop[i][DIML+1] + PENALTY*popLValoresF[i][DIMF+1];
			}
                        
		} else {
                        calculaAptidao(pop[i], d, 0, NULL, NULL);
		}
	}


}

void BlDE(){
	imprimeCabecalho();
        
        // variancias e medias de cada variavel (critério de parada do leader)
        double *var_inicial = new double[DIML];
        double *var_atual = new double[DIML];

	calculaVariancia(popL, var_inicial, DIML, SIZEL);

	for(int g = 0; g < GENL; g++){
		
		deLeader();
	
		double *uL = new double[DIML + 2];
		int m = selecionaMelhor(uL, popL, SIZEL, DIML, 2);
		cout << "G-" << g << " [Leader] ";
		for(int j = 0; j < DIML; j++){
			cout << uL[j] << " ";
		}
		cout << "Fit: " << uL[DIML] << " Const: " << uL[DIML+1] << " [Follower] ";
		for(int j = 0; j < DIMF; j++){
			cout << popLValoresF[m][j] << " ";
		}
		cout << "Fit: " << popLValoresF[m][DIMF] << " Const: " << popLValoresF[m][DIMF+1] << " " << getNEval(1) << " " << getNEval(2) << endl;
		delete[] uL;
                
                //critério de parada
//		calculaVariancia(popL, var_atual, DIML, SIZEL);
//		double soma_total = 0;
//		for (int d = 0; d < DIML; d++){
//                        soma_total += var_atual[d] / var_inicial[d];
//		}
//		if (soma_total < 0.000001){
//			break;
//		}
		
	}
}

int main(int argc, char *argv[]){
    
    /* Parametros de entrada
    int SIZEL, SIZEF;
    int GENL, GENF;
    int SEED;
    int FUNCAO;
    double F, CR;
    int VARIANTE;*/
    
    for(int i = 0; i < argc; i++){
        if (strcmp(argv[i], "-genL") == 0){
                GENL  = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-popL") == 0){
                SIZEL = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-genF") == 0){
                GENF  = atoi(argv[++i]);                        
        } else if (strcmp(argv[i], "-popF") == 0){
                SIZEF = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-seed") == 0){
                SEED  = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-func") == 0){
                FUNCAO = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-F") == 0){
                F = atof(argv[++i]);
        } else if (strcmp(argv[i], "-CR") == 0){
                CR = atof(argv[++i]);
        } else if (strcmp(argv[i], "-Var") == 0){
                VARIANTE = atoi(argv[++i]);
        }
    }

    srand(SEED);

    DIML = getDimensao(FUNCAO, 1);
    DIMF = getDimensao(FUNCAO, 2);

    inicializa(popLValoresF, SIZEL, DIMF, 2); 
    inicializa(popL, SIZEL, DIML, 1);
    inicializa(popLNova, SIZEL, DIML, 2);

    BlDE();

}
