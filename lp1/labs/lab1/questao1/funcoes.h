#include <iostream>
#include <cmath>

using namespace std;

#define PI_N 3.1415


/* 
	Figuras Planas
*/


float triangulo_area(float base, float altura);
float triangulo_perimetro(float lado);


float retangulo_area(float base, float altura);
float retangulo_perimetro(float base, float altura);


float quadrado_area(float lado);
float quadrado_perimetro(float lado);


float circulo_area(float raio);
float circulo_perimetro(float raio);


/*
	Figuras Geometricas Espaciais
*/


float piramide_area(float lado_base, float aresta, float altura_aresta);
float piramide_volume(float lado_base, float altura);


float cubo_area(float aresta);
float cubo_volume(float aresta);


float paralelepipedo_area(float aresta1, float aresta2, float aresta3);
float paralelepipedo_volume(float aresta1, float aresta2, float aresta3);


float esfera_area(float raio);
float esfera_volume(float raio);

/*
	Funções acessórias
*/

int erro_quantidade_argumentos(int tam_argc, int argumentos_caso);