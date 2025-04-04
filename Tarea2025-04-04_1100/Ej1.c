#include<stdio.h>
#include<math.h>
int main(){
    float peso, estatura, IMC;
    printf("Dame tu peso en kilogramos:");
    scanf("%f",&peso);
    printf("Dame tu estatura en metros:");
    scanf("%f",&estatura);
    IMC = peso / pow(estatura,2);
    if(IMC <= 18.4)
        printf("Tienes bajo peso");
    else if(IMC <= 18.5 || IMC >= 24.9){

        if(IMC <= 25.0 || IMC >= 29.9)
            if(IMC <= 30.0 || IMC >= 34.9)
                if(IMC <= 35.0 || IMC >= 39.9)
                    if(IMC >= 40)
                    printf("Tienes obesidad clase 3");

                    else
                        printf("Ingresaste un dato invalido...");
                else
                printf("Tienes obesidad clase 2");
            else
            printf("Tienes obesidad clase 1");
        else
            printf("Tienes sobrepeso");
    }
    else
        printf("Estas en tu peso normal");

    return 0;
}
