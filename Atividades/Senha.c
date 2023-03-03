#include <stdio.h>
#include <string.h>

int main()
{
    int n, cont=0;
    char ra[20];

    scanf("%d", &n);

    for(int i =0;i < n;i++)
    {
        scanf("%s", ra);
        cont = 0;
        
        if((ra[0] == 'R' && ra[1] == 'A') && strlen(ra) == 20)
        {
            for(int j = 0; j < strlen(ra); j++)
            {
                if(cont==0)
                {
                    if(j > 0 && ra[j+1]!='0')
                            cont=1;
                            
                    if(ra[j] != '0' && ra[j] != 'R' && ra[j] != 'A')
                        printf("%c", ra[j]);
                }
                else
                    printf("%c", ra[j]);
            }
        }
        else 
            printf("INVALID DATA");

        printf("\n");
    }

    return 0;
}