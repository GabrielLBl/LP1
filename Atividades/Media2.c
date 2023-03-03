#include <stdio.h>

int main()
{
    double a, b, c, media;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    media = ((a * 0.2) + (b * 0.3) + (c * 0.5)); 

    printf("MEDIA = %.1lf\n", media);

    return 0;
}