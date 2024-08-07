#include "funcoes.h"
#include <iostream>
#include "stdio.h"
using namespace std;

//Armazena o numero de avaliacoes para cada nivel
int nEvalL = 0;
int nEvalF = 0;

int getNEval(int nivel){
	if (nivel == 1)
		return nEvalL;
	else
		return nEvalF;
}

int getDimensao(int funcao, int nivel){
	switch(funcao){
		case 1001: //SMD1 -Deb
			if (nivel == 1){
				return 5;
			} else {
				return 5;
			}
		break;
		case 1002: //SMD2
			if (nivel == 1){
				return 5;
			} else {
				return 5;
			}
		break;
		case 1003: //SMD3
			if (nivel == 1){
				return 5;
			} else {
				return 5;
			}
		break;
		case 1004: //SMD4
			if (nivel == 1){
				return 5;
			} else {
				return 5;
			}
		break;
                case 1005: //SMD5
			if (nivel == 1){
				return 5;
			} else {
				return 5;
			}
		break;
                case 1006: //SMD6
			if (nivel == 1){
				return 5;
			} else {
				return 5;
			}
		break;
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
		case 1: // Shimizu,81(Ex.1)
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
		case 2: //Shimize,81(Ex.2)
			if (nivel == 1){
				return 2;
			} else {
				return 2;
			}
		break;
		case 3: //Candler,82
			if (nivel == 1){
				return 2;
			} else {
				return 3;
			}
		break;
		case 4: //Bard,82(Ex.2)
			if (nivel == 1){
				return 2;
			} else {
				return 2;
			}
		break;
		case 5: //Aiyoshi,84(Ex.2)
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 2;
			}
		break;
		case 6: //Bard,88(Ex.1)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 7: //Bard,88(Ex.2)
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 2;
			}
		break;
		case 8: //Anandalingam,90
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 9: //Savard,94
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 2;
			}
		break;
		case 10: //Falk,95
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 2;
			}
		break;
		case 11: //Shimizu,95
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 12: //Bard,98(pg.197)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 13: //Bard,98(pg.263)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 14: //Bard,98(pg.306)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 15: //Oduguwa,02(Ex.1)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 2;
			}
		break;
                case 16: //Rajesh,03 (Ex.2)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 17: //Rajesh,03 (Ex.3)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 18: //Rajesh,03 (Ex.4)
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		///// Novos exemplos para a apresentação Calvete2004
                case 19:
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 6;
			}
		break;
	}
}

//Retorna se min (1) ou max (2)
int getTipo(int funcao, int nivel){
	switch(funcao){
		case 1001:
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
		case 1002:
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
		case 1003:
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
		case 1004:
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
                case 1005:
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
                case 1006:
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
		case 1: //Shimizu,81
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
		case 2: //Shimizu,81
			if (nivel == 1){
				return 1;
			} else {
				return 1;
			}
		break;
		case 3: //Candler,82
			if (nivel == 1){
				return 2;
			} else {
				return 2;
			}
		break;
		case 4: //Bard,82
			if (nivel == 1){
				return 2;
			} else {
				return 2;
			}
		break;
		case 5: //Aiyoshi,84
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 6: //Bard,88
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 7: //Bard,88
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 8: //Anandalingam,90
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 2;
			}
		break;
		case 9: //Savard,94
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 10: //Falk,95
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 11: //Shimizu,95
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 12: //Bard,98
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
		case 13: //Bard,98
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 14: //Bard,98
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 15: //Oduguwa,02
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 2;
			}
		break;
                case 16: //Rajesh,03
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 17: ////Rajesh,03
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
                case 18: //Rajesh,03
			if (nivel == 1){
				return 2;
			} else if (nivel == 2){
				return 2;
			}
		break;
		///// Novos exemplos para a apresentação Calvete2004
		case 19:
			if (nivel == 1){
				return 1;
			} else if (nivel == 2){
				return 1;
			}
		break;
	}
}


void calculaFuncao(double *ind, int d, int nivel, double *leader, double *follower, int funcao){

	//Incrementa o numero de chamadas à função
	if (nivel == 1)
		nEvalL++;
	else 
		nEvalF++;

//Para os problemas 1001 à 1005.
// x1i com i de 1 a p
// x2i com i de 1 a r
// y1i com i de 1 a q
// y2i com i de 1 a r
// p = q = 3, r = 2.

//Para o problema 1006
// x1i com i de 1 a p
// x2i com i de 1 a r
// y1i com i de 1 a q+s
// y2i com i de 1 a r
// p = 3, q = 1, r = 2, s = 2, para 1006.
    
	if (funcao == 1001){
                double x11, x12, x13, x21, x22;
                double y11, y12, y13, y21, y22;
		double fit = 0, rest = 0.0;
                //x1i, x2i, y1i \in [-5, 10]
                //y2i \in (-pi/2, pi/2)
                
		if (nivel == 1){
                    x11 = ind[0];
                    x12 = ind[1];
                    x13 = ind[2];
                    x21 = ind[3];
                    x22 = ind[4];
                    y11 = follower[0];
                    y12 = follower[1];
                    y13 = follower[2];
                    y21 = follower[3];
                    y22 = follower[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
                          (y11*y11) + (y12*y12) + (y13*y13) +
                          (x21*x21) + (x22*x22) + 
                            ((x21 - tan(y21))*(x21 - tan(y21))) + 
                            ((x22 - tan(y22))*(x22 - tan(y22)));

                } else if (nivel == 2){
                    y11 = ind[0];
                    y12 = ind[1];
                    y13 = ind[2];
                    y21 = ind[3];
                    y22 = ind[4];
                    x11 = leader[0];
                    x12 = leader[1];
                    x13 = leader[2];
                    x21 = leader[3];
                    x22 = leader[4];
                    
                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
                          (y11*y11) + (y12*y12) + (y13*y13) +
                          ((x21 - tan(y21))*(x21 - tan(y21))) + 
                            ((x22 - tan(y22))*(x22 - tan(y22)));
                    
                }
                ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 1002){
                double x11, x12, x13, x21, x22;
                double y11, y12, y13, y21, y22;
		double fit = 0, rest = 0.0;
                //x1i, y1i \in [-5, 10]
                //x21 \in [-5, 1]
                //y2i \in (0, e]  e = numero de Euler?

		if (nivel == 1){
                    x11 = ind[0];
                    x12 = ind[1];
                    x13 = ind[2];
                    x21 = ind[3];
                    x22 = ind[4];
                    y11 = follower[0];
                    y12 = follower[1];
                    y13 = follower[2];
                    y21 = follower[3];
                    y22 = follower[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) -
                          ( (y11*y11) + (y12*y12) + (y13*y13) ) +
                          (x21*x21) + (x22*x22) -
                            ( ((x21 - log(y21))*(x21 - log(y21))) +
                            ((x22 - log(y22))*(x22 - log(y22))) );
                    //verificar se é log ou log10.

                } else if (nivel == 2){
                    y11 = ind[0];
                    y12 = ind[1];
                    y13 = ind[2];
                    y21 = ind[3];
                    y22 = ind[4];
                    x11 = leader[0];
                    x12 = leader[1];
                    x13 = leader[2];
                    x21 = leader[3];
                    x22 = leader[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
                          (y11*y11) + (y12*y12) + (y13*y13) +
                            ((x21 - log(y21))*(x21 - log(y21))) +
                            ((x22 - log(y22))*(x22 - log(y22)));
                    //verificar se é log ou log10.

                }
                ind[d] = fit;
		ind[d + 1] = rest;


        } else if (funcao == 1003){
                double x11, x12, x13, x21, x22;
                double y11, y12, y13, y21, y22;
		double fit = 0, rest = 0.0;
                //x1i, x2i, y1i \in [-5, 10]
                //y2i \in (-pi/2, pi/2)

		if (nivel == 1){
                    x11 = ind[0];
                    x12 = ind[1];
                    x13 = ind[2];
                    x21 = ind[3];
                    x22 = ind[4];
                    y11 = follower[0];
                    y12 = follower[1];
                    y13 = follower[2];
                    y21 = follower[3];
                    y22 = follower[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
                          (y11*y11) + (y12*y12) + (y13*y13) +
                          (x21*x21) + (x22*x22) +
                            (((x21*x21) - tan(y21))*((x21*x21) - tan(y21))) +
                            (((x22*x22) - tan(y22))*((x22*x22) - tan(y22)));

                } else if (nivel == 2){
                    y11 = ind[0];
                    y12 = ind[1];
                    y13 = ind[2];
                    y21 = ind[3];
                    y22 = ind[4];
                    x11 = leader[0];
                    x12 = leader[1];
                    x13 = leader[2];
                    x21 = leader[3];
                    x22 = leader[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
                          3 + ((y11*y11) - cos( 2*M_PI*y11 )) + ((y12*y12) - cos( 2*M_PI*y12 )) +
                            ((y13*y13) - cos( 2*M_PI*y13 )) +
                          (((x21*x21) - tan(y21))*((x21*x21) - tan(y21))) +
                            (((x22*x22) - tan(y22))*((x22*x22) - tan(y22)));

                }
                ind[d] = fit;
		ind[d + 1] = rest;


        } else if (funcao == 1004){
                double x11, x12, x13, x21, x22;
                double y11, y12, y13, y21, y22;
		double fit = 0, rest = 0.0;
                //x1i, y1i \in [-5, 10]
                //x2i \in [-1, 1]
                //y2i \in [0,e]

		if (nivel == 1){
                    x11 = ind[0];
                    x12 = ind[1];
                    x13 = ind[2];
                    x21 = ind[3];
                    x22 = ind[4];
                    y11 = follower[0];
                    y12 = follower[1];
                    y13 = follower[2];
                    y21 = follower[3];
                    y22 = follower[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) -
                          (y11*y11) - (y12*y12) - (y13*y13) +
                          (x21*x21) + (x22*x22) -
                            ((fabs(x21) - log(1+y21))*(fabs(x21) - log(1+y21))) -
                            ((fabs(x22) - log(1+y22))*(fabs(x22) - log(1+y22)));
                    //verificar se é log ou log10.


                } else if (nivel == 2){
                    y11 = ind[0];
                    y12 = ind[1];
                    y13 = ind[2];
                    y21 = ind[3];
                    y22 = ind[4];
                    x11 = leader[0];
                    x12 = leader[1];
                    x13 = leader[2];
                    x21 = leader[3];
                    x22 = leader[4];

                     fit = (x11*x11) + (x12*x12) + (x13*x13) +
                           3 + ((y11*y11) - cos(2*M_PI*y11)) + ((y12*y12) - cos(2*M_PI*y12)) + 
                               ((y13*y13) - cos(2*M_PI*y13)) +
                           (fabs(x21) - log(1+y21))*(fabs(x21) - log(1+y21)) +
                             (fabs(x22) - log(1+y22))*(fabs(x22) - log(1+y22));

                }
                ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 1005){
                double x11, x12, x13, x21, x22;
                double y11, y12, y13, y21, y22;
		double fit = 0, rest = 0.0;
                //x, y \in [-5, 10]

		if (nivel == 1){
                    x11 = ind[0];
                    x12 = ind[1];
                    x13 = ind[2];
                    x21 = ind[3];
                    x22 = ind[4];
                    y11 = follower[0];
                    y12 = follower[1];
                    y13 = follower[2];
                    y21 = follower[3];
                    y22 = follower[4];

//                    fit = (x11*x11) + (x12*x12) + (x13*x13) - (
//                          ( (y12-(y11*y11)) + ((y11-1)*(y11-1)) ) +
//                          ( (y13-(y12*y12)) + ((y12-1)*(y12-1)) )   ) +
//                            (x21*x21) + (x22*x22) - (
//                            (fabs(x21)-(y21*y21))*(fabs(x21)-(y21*y21)) +
//                            (fabs(x22)-(y22*y22))*(fabs(x22)-(y22*y22)) );
//
                    // Com a funcao de Rosenbrock em F2.
                    fit = (x11*x11) + (x12*x12) + (x13*x13) -
                          ( (1-y11)*(1-y11) + (y12-(y11*y11))*(y12-(y11*y11)) ) -
                            ( (1-y12)*(1-y12) + (y13-(y12*y12))*(y13-(y12*y12)) ) +
                          (x21*x21) + (x22*x22) -
                          (fabs(x21)-(y21*y21))*(fabs(x21)-(y21*y21)) -
                            (fabs(x22)-(y22*y22))*(fabs(x22)-(y22*y22)) ;

                } else if (nivel == 2){
                    y11 = ind[0];
                    y12 = ind[1];
                    y13 = ind[2];
                    y21 = ind[3];
                    y22 = ind[4];
                    x11 = leader[0];
                    x12 = leader[1];
                    x13 = leader[2];
                    x21 = leader[3];
                    x22 = leader[4];

//                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
//                          ( (y12-(y11*y11)) + ((y11-1)*(y11-1)) ) +
//                          ( (y13-(y12*y12)) + ((y12-1)*(y12-1))   ) +
//                          (fabs(x21)-(y21*y21))*(fabs(x21)-(y21*y21)) +
//                            (fabs(x22)-(y22*y22))*(fabs(x22)-(y22*y22));

                   //  Com a funcao de Rosenbrock em f2.
                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
                          ( (1-y11)*(1-y11) + (y12-(y11*y11))*(y12-(y11*y11)) ) +
                            ( (1-y12)*(1-y12) + (y13-(y12*y12))*(y13-(y12*y12)) ) +
                          (fabs(x21)-(y21*y21))*(fabs(x21)-(y21*y21)) +
                            (fabs(x22)-(y22*y22))*(fabs(x22)-(y22*y22));

                   


//
//			cout << " X: " << x11 << " " << x12 << " " << x13 << " " << x12 << " " << x22 << " ";
//			cout << " Y: " << y11 << " " << y12 << " " << y13 << " " << y12 << " " << y22 << " ";
//			cout << " fit : " << fit << endl;

                }
                ind[d] = fit;
		ind[d + 1] = rest;


        } else if (funcao == 1006){
                double x11, x12, x13, x21, x22;
                double y11, y12, y13, y21, y22;
		double fit = 0, rest = 0.0;
                //x, y \in [-5, 10]

		if (nivel == 1){
                    x11 = ind[0];
                    x12 = ind[1];
                    x13 = ind[2];
                    x21 = ind[3];
                    x22 = ind[4];
                    y11 = follower[0];
                    y12 = follower[1];
                    y13 = follower[2];
                    y21 = follower[3];
                    y22 = follower[4];

                    fit = (x11*x11) + (x12*x12) + (x13*x13) -
                          (y11*y11) + (y12*y12)+ (y13*y13) +
                          (x21*x21) + (x22*x22) -
                            ((x21 - y21)*(x21 - y21)) -
                            ((x22 - y22)*(x22 - y22));

                } else if (nivel == 2){
                    y11 = ind[0];
                    y12 = ind[1];
                    y13 = ind[2];
                    y21 = ind[3];
                    y22 = ind[4];
                    x11 = leader[0];
                    x12 = leader[1];
                    x13 = leader[2];
                    x21 = leader[3];
                    x22 = leader[4];

//                    fit = (x11*x11) + (x12*x12) + (x13*x13) -
//                          (y11*y11) + ((y13 - y12)*(y13 - y12)) +
//                          (x21-y21)*(x21-y21) + (x22-y22)*(x22-y22);
                    fit = (x11*x11) + (x12*x12) + (x13*x13) +
			  (y11*y11) + (y12*y12) + (y13*y13) +
//                          (y11*y11) + ((y13 - y12)*(y13 - y12)) +
                          (x21-y21)*(x21-y21) + (x22-y22)*(x22-y22);

                }
                ind[d] = fit;
		ind[d + 1] = rest;

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
        } else if (funcao == 1){
		//Shimizu,81(Ex.1) - (10,10) => f1=100, f2=0
		double x, y;
		double fit = 0, rest = 0;
		double v;
		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = x*x + (y - 10)*(y - 10);
			
			//LEADER
			rest = 0.0;
			v = -x + y;
			if (v > EPS){
				rest += v;
			}
		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = (x + 2*y - 30)*(x + 2*y - 30);

			//FOLLOWER
			v = x + y -20;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 2){
		//Shimizu,81(Ex.2) - (20,5,10,5) => f1=225, f2=100
		double x1, x2, y1, y2;
		double fit = 0, rest = 0;
		double v;
		if (nivel == 1){
			x1 = ind[0];
                        x2 = ind[1];
			y1 = follower[0];
                        y2 = follower[1];

			fit = (x1-30)*(x1-30)+(x2-20)*(x2-20)-20*y1+20*y2;
			rest = 0;
			//LEADER
			rest = 0.0;
			v = -(x1 + 2*x2 - 30);
			if (v > EPS){
				rest += v;
			}
			v = x1+x2-25;
			if (v > EPS){
				rest += v;
			}
			v = x2-15;
			if (v > EPS){
				rest += v;
			}
		} else if (nivel == 2){
			y1 = ind[0];
                        y2 = ind[1];
			x1 = leader[0];
                        x2 = leader[1];

			fit = (x1-y1)*(x1-y1) + (x2-y2)*(x2-y2);
                        rest = 0.0;
			v = y1 - 10;
			if (v > EPS){
				rest += v;
			}
			v = y2 - 10;
			if (v > EPS){
				rest += v;
			}


		}
		ind[d] = fit;
		ind[d + 1] = rest;

	} else if (funcao == 3){
		//Candler,82 - (0, 0.9 | 0, 0.6, 0.4) f1=29.2, f2=-3.2
		double x1, x2, y1, y2, y3;
		double fit = 0, rest = 0;
		if (nivel == 1){
			x1 = ind[0];
			x2 = ind[1];
			y1 = follower[0];
			y2 = follower[1];
			y3 = follower[2];

			fit = (8*x1 + 4*x2 - 4*y1 + 40*y2 + 4*y3);
			rest = 0;
		} else if (nivel == 2){
			y1 = ind[0];
			y2 = ind[1];
			y3 = ind[2];
			x1 = leader[0];
			x2 = leader[1];

			fit = (-x1 - 2*x2 - y1 - y2 - 2*y3);

			rest = 0.0;
			double v = -y1 + y2 + y3 - 1;
			if (v > EPS){
				rest += v;
			}
			v = 2*x1 - y1 + 2*y2 - 0.5*y3 - 1;
			if (v > EPS){
				rest += v;
			}
			v = 2*x2 + 2*y1 - y2 - 0.5*y3 - 1;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 4){
		//Bard,82(Ex.2) - (1,0,0.5,1) f1=1.75, f2=0
		double x1,x2, y1, y2;
		double fit = 0, rest = 0;
		if (nivel == 1){
			x1 = ind[0];
			x2 = ind[1];
			y1 = follower[0];
			y2 = follower[1];

			fit = (2*x1 - x2 - 0.5*y1);
			rest = 0;
		} else if (nivel == 2){
			y1 = ind[0];
			y2 = ind[1];
			x1 = leader[0];
			x2 = leader[1];

			fit = (-x1 -x2 + 4*y1 - y2);

			rest = 0.0;
			double v = -(2*x1 - y1 + y2 - 2.5);
			if (v > EPS){
				rest += v;
			}
			v = -(-x1 + 3*x2 - y2 + 2);
			if (v > EPS){
				rest += v;
			}
			v = -(-x1 - x2 + 2);
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 5){
		//Aiyoshi,84(Ex,2) - (25,30,5,10) f1=5, f2=0
		double x1, x2, y1, y2;
		double fit = 0, rest = 0;
                double v;
		if (nivel == 1){
			x1 = ind[0];
                        x2 = ind[1];
			y1 = follower[0];
                        y2 = follower[1];

			fit = 2*x1 +2*x2 -3*y1 -3*y2 -60;
			rest = 0.0;

                        v = x1+x2+y1-2*y2-40;
			if (v > EPS){
				rest += v;
			}

		} else if (nivel == 2){
			y1 = ind[0];
                        y2 = ind[1];
			x1 = leader[0];
                        x2 = leader[1];

			fit = (y1-x1+20)*(y1-x1+20)+(y2-x2+20)*(y2-x2+20);

			rest = 0.0;
			v = 2*y1-x1+10;
			if (v > EPS){
				rest += v;
			}
			v = 2*y2-x2+10;
			if (v > EPS){
				rest += v;
			}
		}
		// x1,x2 em [0,50]
                v = x1-50;
		if (v > EPS){
			rest += v;
		}
                v = x2-50;
		if (v > EPS){
			rest += v;
		}
                //y1,y2 em [-10,20]
                v = y1-20;
		if (v > EPS){
			rest += v;
		}
                v = y2-20;
		if (v > EPS){
			rest += v;
		}
                v = -(y1 + 10);
		if (v > EPS){
			rest += v;
		}
                v = -(y2 + 10);
		if (v > EPS){
			rest += v;
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 6){
		//BBard,88(Ex.1) - (1.778,2.333) f1=42.5, f2=-4.445
		double x, y;
		double fit = 0, rest = 0;
                double v;
		if (nivel == 1){
			x = ind[0];
			y = follower[0];

			fit = (x-5)*(x-5) + (2*y+1)*(2*y+1);
			rest = 0;

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = (y-1)*(y-1) -1.5*x*y;

			rest = 0.0;
			v = -(3*x-y-3);
			if (v > EPS){
				rest += v;
			}
			v = -(-x+0.5*y+4);
			if (v > EPS){
				rest += v;
			}
			v = -(-x-y+7);
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 7){
		//BBard,88(Ex.3) - (0,2,4,1) f1=-21, f2=11
		double x1, x2, y1, y2;
		double fit = 0, rest = 0;
                double v;
		if (nivel == 1){
			x1 = ind[0];
                        x2 = ind[1];
			y1 = follower[0];
                        y2 = follower[1];

			fit = - x1*x1 -3*x2 -4*y1 +y2*y2;

			rest = 0.0;
                        v = x1*x1 + 2*x2 -4;
			if (v > EPS){
				rest += v;
			}

		} else if (nivel == 2){
			y1 = ind[0];
                        y2 = ind[1];
			x1 = leader[0];
                        x2 = leader[1];

			fit = 2*x1*x1 + y1*y1 - 5*y2;

			rest = 0.0;
			v = -(x1*x1 -2*x1 +x2*x2 -2*y1 +y2 +3);
			if (v > EPS){
				rest += v;
			}
			v = -(x2 +3*y1 -4*y2 -4);
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;
                
	} else if (funcao == 8){
		//Anandalingam,90 - (16,11) f1=49, f2=-17
		double x, y;
		double fit = 0, rest = 0;
		if (nivel == 1){
			x = ind[0];
			y = follower[0];

			fit = (x + 3*y);
			rest = 0;
		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = (x - 3*y);

			rest = 0.0;
			double v = -x -2*y + 10;
			if (v > EPS){
				rest += v;
			}
			v = x - 2*y - 6;
			if (v > EPS){
				rest += v;
			}
			v = 2*x - y - 21;
			if (v > EPS){
				rest += v;
			}
			v = x + 2*y - 38;
			if (v > EPS){
				rest += v;
			}
			v = -x + 2*y - 18;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 9){
		//Savard,94 - (1.889,0.889) f1=-1.21, f2=7.61
		double x, y1, y2;
		double fit = 0, rest = 0;
		if (nivel == 1){
			x = ind[0];
			y1 = follower[0];
			y2 = follower[1];

			fit = (x - 1)*(x - 1) + 2*y1*y1 - 2*x;
			rest = 0;
		} else if (nivel == 2){
			y1 = ind[0];
			y2 = ind[1];
			x = leader[0];

			fit = (2*y1 - 4)*(2*y1 - 4) + (2*y2 - 1)*(2*y2 - 1) + x*y1;

			rest = 0.0;
			double v = 4*x + 5*y1 + 4*y2 - 12;
			if (v > EPS){
				rest += v;
			}
			v = -4*x - 5*y1 + 4*y2 + 4;
			if (v > EPS){
				rest += v;
			}
			v = 4*x - 4*y1 + 5*y2 - 4;
			if (v > EPS){
				rest += v;
			}
			v = -4*x + 4*y1 + 5*y2 - 4;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 10){
		//Falk,95 - (0.5,.0.5,0.5,0.5) f1=-1, f2=0
		double x1, x2, y1, y2;
		double fit = 0, rest = 0;
                double v;
		if (nivel == 1){
			x1 = ind[0];
                        x2 = ind[1];
			y1 = follower[0];
			y2 = follower[1];

			fit = x1*x1 -2*x1 +x2*x2 -2*x2 + y1*y1 + y2*y2;

			rest = 0.0;

		} else if (nivel == 2){
			y1 = ind[0];
			y2 = ind[1];
			x1 = leader[0];
                        x2 = leader[1];

			fit = (y1-x1)*(y1-x1)+(y2-x2)*(y2-x2);

			rest = 0.0;
			v = 0.5-y1;
			if (v > EPS){
				rest += v;
			}
			v = 0.5-y2;
			if (v > EPS){
				rest += v;
			}
			v = y1-1.5;
			if (v > EPS){
				rest += v;
			}
			v = y2-1.5;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 11){
		//Shimizu,95 - (11.25,5) f1=2250, f2=197.75
		double x, y;
		double fit = 0, rest = 0;
                double v;
		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = 16*x*x + 9*y*y;

			rest = 0;
                        v = -4*x +y;
			if (v > EPS){
				rest += v;
			}

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = (x+y-20)*(x+y-20)*(x+y-20)*(x+y-20);

			rest = 0.0;
			v = 4*x +y -50;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 12){
		//Bard,98(pg.197) - (4,4) f1=-12, f2=4
		double x, y;
		double fit = 0, rest = 0;
                double v;

		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = (x - 4*y);
			rest = 0.0;

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = y;

			rest = 0.0;
			v = -x -y + 3;
			if (v > EPS){
				rest += v;
			}
			v = -2*x + y;
			if (v > EPS){
				rest += v;
			}
			v = 2*x + y -12;
			if (v > EPS){
				rest += v;
			}
			v = -(-3*x + 2*y + 4);
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 13){
		//Bard,98(pg.263) - (0.889,2.222) f1=3.111, f2=-6.662
		double x, y;
		double fit = 0, rest = 0;
                double v;

		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = x+y;

			rest = 0.0;

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = -5*x -y ;

			rest = 0.0;
			v = -x -y/2 +2;
			if (v > EPS){
				rest += v;
			}
			v = -x/4 +y -2;
			if (v > EPS){
				rest += v;
			}
			v = x +y/2 -8;
			if (v > EPS){
				rest += v;
			}
			v = x -2*y -4;
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 14){
		//Bard,98(pg.306) - (10.02,0.82) f1=81.33, f2=-0.4838
		double x, y;
		double fit = 0, rest = 0;
		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = ((x - 1)*(x - 1) + (y -1)*(y - 1));

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = 0.5*y*y + 500*y - 50*x*y;
		}
		rest = 0.0;
		ind[d] = fit;
		ind[d + 1] = rest;

	} else if (funcao == 15){
		//Oduguwa,02(Ex.1) - (?,?) f1=1000, f2=1
		double x, y1, y2;
		double fit = 0, rest = 0;
		if (nivel == 1){
			x = ind[0];
			y1 = follower[0];
			y2 = follower[1];

			fit = (100*x + 1000*y1);
			rest = 0;
		} else if (nivel == 2){
			y1 = ind[0];
			y2 = ind[1];
			x = leader[0];

			fit = (y1 + y2);

			rest = 0.0;
			double v = x + y1 - y2 -1;
			if (v > EPS){
				rest += v;
			}
			v = y1 + y2 - 1;
			if (v > EPS){
				rest += v;
			}
		}
		double v;
		v = x - 1;
		if (v > EPS){
			rest += v;
		}
		v = y1 - 1;
		if (v > EPS){
			rest += v;
		}
		v = y2 - 1;
		if (v > EPS){
			rest += v;
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 16){
		//Rajesh,03(Ex.2) - (1,3) f1=5, f2=4
                double x, y;
		double fit = 0, rest = 0;
                double v;

		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = (x-3)*(x-3) + (y-2)*(y-2);

			rest = 0.0;
                        // x em [0,8]
                        v = x - 8;
			if (v > EPS){
				rest += v;
			}

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = (y-5)*(y-5);

			rest = 0.0;
			v = -(2*x-y +1);
			if (v > EPS){
				rest += v;
			}
			v = -(-x+2*y-2);
			if (v > EPS){
				rest += v;
			}
			v = -(-x-2*y+14);
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 17){
		//Rajesh,03(Ex.3) - (3,5) f1=9, f2=0
                double x, y;
		double fit = 0, rest = 0;
                double v;

		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = (x-3)*(x-3) + (y-2)*(y-2);

			rest = 0.0;
                        v = -(2*x-y +1);
			if (v > EPS){
				rest += v;
			}
			v = -(-x+2*y-2);
			if (v > EPS){
				rest += v;
			}
			v = -(-x-2*y+14);
			if (v > EPS){
				rest += v;
			}
                        // x em [0,8]
                        v = x - 8;
			if (v > EPS){
				rest += v;
			}

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = (y-5)*(y-5);

			rest = 0.0;

		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } else if (funcao == 18){
		//Rajesh,03(Ex.4) - (17.4545,10.90909) f1=85.0909, f2=?
                double x, y;
		double fit = 0, rest = 0;
                double v;

		if (nivel == 1){
			x = ind[0];;
			y = follower[0];

			fit = -2*x+11*y;

			rest = 0.0;

		} else if (nivel == 2){
			y = ind[0];
			x = leader[0];

			fit = -x-3*y;

			rest = 0.0;
                        v = x -2*y -4;
			if (v > EPS){
				rest += v;
			}
                        v = 2*x -y -24;
			if (v > EPS){
				rest += v;
			}
                        v = 3*x +4*y -96;
			if (v > EPS){
				rest += v;
			}
                        v = x +7*y -126;
			if (v > EPS){
				rest += v;
			}
                        v = -4*x +5*y -65;
			if (v > EPS){
				rest += v;
			}
                        v = -(x +4*y -8);
			if (v > EPS){
				rest += v;
			}
		}
		ind[d] = fit;
		ind[d + 1] = rest;

        } 
	///// Novos exemplos para a apresentação Calvete2004
	else if (funcao == 19){
		double x1, x2, y3, y4, y5, y6, y7, y8;
		double fit = 0, rest = 0;
                double v;

		if (nivel == 1){
			x1 = ind[0];
			x2 = ind[1];
			y3 = follower[0];
			y4 = follower[1];
			y5 = follower[2];
			y6 = follower[3];
			y7 = follower[4];
			y8 = follower[5];

			fit = (1 + x1 - x2 + 2*y4)/(8 - x1 - 2*y3 + y4 + 5*y5);

			rest = 0.0;

		} else if (nivel == 2){
			y3 = ind[0];
			y4 = ind[1];
			y5 = ind[2];
			y6 = ind[3];
			y7 = ind[4];
			y8 = ind[5];
			x1 = leader[0];
			x2 = leader[1];

			fit = (1 + x1 + x2 + 2*y3 - y4 + y5)/(6 + 2*x1 + y3 + y4 - 3*y5);

			rest = 0.0;
                        v = -y3 + y4 + y5 + y6 - 1;
			if (fabs(v) > 0.000000001){
				rest += fabs(v);
			}
			
			//rest += fabs(v - EPS);

                        v = 2*x1 - y3 + 2*y4 - 0.5*y5 + y7 - 1;
			if (fabs(v) > 0.000000001){
				rest += fabs(v);;
			}
			//rest += fabs(v - EPS);

                        v = 2*x2 + 2*y3 - y4 - 0.5*y5 + y8 - 1;
			if (fabs(v) > 0.000000001){
				rest += fabs(v);
			}
			//rest += fabs(v - EPS);
		}
		ind[d] = fit;
		ind[d + 1] = rest;
	}



}

double getUpper(int nivel, int funcao, int indice){
	if (funcao == 1001){
		if (nivel == 1){
			return 10;
		} else {
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return M_PI/2 - 0.000000000001;
				case 4: return M_PI/2 - 0.000000000001;
			}
		}
	} else if (funcao == 1002){
		if (nivel == 1){
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return 1;
				case 4: return 1;
			}
		} else {
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return M_E;
				case 4: return M_E;
			}
		}
	} else if (funcao == 1003){
		if (nivel == 1){
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return 10;
				case 4: return 10;
			}
		} else {
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;	
				case 3: return M_PI/2 - 0.000000000001;
				case 4: return M_PI/2 - 0.000000000001;
			}
		}
	} else if (funcao == 1004){
		if (nivel == 1){
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return 1;
				case 4: return 1;
			}
		} else {
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return M_E;
				case 4: return M_E;
			}
		}
	} else if (funcao == 1005 || funcao == 1006){
		if (nivel == 1){
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return 10;
				case 4: return 10;
			}
		} else {
			switch(indice){
				case 0: return 10;
				case 1: return 10;
				case 2: return 10;
				case 3: return 10;
				case 4: return 10;
			}
		}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

	} else if (funcao == 1){ // x < 15; y < 20
                switch(indice){
                    case 0: return 15;
                    case 1: return 20;
                }

        } else if (funcao == 2){ // x1 > 0; x2 < 15; y1,y2 < 20
                switch(indice){
                    case 0: return 100;
                    case 1: return 15;
                    case 2: return 20;
                    case 3: return 20;
                }

	} else if (funcao == 5){ // x1,x2 < 50; y1,y2 < 20
                switch(indice){
                    case 0: return 50;
                    case 1: return 50;
                    case 2: return 20;
                    case 3: return 20;
                    case 4: return 20;
                }

        } else if (funcao == 10){ // x1,x2 > 0; y1,y2 < 1.5
                switch(indice){
                    case 0: return 100;
                    case 1: return 100;
                    case 2: return 1.5;
                    case 3: return 1.5;
                }

        } else if (funcao == 15){ // x < 1; y1,y2 < 1
                switch(indice){
                    case 0: return 1;
                    case 1: return 1;
                    case 2: return 1;
                }

        } else if (funcao == 16 || funcao == 17){ // x < 8; y > 0
                switch(indice){
                    case 0: return 8;
                    case 1: return 100;
                }

	} else{
		return 100;
	}
}

double getLower(int nivel, int funcao, int indice){
	
	if (funcao == 1001){        
		if (nivel == 1){
			return -5;
		} else {
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -(M_PI/2) + 0.000000000001;
				case 4: return -(M_PI/2) + 0.000000000001;
			}
		}
	} else if (funcao == 1002){
		if (nivel == 1){
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -5;
				case 4: return -5;
			}
		} else {
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return 0.000000000001;
				case 4: return 0.000000000001;
			}
		}
	} else if (funcao == 1003){
		if (nivel == 1){
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -5;
				case 4: return -5;
			}
		} else {
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -(M_PI/2) + 0.000000000001;
				case 4: return -(M_PI/2) + 0.000000000001;
			}
		}
	} else if (funcao == 1004){
		if (nivel == 1){
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -1;
				case 4: return -1;
			}
		} else {
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return 0;
				case 4: return 0;
			}
		}
	} else if (funcao == 1005 || funcao == 1006){
		if (nivel == 1){
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -5;
				case 4: return -5;
			}
		} else {
			switch(indice){
				case 0: return -5;
				case 1: return -5;
				case 2: return -5;
				case 3: return -5;
				case 4: return -5;
			}
		}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------

        } else if (funcao == 1){ // x > 0; y > 0
                switch(indice){
                    case 0: return 0;
                    case 1: return 0;
                }

        } else if (funcao == 2){ // x1,x2 > 0; y1,y2 > 0
                switch(indice){
                    case 0: return 0;
                    case 1: return 0;
                    case 2: return 0;
                    case 3: return 0;
                }

	} else if (funcao == 5){ // x1,x2 < 50; y1,y2 < 20
                switch(indice){
                    case 0: return 0;
                    case 1: return 0;
                    case 2: return -10;
                    case 3: return -10;
                    case 4: return -10;
                }

        } else if (funcao == 10){ // x1,x2 > 0; y1,y2 > 0.5
                switch(indice){
                    case 0: return 0;
                    case 1: return 0;
                    case 2: return 0.5;
                    case 3: return 0.5;
                }

        } else if (funcao == 15){ // x > 0; y1,y2 > 0
                switch(indice){
                    case 0: return 0;
                    case 1: return 0;
                    case 2: return 0;
                }

        } else if (funcao == 16 || funcao == 17){ // x < 8; y > 0
                switch(indice){
                    case 0: return 0;
                    case 1: return 0;
                }
        } else {
               return 0;
        }
}
