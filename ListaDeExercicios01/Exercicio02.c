//Aluno 1 : Gabriel Leite Cardoso - RA: 0030482121018
//Aluno 2: Gustavo Rocha Maia - RA: 0030482121034
#include <stdio.h>
int main(void)

{ int PecaMes[3][3], GranaPeca[3][2], GranaMes[3][2], linha , coluna;

    for ( linha=0; linha<1; linha++ ) 
        for( coluna=0; coluna<1; coluna++ ) 
        {
            printf ("Digite os valores de peças do tipo P1,P2 e P3 em Janeiro respectivamente: ");
            scanf ("%d%d%d", &PecaMes[0][0], &PecaMes[0][1], &PecaMes[0][2]);
        }
        for ( linha=0; linha<1; linha++ ) 
            for( coluna=0; coluna<1; coluna++ ) 
            {
                printf ("\nDigite os valores de peças do tipo P1, P2 e P3 em Fevereiro respectivamente: ");
                scanf ("%d%d%d", &PecaMes[1][0], &PecaMes[1][1], &PecaMes[1][2]);
            }
            for ( linha=0; linha<1; linha++ ) 
                for ( coluna=0; coluna<1; coluna++ ) 
                {
                    printf ("\nDigite os valores de peças do tipo P1, P2 e P3 em Março respectivamente: ");
                    scanf ("%d%d%d", &PecaMes[2][0], &PecaMes[2][1], &PecaMes[2][2]);
                }
        
                for ( linha=0; linha<1; linha++ )
                        for ( coluna=0; coluna<1; coluna++ )
                        {
                          printf ("\nDigite os custos de peças do tipo P1, P2 e P3 respectivamente: ");
                          scanf ("%d%d%d", &GranaPeca[0][0], &GranaPeca[1][0], &GranaPeca[2][0] );
                        }
                        for ( linha=0; linha<1; linha++ )
                                for ( coluna=0; coluna<1; coluna++ )
                                {
                                  printf ("\nDigite os lucros de peças do tipo P1, P2 e P3 respectivamente: ");
                                  scanf ("%d%d%d", &GranaPeca[0][1], &GranaPeca[1][1], &GranaPeca[2][1]);
                                }
                                GranaMes[0][0] = (PecaMes[0][0] * GranaPeca[0][0]) + (PecaMes[0][1] * GranaPeca[1][0]) + (PecaMes[0][2] * GranaPeca[2][0]);
                                GranaMes[0][1] = (PecaMes[0][0] * GranaPeca[0][1]) + (PecaMes[0][1] * GranaPeca[1][1]) + (PecaMes[0][2] * GranaPeca[2][1]);
                                        
                                GranaMes[1][0] = (PecaMes[1][0] * GranaPeca[0][0]) + (PecaMes[1][1] * GranaPeca[1][0]) + (PecaMes[1][2] * GranaPeca[2][0]);
                                GranaMes[1][1] = (PecaMes[1][0] * GranaPeca[0][1]) + (PecaMes[1][1] * GranaPeca[1][1]) + (PecaMes[1][2] * GranaPeca[2][1]);
                                        
                                GranaMes[2][0] = (PecaMes[2][0] * GranaPeca[0][0]) + (PecaMes[2][1] * GranaPeca[1][0]) + (PecaMes[2][2] * GranaPeca[2][0]);
                                GranaMes[2][1] = (PecaMes[2][0] * GranaPeca[0][1]) + (PecaMes[2][1] * GranaPeca[1][1]) + (PecaMes[2][2] * GranaPeca[2][1]);
                                printf("\nOs valores da Matriz GranaMes é: \n%d %d\n%d %d\n%d %d", GranaMes[0][0], GranaMes[0][1], GranaMes[1][0],
                                GranaMes[1][1], GranaMes[2][0], GranaMes[2][1]);
}
