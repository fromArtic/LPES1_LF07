#include <stdio.h>
#include <stdlib.h>

void NeD();
void cont();

int N, D, contador;

int main(){
    NeD();
    cont();
    printf("\nNumero de vezes que %d aparece em %d: %d.\n\n", D, N, contador);

    system("PAUSE");
    return 0;
}

void NeD(){
    printf("Insira um valor inteiro para N: ");
    scanf("%d!", &N);
    printf("Insira um valor inteiro, de 0 a 9, para D: ");
    scanf("%d", &D);
    return N, D;
}

void cont(){
    int n = N, resto;
    contador = 0;
    while(n != 0){
        resto = n % 10;
        n = n/10;
        if(resto == D){
            contador++;
        }
    }
    return contador;
}
