/*Você foi contratado por um laboratório de pesquisas multidisciplinar que atende a várias empresas. Seu primeiro trabalho é desenvolver uma solução para a equipe de nutrição. 
Um cliente deseja uma calculadora de IMC (Índice de Massa Corporal). Os nutricionistas lhe passaram a fórmula para calcular o IMC com base no peso e na altura do indivíduo.
Para resolver esse problema você deve ter a fórmula para o cálculo do IMC anotada: IMC = Peso / Altura². Também será preciso criar condicionais para verificar a situação do indivíduo (abaixo do peso, peso ideal ou sobrepeso), com base em seu IMC.*/

//Código abaixo da minha resolução//
#include <stdio.h>

int main(void){
    float peso, altura, resultadoIMC;
    printf("Digite seu peso:");
    scanf("%f",&peso);
    printf("\nDigite sua altura:");
    scanf("%f",&altura);
    resultadoIMC = peso / (altura * altura);
    
    if(resultadoIMC < 18.5){
        printf("\n Você está abaixo do peso !");
    }
    else if(resultadoIMC >= 18.5 && resultadoIMC < 25){
        printf("\n Você está no seu peso normal !");
    }
    else if(resultadoIMC > 25 && resultadoIMC < 30){
        printf("\n Você está em sobrepeso !");
    }
    else if(resultadoIMC >= 30 && resultadoIMC < 35){
        printf("\n Você está com obesidade grau 1 !");
    }
    else if(resultadoIMC >= 35 && resultadoIMC < 40){
        printf("\n Você está com obesidade grau 2 !");
    }
    else if(resultadoIMC >= 40){
        printf("\n Você está com obesidade mórbida!");
    }
    
}


/*Código da correção*/
#include <stdio.h>

float calcularIMC() {
    float peso, altura, imc;
    
    printf("\nInforme seu peso (em Kg): ");
    scanf("%f", &peso);    
    printf("\nInforme sua altura (em metros): ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    return imc;
}

int main(){
    float imc = calcularIMC();
    
    if (imc < 18.5) printf("\nIMC = %.2f, Situação: Abaixo do peso!", imc);
    else if (imc < 24.9) printf("\nIMC = %.2f, Situação: Peso ideal!", imc);
    else  printf("\nIMC = %.2f, Situação: Sobrepeso!", imc);
}

