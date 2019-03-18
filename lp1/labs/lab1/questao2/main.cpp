/*
       Márcio Tenório Júnior  | Erickson Moura de Lima
       Laboratório 01 - LP1
       Questão 2
*/

#include "funcoes.h"

using namespace std;

int main()
{

    double x;

    cout<<"Digite o valor do angulo x >= -pi e x <= pi em radianos."<<endl;
        cin>>x;


    if(x < ( -1*(PI_V)) )
    {
            cout<<"x menor que -pi"<<endl;
            return 0;
    }
    else if(x > PI_V)
    {
        cout<<"x maior que pi"<<endl;
        return 0;
    }


    //Tarefa 1 
    cout<<"Diferença entre os sin:"<<endl;
        double diferenca_s = sin(x) - seno_min_taylor(x);
        if(diferenca_s < 0){diferenca_s *= (-1);}
        cout<<diferenca_s<<endl;


    cout<<"Diferença entre os cos:"<<endl;
        double diferenca_c = cos(x) - cosseno_min_taylor(x);
        if(diferenca_c < 0){diferenca_c *= (-1);}
        cout<<diferenca_c<<endl;



    //Tarefa 2
    double seno_compare = sin(x), erro=1.0, seno_taylor;
    int i; 
    for(i=0; erro > 0.0001 ; ++i)
    {
        seno_taylor += ( pow(-1, i) * ((pow(x, 1+2*i) ) / fatorial(1+2*i)));
        erro = seno_taylor - seno_compare;

        if(erro < 0){erro *= (-1);}
    }

    cout<<i<<endl;
    cout<<erro<<endl;



    return 0;
}