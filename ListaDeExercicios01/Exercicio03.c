#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[20];
    char b[20];
    int pares, loop;
    int posatual = 0;
    int posnova = 0;

    
    printf("Insira quantos pares de palavras:");
    scanf("%d", &pares);
    
    for (loop = 0; loop < pares; loop++) {
        printf("\nPrimeira palavra:");
        scanf("%s", a);
        
        printf("Segunda palavra:");
        scanf("%s", b);

            if(strlen(a) == strlen(b)) {
                while (posatual < strlen(a))
                {
                    if ( !(a[posatual] == 'a' || a[posatual] == 'e' || a[posatual] == 'i' || a[posatual] == 'o' || a[posatual] == 'u') && (b[posatual] == 'a' || b[posatual] == 'e' || b[posatual] == 'i' || b[posatual] == 'o' || b[posatual] == 'u')) 
                    {
                        a[posnova] = a[posatual];
                        b[posnova] = b[posatual];
                        posnova++;
                    }
                posatual++;
                }
                
                if (a[posnova] == b[posnova])
                    printf("Yes\n");
                else
                    printf("No\n");
                }
            else {
                printf("No\n");
            }
    }
    
    return 0;
}
