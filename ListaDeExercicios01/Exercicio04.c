//Aluno 1 : Gabriel Leite Cardoso - RA: 0030482121018
//Aluno 2: Gustavo Rocha Maia - RA: 0030482121034
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char cpf[13];
    int cpfLimpo[11], i, soma, s, cpf1, cpf2, dig1, dig2;
    char CPFfinalizador[] = {'0','0','0','.','0','0','0','.','0','0','0','-','0','0'};
    do{
        i = 0;
        soma = 0;
        s = 0;
        cpf1 = 0;
        cpf2 = 0;
        dig1 = 0;
        dig2 = 0;
        
    
    printf("\nDigite seu CPF: ");
    scanf ("%s", cpf);
    
    
        for(i = 0; i < strlen(cpf); i++){
            if(cpf[i]!='.' && cpf[i]!='-')
            {
                cpfLimpo[s]=cpf[i]-48;
                s++;
            }
        }
        if((cpfLimpo[0] == cpfLimpo[1]) && (cpfLimpo[2] == cpfLimpo[3]) && (cpfLimpo[4] == cpfLimpo[5]) && (cpfLimpo[6] == cpfLimpo[7])){
            printf("\nCPFs iguais são inválidos\n");
            break;
        }
        else {
            for(i = 0; i < 9; i++)
            {
                soma += cpfLimpo[i] * (10 - i);
            }
            cpf1 = soma%11;
                if(cpf1==0 || cpf1==1)
                {
                    dig1=0;
                }
                else
                {
                    dig1=11-cpf1;
                }
                soma=0;
                    for(i = 0; i < 10; i++)
                    {
                        soma += cpfLimpo[i] * (11 - i);
                    }
                    cpf2 = soma % 11;
                
                        if(cpf2 == 0 || cpf2 == 1)
                        {
                            dig2 = 0;
                        }
                        else
                        {
                            dig2 = 11 - cpf2;
                        }
                            if (cpfLimpo[9]==dig1 && cpfLimpo[10]==dig2)
                            {
                                printf("CPF válido\n");
                            }
                            else
                            {
                                printf("CPF inválido, Esperado: %d%d, Encontrado: %d%d\n", dig1, dig2, cpfLimpo[9], cpfLimpo[10]);
                            }
            }
    } while(cpf != CPFfinalizador);
           
printf("\nPrograma finalizado!\n");
}