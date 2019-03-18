/*
       Márcio Tenório Júnior e Erickson Moura de Lima
       Laboratório 01 - LP1
       Questão 1
*/

#include "funcoes.h"
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{

/*
    Instruções de uso, quando não são preenchidos 
os argumentos via linha de comando. 
*/

int controle_quantidade_argumentos = 0;

    if(argc == 1)
    {
        cout<<"\t\t==========   Instruções   =========="<<endl;
        cout<<"\tPara calcular área e perimetro ou área e volume, se passa o nome da figura (todo em minusculo) e a seguir os argumentos. Tudo separado por \" \" (espaço) , respeitando esta ordem:"<<endl;
        cout<<endl;
        cout<<"Triângulo: triangulo base altura"<<endl; 
        cout<<"Retângulo: retangulo base altura"<<endl;
        cout<<"Quadrado: quadrado lado"<<endl; 
        cout<<"Círculo: circulo raio"<<endl;
        cout<<endl;
        cout<<"Piramide: piramide lado_base aresta altura_aresta"<<endl;
        cout<<"Cubo: cubo aresta"<<endl;
        cout<<"Paralelepipedo: paralelepipedo aresta1 aresta2 aresta3"<<endl;
        cout<<"Esfera: esfera raio"<<endl;
    }

/*
    Figuras geometricas planas
*/

    else if( !strcmp(argv[1], "triangulo"))
    {
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 4);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area do triangulo: "<<triangulo_area(strtof(argv[2], NULL), strtof(argv[3], NULL))<<endl;
        cout<<"Perimetro do triangulo: "<<triangulo_perimetro(strtof(argv[2], NULL))<<endl;

        }

    }

    else if( !strcmp(argv[1], "retangulo"))
    {
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 4);

        if(!controle_quantidade_argumentos)
        {

            cout<<"Area do retangulo: "<<retangulo_area(strtof(argv[2], NULL), strtof(argv[3], NULL))<<endl;
            cout<<"Perimetro do retangulo: "<<retangulo_perimetro(strtof(argv[2], NULL), strtof(argv[3], NULL))<<endl;

        }
    }

    else if( !strcmp(argv[1], "quadrado"))
    {
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 3);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area do quadrado: "<<quadrado_area(strtof(argv[2], NULL))<<endl;
        cout<<"Perimetro do quadrado: "<<quadrado_perimetro(strtof(argv[2], NULL))<<endl;

        }
    }

    else if( !strcmp(argv[1], "circulo"))
    {
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 3);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area do circulo: "<<circulo_area(strtof(argv[2], NULL))<<endl;
        cout<<"Perimetro do circulo: "<<circulo_perimetro(strtof(argv[2], NULL))<<endl;

        }
    }
/*
    Figuras geometricas espaciais
*/

    else if( !strcmp(argv[1], "piramide"))
    {

        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 5);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area da piramide: "<<piramide_area(strtof(argv[2], NULL), strtof(argv[3], NULL), strtof(argv[4], NULL))<<endl;
        cout<<"Volume da piramide: "<<piramide_volume(strtof(argv[2], NULL), strtof(argv[4], NULL))<<endl;
        
        }
    }

    else if( !strcmp(argv[1], "cubo"))
    {
        
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 3);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area do cubo: "<<cubo_area(strtof(argv[2], NULL))<<endl;
        cout<<"Volume do cubo: "<<cubo_volume(strtof(argv[2], NULL))<<endl;
        
        }
    }

    else if( !strcmp(argv[1], "paralelepipedo"))
    {
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 5);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area do paralelepipedo: "<<paralelepipedo_area(strtof(argv[2], NULL), strtof(argv[3], NULL), strtof(argv[4], NULL))<<endl;
        cout<<"Volume da paralelepipedo: "<<paralelepipedo_volume(strtof(argv[2], NULL), strtof(argv[3], NULL), strtof(argv[4], NULL))<<endl;
        
        } 
    }

    else if( !strcmp(argv[1], "esfera"))
    {
        
        controle_quantidade_argumentos = erro_quantidade_argumentos(argc, 3);

        if(!controle_quantidade_argumentos)
        {

        cout<<"Area da esfera: "<<esfera_area(strtof(argv[2], NULL))<<endl;  
        cout<<"Volume da esfera: "<<esfera_volume(strtof(argv[2], NULL))<<endl; 
    
        }
    }

    
    return 0;
}