#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char cpf[14];
    int cpfLimp[11], i, soma, cont, cpf1, cpf2, d1, d2;
    while(1)
    {
        i = 0;
        soma = 0;
        cont = 0;
        cpf1 = 0;
        cpf2 = 0;
        d1 = 0;
        d2 = 0;
        
        
        printf("Digite seu CPF: ");
        scanf ("%s", cpf);
        
        if(strcmp(cpf, "000.000.000-00")==0)
            break;
        
        for(i = 0; i < strlen(cpf); i++)
        {
            if(cpf[i]!='.' && cpf[i]!='-')
            {
                cpfLimp[cont]=cpf[i] - 48;
                cont++;
            }
        }
        
        if((cpfLimp[0] == cpfLimp[1]) && (cpfLimp[2] == cpfLimp[3]) && (cpfLimp[4] == cpfLimp[5]) && (cpfLimp[6] == cpfLimp[7]))
            printf("\nCPFs iguais são inválidos\n");
        
        else
        {
            for(i = 0; i < 9; i++)
                soma += cpfLimp[i] * (i + 1);
                
            cpf1 = soma % 11;
            
            if(cpf1==10)
                d1=0;
            
            else
            d1 =  cpf1;
                
            soma=0;
            
            for(i = 0; i < 9; i++)
                soma += cpfLimp[i] * (11 - i);
            
            soma=soma+(d1*2);            
            cpf2 = (soma*10) % 11;
                
            if(cpf2 == 10)
                d2 = 0;
                
            else
                d2 = cpf2;
                            
            if (cpfLimp[9]==d1 && cpfLimp[10]==d2)
                printf("CPF válido\n");
                
            else
		        printf("CPF inválido, Encontrado: %d%d, Esperado: %d%d\n", cpfLimp[9], cpfLimp[10], d1, d2);
        }
    }
}