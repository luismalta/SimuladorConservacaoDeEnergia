#include <stdio.h>
#include <stdlib.h>

int confereNegativo(float x){
    if(x <= 0){
        return 1;
        printf("\nDigite um valor maior e diferente de zero!");
    }else{
        return 0;
    }
}
double arrumaFloat(double x){
    x = (double)((int)(x*100));
    x= x/100;
    return x;
}
void confere(float massa1, float massa2, float massau){

    if(massau == massa2){

        acerto();
        massa1 = massa2;

    }else{
        erro();
    }
}
void acerto(){
    printf("Pressione [ENTER] para continuar\n");
    getch();
}
void erro(){

    char sair;

    //sair = NULL;

    printf("Valor invalido.\n");
    printf("Pressione [S] para tentar novamente ou [N] para sair\n");

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
void confereCoef(double coefU, double coefI){
    if(coefI == coefU){
            acerto();
            printf("Você acertou!");
        }else{
            erro();
        }
}
int main(){
    float massa1 = 0, massa2 = 0, velo = 0, altura = 0, massau = 0, g = 0;
    double coefAtritoU, coefAtritoI;

    g = 10;

    printf("\t\t\t Simulador de Energia mecanica\n");
    printf("**digite apenas valores com duas casas decimais.\n");

    while(confereNegativo(altura)){
        printf("\nInsira a altura inicial: \n");
        scanf("%f", &altura);
        altura = arrumaFloat(altura);
    }

    while(confereNegativo(massa1)){
        printf("\nDigite a massa inicial: \n");
        scanf("%f", &massa1);
        massa1 = arrumaFloat(massa1);
    }

    //Velocidade A para B
    velo = sqrt(2*g*altura);

    //Energia de B para C
    massa2 = ((massa1*(velo*velo)/2)/(g*((5*altura)/4)));
    massa2 = arrumaFloat(massa2);

    //scanea e confere valor usuario
    while(confereNegativo(massau)){
        printf("\nInsira a massa do carro no ponto B:");
        scanf("%f", &massau);
        massau = arrumaFloat(massau);
    }
    confere(massa1, massa2, massau);

///////////////////////////////////////////////////////////////////////

    //Velocidade C para D
    velo = sqrt(2*g*((5*altura)/4));

    //Energia de D para E
    massa2 = ((massa1*(velo*velo)/2)/(g*((3*altura)/4)));
    massa2 = arrumaFloat(massa2);

    //scanea e confere valor usuario
    massau = 0;
    while(confereNegativo(massau)){
        printf("\nInsira a massa do carro no ponto D:\n");
        scanf("%f", &massau);
    }

    confere(massa1, massa2, massau);

////////////////////////////////////////////////////////////////////////

    //Velocidade C para D
    velo = sqrt(2*g*((3*altura)/4));

    //Energia de D para E
    massa2 = ((massa1*(velo*velo)/2)/(g*(altura/2)));
    massa2 = arrumaFloat(massa2);

    //scanea e confere valor usuario
    massau = 0;
    while(confereNegativo(massau)){
        printf("Insira a massa do carro no ponto F: \n");
        scanf("%f", &massau);
    }
    confere(massa1, massa2, massau);

////////////////////////////////////////////////////////////////////////

    //velocidade de G para H
    velo = sqrt(2*g*((3*altura)/8));

    coefAtritoI = velo/(6*g);
    coefAtritoI = arrumaFloat(coefAtritoI);
    printf("\nCoef correto: %.2f", coefAtritoI);

    while(confereNegativo(coefAtritoU)){
        printf("\nDigite o valor do coeficiente de atrito:");
        scanf("%lf", &coefAtritoU);
    }
    confereCoef(coefAtritoU, coefAtritoI);
    printf("\nFIM DE JOGO!");
    return 0;

}
