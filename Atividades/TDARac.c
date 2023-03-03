#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
int mdc(int, int);

int main(void)
{	TRac X, Y, R, a;
	int N;
	char op;

	scanf("%d", &N);
	
	if(N < 1 || N > 10000)
		return 0;
	else
	{
		for(int i = 0; i < N; i++)
		{

			scanf("%d / %d %c %d / %d", &X.num, &X.den, &op, &Y.num, &Y.den);
			
			if (X.num < 1 || X.num > 1000 
			&& X.den < 1 || X.den > 1000 
			&& Y.num < 1 || Y.num > 1000 
			&& Y.den < 1 || Y.num > 1000)
			{
				return 0;
			}
			else
			{
				if(op == '+')
					R = SomaRac(X, Y);
				
				else if(op == '-')
					R = SubtraiRac(X, Y);
				
				else if(op == '*')
					R = MultRac(X, Y);
				
				else if(op == '/')
					R = DivRac(X, Y);
				
				else
					return 0;

				a.num = R.num / mdc(R.num, R.den);
				a.den = R.den / mdc(R.num, R.den);
			
				printf("%d/%d = %d/%d\n", R.num, R.den, a.num, a.den);
												
			}
		}
	 return 0;
	}
}

TRac SomaRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac SubtraiRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac MultRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac DivRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}