#include <stdio.h>
#include <stdlib.h>

void ABC();
void verifyTri();
void typeTri();

int A, B, C;

int main(){
    ABC();
    verifyTri();

    system("PAUSE");
    return 0;
}

void ABC(){
    printf("Insira valores inteiros e positivos para A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);
    while((A < 0) || (B < 0) || (C < 0)){
        printf("\nOs tres valores devem ser maiores que zero.");
        printf("\nInsira valores inteiros e positivos para A, B e C: ");
        scanf("%d %d %d", &A, &B, &C);
    }
    return(A, B, C);
}

void verifyTri(){
    if((A < (B + C)) && (B < (A + C)) && (C < (A + B))){
        typeTri();
    }
    else{
        printf("\nOs valores informados nao formam um triangulo.\n\n");
    }
}

void typeTri(){
    if((A == B) && (B == C)){
       printf("\nOs valores informados formam um triangulo equilatero.\n\n");
    }else
        if((A != B) && (A != C) && (B != C)){
           printf("\nOs valores informados formam um triangulo escaleno.\n\n");
        }else
            printf("\nOs valores informados formam um triangulo isosceles.\n\n");
}
