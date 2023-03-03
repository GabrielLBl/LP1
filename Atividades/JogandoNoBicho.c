#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    long long unsigned N=0, M=0;
    double V=0, Premio;
    int cont, auxiliar = 1, ult2N, ult2M, grupos[24];
    
    scanf("%lf %llu %llu", &V, &N, &M);
    
    for (cont = 0; cont <= 24; cont = cont + 1)
    {
        grupos[cont] = auxiliar;
        auxiliar = auxiliar + 4;
    }
    
    do
    {
        Premio = 0;
        ult2N = N % 100;
        ult2M = M % 100;
        
        if(N%10000 == M%10000)
            Premio = V * 3000;
        else if(N%1000 == M%1000)
            Premio = V * 500;
        else if(N%100 == M%100)
            Premio = V * 50;
        else if ((ult2N == 00) && (ult2M == 00))
            Premio = V *16;
        else
        {
            for (cont = 0; cont <= 24; cont = cont + 1)
            {
                if ((ult2N >= grupos[cont]) && (ult2N < grupos[cont+1]))
                {
                    if (ult2M >= grupos[cont] && (ult2M < grupos[cont+1]))
                        Premio = V *16;
                    else if (ult2N >= 97 && ult2M >= 97 )
                        Premio = V *16;
                }
            }
        }

        printf("%.2lf\n", Premio);
        scanf("%lf %llu %llu", &V, &N, &M);
        
    } while ((V!=0) || (N!=0) || (M!=0));

    return 0;
}