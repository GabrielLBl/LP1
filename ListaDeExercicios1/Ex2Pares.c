#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, resultado;
    
    printf("insira o X1, Y1 e X2, Y2:\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    while(1)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;
        
        resultado = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
        
        printf("%.6f\n", resultado);
        
        printf("insira o X1, Y1 e X2, Y2:\n");
        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    }

    return 0;
}