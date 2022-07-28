#include <stdio.h>
#include <stdlib.h>

void lerCoordenadas();
void definirQuadrante();

int x, y;

int main(){
    lerCoordenadas();
    definirQuadrante();

    system("PAUSE");
    return 0;
}

void lerCoordenadas(){
    printf("Insira as coordenadas X e Y: ");
    scanf("%d %d", &x, &y);
}

void definirQuadrante(){
    if((x != 0) && (y != 0)){
        if(x > 0){
            if(y > 0){
                printf("\n(%d, %d)\n", x, y);
                printf("O ponto pertence ao primeiro quadrante.\n\n");
            }
            if(y < 0){
                printf("\n(%d, %d)\n", x, y);
                printf("O ponto pertence ao quarto quadrante.\n\n");
            }
        }
        if(x < 0){
            if(y > 0){
                printf("\n(%d, %d)\n", x, y);
                printf("O ponto pertence ao segundo quadrante.\n\n");
            }
            if(y < 0){
                printf("\n(%d, %d)\n", x, y);
                printf("O ponto pertence ao terceiro quadrante.\n\n");
            }
        }
    }
    if((x == 0) && (y == 0)){
        printf("\n(%d, %d)\n", x, y);
        printf("O ponto esta localizado na origem do plano cartesiano.\n\n");
    }
    if((x != 0) && (y == 0)){
        printf("\n(%d, %d)\n", x, y);
        printf("O ponto esta sobre o eixo x, das abscissas.\n\n");
    }
    if((x == 0) && (y != 0)){
        printf("\n(%d, %d)\n", x, y);
        printf("O ponto esta sobre o eixo y, das ordenadas.\n\n");
    }
}
