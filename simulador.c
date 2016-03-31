#include <stdio.h>
#include <stdlib.h>

int confere(double massa1, double massa2, double massau){

    if(massau == massa2){

        acerto();
        massa1 = massa2;

    }else{
        erro();
    }
}

int acerto(){

    printf("Massa correta, o carrinho conseguiu subir com sucesso\n");
    printf("Precione [ENTER] para continuar\n");
    getch();
}
int erro(){
    char sair;

    //sair = NULL;

    printf("Massa errada, o carrinho nao conseguiu chegar ao topo com sucesso\n");
    printf("Precione [S] para tentar novamente ou [N] para sair\n");

    //getch();
    fflush(stdin);
    scanf("%c", &sair);

    if(sair == 's'){
        system("cls"),
        main();

    }else{


        exit(0);

    }
}

int main(){
    double massa1, massa2, velo,altura, massau, g;

    g = 10;
    massa1 = 10;

    printf("\t\t\t Simulador de Energia mecanica\n");


    printf("Insira a altura inicial: \n");
    scanf("%lf", &altura);


    //velocidade A para B
    velo = sqrt(2*g*altura);

    //energia de B para C
    massa2 = ((massa1*(velo*velo)/2)/(g*((5*altura)/4)));

    //scanea e confere valor usuario
    printf("Insira a massa do carro no ponto B: \n");
    scanf("%lf", &massau);
    confere(massa1, massa2, massau);
///////////////////////////////////////////////////////////////////////

    //velocidade C para D
    velo = sqrt((5*altura)/4);

    //energia de D para E
    massa2 = ((massa1*(velo*velo)/2)/(g*((3*altura)/4)));

    //scanea e confere valor usuario
    printf("Insira a massa do carro no ponto D: \n");
    scanf("%lf", &massau);
    confere(massa1, massa2, massau);

////////////////////////////////////////////////////////////////////////

    //velocidade C para D
    velo = sqrt((3*altura)/4);

    //energia de D para E
    massa2 = ((massa1*(velo*velo)/2)/(g*(altura/2)));

    //scanea e confere valor usuario
    printf("Insira a massa do carro no ponto F: \n");
    scanf("%lf", &massau);
    confere(massa1, massa2, massau);




}
