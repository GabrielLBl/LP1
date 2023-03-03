#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long t, Fib[61];
    
    Fib[0] = 0;
    Fib[1] = 1;
    
    for(i = 2; i < 61; i++)
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%llu", &t);
        printf("Fib(%llu) = %llu\n", t, Fib[t]);
        
    }

    return 0;
}