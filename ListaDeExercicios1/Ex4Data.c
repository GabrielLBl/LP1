#include <stdio.h>
#include <stdlib.h>

typedef struct regData 
{
    int dia, mes, ano;
} TData; 

int CalcData(TData);
void ImprimeData(int, TData);

int main()
{
    TData VerifData;
    int DiaSem;
    
    printf("informe a data: ");
    scanf("%d %d %d", &VerifData.dia, &VerifData.mes, &VerifData.ano);
    
    while(1)
    {
        if(VerifData.dia == 0 && VerifData.mes==0 && VerifData.ano==0)
            break;
            
        DiaSem = CalcData(VerifData);
        ImprimeData(DiaSem, VerifData);
        
        printf("informe a data: ");
        scanf("%d %d %d", &VerifData.dia, &VerifData.mes, &VerifData.ano);
    }
    return 0;
}

int CalcData(TData data)
{
    int d, m, s, a, resultado;
    
    d = data.dia;
    
    if(data.mes < 3 )
    {
        m = data.mes + 10;
        data.ano = data.ano - 1;
    }
    else
    {
        m = data.mes - 2;
    }
    
    s = data.ano/100;
    a = data.ano%100;
    
    resultado = (((int)(2.6 * m - 0.1)) + d + a + (a/4) + (s/4) - 2 * s)%7;
    
    if(resultado < 0)
        resultado = resultado + 7;
    
    return resultado;
    
}

void ImprimeData(int DiaSem, TData data)
{
    switch(DiaSem)
    {
        case 0: 
        printf("%02d/%02d/%d: Domingo\n", data.dia, data.mes, data.ano);break;
        case 1: 
        printf("%02d/%02d/%d: Segunda-Feira\n", data.dia, data.mes, data.ano);break;
        case 2: 
        printf("%02d/%02d/%d: Terça-Feira\n", data.dia, data.mes, data.ano);break;
        case 3: 
        printf("%02d/%02d/%d: Quarta-Feira\n", data.dia, data.mes, data.ano);break;
        case 4: 
        printf("%02d/%02d/%d: Quinta-Feira\n", data.dia, data.mes, data.ano);break;
        case 5: 
        printf("%02d/%02d/%d: Sexta-Feira\n", data.dia, data.mes, data.ano);break;
        case 6: 
        printf("%02d/%02d/%d: Sabado\n", data.dia, data.mes, data.ano);break;
    }
}