#include "funcoes.h"

double seno_min_taylor(double x)
{
	 return x - ( pow(x, 3) / 6) + ( pow(x, 5) / 120);
}

double cosseno_min_taylor(double x)
{
	return 1 - ( pow(x, 2) / 2) + ( pow(x, 4) / 24);
}

double fatorial(int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}

	else
	{
		return x * fatorial(x-1);
	}
}