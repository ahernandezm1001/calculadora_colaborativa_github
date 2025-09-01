#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("CALCULADORA COLABORATIVA\n\n");
    printf("1. SUMA:\n");
    printf("2. RESTA:\n");
    printf("3. MULTIPLICACION:\n");
    printf("4. DIVISION:\n");
    int opcion;
    printf("Elige una opcion: ");
    scanf("%d", &opcion);
    float num1, num2, resultado;
    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);
    switch(opcion){
        case 1:
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case 2:
            
        case 3:
            
        case 4:
        
        default:
            printf("Opcion no valida.\n");
    }
    return 0;
}