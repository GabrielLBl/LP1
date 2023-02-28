#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char nome1[20], nome2[20];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%s", nome1);
        scanf("%s", nome2);
        
        if(strlen(nome1) == strlen(nome2))
        {
            for(int j = 0; j < strlen(nome1); j++)
            {
                if(nome1[j] == 'a' || nome1[j] == 'e' || nome1[j] == 'i' || nome1[j] == 'o' || nome1[j] == 'u')
                    nome1[j]='*';
                    
                if(nome2[j] == 'a' || nome2[j] == 'e' || nome2[j] == 'i' || nome2[j] == 'o' || nome2[j] == 'u')
                    nome2[j]='*';
                    
            }
            
            if(strcmp(nome1, nome2) == 0)
                printf("Yes\n");
                
            else
                printf("No\n");
            
        }
        else
            printf("No\n");
    }
    
    return 0;
}