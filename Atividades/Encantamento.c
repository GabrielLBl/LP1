#include <stdio.h>
#include <string.h>

int main(void) 
{
    char palavra[110];
    unsigned short x, i, k, c, j;
    
    j = 0;
    

    while(scanf("%s", palavra) != EOF)
    {
        x = strlen(palavra);
        c = strlen(palavra);
        
        for(i = 0; i < strlen(palavra); i++)
        {
            for(k = 0; k < i; k++)
            {
                printf(" ");
            }

            for(j = 0; j < c-1; j++)
            {
                printf("%c ",palavra[j]);
            }
    
            printf("%c\n",palavra[j]);
            c = --x;
        }
        printf("\n");

    }
    return 0;
}