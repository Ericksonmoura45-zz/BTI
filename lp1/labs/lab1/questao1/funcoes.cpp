#include "funcoes.h"


/*
	Figuras Geometricas Planas
*/

float triangulo_area(float base, float altura)
{
	return (base * altura)/2;
}

float triangulo_perimetro(float lado)
{
	return 3*lado;
}


float retangulo_area(float base, float altura)
{
	return base*altura;
}

float retangulo_perimetro(float base, float altura)
{
	return 2*(base + altura);
}


float quadrado_area(float lado)
{
	return pow(lado, 2);
}

float quadrado_perimetro(float lado)
{
	return 4*lado;
}


float circulo_area(float raio)
{
	float resultado = PI_N * pow(raio, 2);
		return resultado;
}

float circulo_perimetro(float raio)
{
	return 2*PI_N*raio;
}

/*
	Figuras Geometricas Espaciais
*/

float piramide_area(float lado_base, float aresta, float altura_aresta)
{
	return quadrado_area(lado_base) + ( 4*(triangulo_area(aresta, altura_aresta)));
}

float piramide_volume(float lado_base, float altura_aresta)
{
	return (quadrado_area(lado_base) * altura_aresta)/3;
}


float cubo_area(float aresta)
{
	return 6 * pow(aresta, 2);
}

float cubo_volume(float aresta)
{
	return pow(aresta, 3);
}


float paralelepipedo_area(float aresta1, float aresta2, float aresta3)
{
	return (2*aresta1*aresta2) + (2*aresta1*aresta3) + (2*aresta2*aresta3);
}

float paralelepipedo_volume(float aresta1, float aresta2, float aresta3)
{
	return aresta1 * aresta2 * aresta3;
}


float esfera_area(float raio)
{
	return 4 * PI_N * pow(raio, 2);
}

float esfera_volume(float raio)
{
	return (4/3) * PI_N * pow(raio, 3);
}

/*
	Funções acessórias
*/
int erro_quantidade_argumentos(int tam_argc, int argumentos_caso)
{
	    if(tam_argc < argumentos_caso)
        {
            cout<<"Quantidade de argumentos inválidos"<<endl;
                return 1;
        }

        else if (tam_argc > argumentos_caso)
        {
            cout<<"Quantidade de argumentos inválidos"<<endl;
            	return 1;
        }

        return 0;
}