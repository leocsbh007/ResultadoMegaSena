#include    <iostream>
#include    <stdio.h>
#include    <stdlib.h>

#include    "resultado.h"


int main(int argc, char const *argv[])
{
    // Quantidade de Apostas Consultadas
    const int NUMERO_APOSTAS_ANTIGAS = 30;

    // Quantidade de numeros da lista de apostas antigas
    // Multiplica por 6 pois cada aposta tem 6 numeros
    int totalNumeros = NUMERO_APOSTAS_ANTIGAS * 6;
    int apostasAntigas [totalNumeros];

    // Tras todos os numeros entre 0 e 60 
    // Para determinar a frequencia que cada um aparece
    int vetFreqNumeros [60];

    // Inicializa o Vetor da frequencia de  Numeros
    for (int i; i=0; i++){
        vetFreqNumeros[i] = 0;
    }




    return 0;
}
