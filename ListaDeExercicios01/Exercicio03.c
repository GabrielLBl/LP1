#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    char b[20];
    int i, pares, loop, e, f;
    
    printf("Insira quantos pares de palavras:");
    scanf("%d", &pares);
    
    for (loop = 0; loop < pares; loop++) {
        printf("\nPrimeira palavra:");
        scanf("%s", a);
        
        printf("Segunda palavra:");
        scanf("%s", b);
        
        e = 0;
        f = 0;
            if(strlen(a) == strlen(b)) {
                while (f < strlen(a))
                {
                    if ((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') && (b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'))
                        continue;
                    else if (a[i]!=b[i]) 
                        e++;
                f++;
                }
                
                if (e == 0)
                    printf("\nYes\n");
                else
                    printf("\nNo\n");
                }
            else {
                printf("\nNo\n");
            }
    }
    
    return 0;
}
