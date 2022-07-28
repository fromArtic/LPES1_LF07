#include <stdio.h>
#include <stdlib.h>

void AeB();
void euclides();
void modulo();
void printMDC();
void restart();

int numA, numB, num1, num2, resto, end = 1;

int main(){
    while(end == 1){
        AeB();
        euclides();
        if(num2 < 0){
            modulo();
        }
        printMDC();
        restart();
        printf("\n");
    }

    printf("Encerrando o programa . . .\n");
    system("PAUSE");
    return 0;
}

//Parametros A e B
void AeB(){
    printf("Informe um valor inteiro e diferente de zero para A (caso negativo, sera considerado o seu modulo): ");
    scanf("%d", &numA);
    while(numA == 0){
        printf("O numero inserido deve ser diferente de zero. Informe um valor valido para A: ");
        scanf("%d", &numA);
    }
    printf("Agora, informe um valor inteiro e diferente de zero para B (caso negativo, sera considerado o seu modulo): ");
    scanf("%d", &numB);
    while(numB == 0){
        printf("O numero inserido deve ser diferente de zero. Informe um valor valido para B: ");
        scanf("%d", &numB);
    }
    return numA, numB;
}

//Euclides
void euclides(){
    num1 = numA;
    num2 = numB;
    resto = num1 % num2;
    while(resto != 0){
        num1 = num2;
        num2 = resto;
        resto = num1 % num2;
    }
    return numA, numB, num2;
}

//Modulo
void modulo(){
    num2 *= -1;
    return num2;
}

//Print MDC
void printMDC(){
    printf("\n- Maximo divisor comum entre %d e %d: %d", numA, numB, num2);
    printf("\n\n");
}

//Opcao de encerrar o programa
void restart(){
    printf("1 - Inserir outros valores\n");
    printf("2 - Encerrar o programa\n");
    printf("Sua escolha: ");
    scanf("%d", &end);
    while((end != 1) && (end != 2)){
        printf("Informe uma opcao valida: ");
        scanf("%d", &end);
    }
    return end;
}
