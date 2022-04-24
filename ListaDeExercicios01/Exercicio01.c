//Aluno 1 : Gabriel Leite Cardoso - RA: 0030482121018
//Aluno 2: Gustavo Rocha Maia - RA: 0030482121034
#include <stdio.h>
int main(void)
{
    int vDia, vMes, vAno, vDiaSemana, M, S, D, A;
    vDia = 1;
    vMes = 1;
    vAno = 1;

    while(vDia > 0 && vMes > 0 && vAno > 0)
    {
    	printf("\nInforme uma dia: ");
    	scanf("\n %d", &vDia);
    	printf("Informe uma mes: ");
    	scanf("\n %d", &vMes);
    	printf("Informe uma ano: ");
    	scanf("\n %d", &vAno);

    	M = vMes;
    	D = vDia;
    	A = vAno;
    	S = vAno / 100;

    	if (M < 3){
    	    M = M + 10;
    	    A = vAno - 1;
    	}
    	else
    	    M = vMes - 2;
        A = A % 100;

    	vDiaSemana = (((int)(2.6 * M - 0.1)) + D + A + (A/4) + (S/4) - 2 * S)%7;
    	if (vDiaSemana < 0)
    	    vDiaSemana = vDiaSemana + 7;

        if (vDia == 0 && vMes == 0 && vAno == 0)
        {
            printf("Programa finalizado.");
            break;
        }

    	if (vDiaSemana == 0)
    	    printf("%d/%d/%d: Domingo\n", vDia, vMes, vAno);
    	else
    	    if (vDiaSemana == 1)
    	        printf("%d/%d/%d: Segunda-feira\n", vDia, vMes, vAno);
    	        else
    	            if (vDiaSemana == 2)
    	                printf("%d/%d/%d: Terça-feira\n", vDia, vMes, vAno);
    	                else
                    	    if (vDiaSemana == 3)
                    	        printf("%d/%d/%d: Quarta-feira\n", vDia, vMes, vAno);
                    	        else
                            	    if (vDiaSemana == 4)
                            	        printf("%d/%d/%d: Quinta-feira\n", vDia, vMes, vAno);
                            	        else
                                    	    if (vDiaSemana == 5)
                                    	        printf("%d/%d/%d: Sexta-Feira\n", vDia, vMes, vAno);
                                    	        else
                                            	    if (vDiaSemana == 6)
                                            	        printf("%d/%d/%d: Sabado\n", vDia, vMes, vAno);
    }
    return 0;
}
