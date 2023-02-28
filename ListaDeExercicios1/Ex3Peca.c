#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PecaMes[3][3], GranaPeca[3][2];
    int i=0, j=0, peca=1;
    int ljan, lfev, lmar, cjan, cfev, cmar; 
    
    for(i = 0; i<1; i++)
    {
        for(j = 0;j<3; j++)
        {
            printf("Insira a P%d do mes de Janeiro: ", peca);
            peca++;
            scanf("%d", &PecaMes[i][j]);
        }
    }
    
    j=0;
    i = 1;
    peca=1;
    
    for(i = 1; i == 1 ; i++)
    {
        for(j = 0;j<3;j++)
        {
            printf("Insira a P%d do mes de Fevereiro: ", peca);
            peca++;
            scanf("%d", &PecaMes[i][j]);
        }
    }
    
    j=0;
    i = 2;
    peca=1;
    
    for(i = 2; i == 2 ; i++)
    {
        for(j = 0;j<3; j++)
        {
            printf("Insira a P%d do mes de Marco: ", peca);
            peca++;
            scanf("%d", &PecaMes[i][j]);
        }
    }
    peca = 1;
    
    for(i = 0 ; i<3 ; i++)
    {
        for(j=0 ;j<1; j++)
        {
            printf("Insira o custo e o lucro da P%d:\nCusto: ", peca);
            scanf("%d", &GranaPeca[i][j]);
            printf("Lucro: ");
            scanf("%d", &GranaPeca[i][1]);
            peca++;
        }
    }
    
    cjan = (PecaMes[0][0] * GranaPeca[0][0]) + (PecaMes[0][1] * GranaPeca[1][0]) + (PecaMes[0][2] * GranaPeca[2][0]);
    ljan = (PecaMes[0][0] * GranaPeca[0][1]) + (PecaMes[0][1] * GranaPeca[1][1]) + (PecaMes[0][2] * GranaPeca[2][1]);
                                        
    cfev = (PecaMes[1][0] * GranaPeca[0][0]) + (PecaMes[1][1] * GranaPeca[1][0]) + (PecaMes[1][2] * GranaPeca[2][0]);
    lfev = (PecaMes[1][0] * GranaPeca[0][1]) + (PecaMes[1][1] * GranaPeca[1][1]) + (PecaMes[1][2] * GranaPeca[2][1]);
                                        
    cmar = (PecaMes[2][0] * GranaPeca[0][0]) + (PecaMes[2][1] * GranaPeca[1][0]) + (PecaMes[2][2] * GranaPeca[2][0]);
    lmar = (PecaMes[2][0] * GranaPeca[0][1]) + (PecaMes[2][1] * GranaPeca[1][1]) + (PecaMes[2][2] * GranaPeca[2][1]);

    printf("\n==========================\n");
    printf(" Jan Custo: %d  Lucro: %d\n Fev Custo: %d  Lucro: %d\n Mar Custo: %d  Lucro: %d", 
            cjan,ljan, cfev,
            lfev, cmar,lmar);
    printf("\n==========================\n");

    return 0;
}