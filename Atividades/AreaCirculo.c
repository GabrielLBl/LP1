#include <stdio.h>

int main()
{
    double raio, n, area;
    
    n = 3.14159;
    
    scanf("%lf", &raio);
    
    area = (raio * raio) * n;
    
    printf("A=%.4lf\n", area);

    return 0;
}