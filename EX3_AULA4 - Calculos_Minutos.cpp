#include <stdio.h>

int minutos (int hora, int min);
int diferenca (int minTotal1, int minTotal2);

int main(){

    int hora1, hora2, min1, min2;
    int minTotal1, minTotal2;
    int DIF;

    printf("digite a hora1: ");
    scanf("%d:%d", &hora1, &min1);

    printf("digite a hora2: ");
    scanf("%d:%d", &hora2, &min2);

    minTotal1 = minutos(hora1, min1); //chama a funcao primeiro para hora1 e min1 e calcula na funcao la embaixo 
    minTotal2 = minutos(hora2, min2); //depois chama dnv para hora2 e min2 

    DIF = diferenca(minTotal1, minTotal2);

    printf("a diferenca entre as horas eh de %d minutos\n", DIF);

    return 0;
}

int minutos (int hora, int min){ //recebe priemrio hora1 e min1 e depois hora2 e min2 
								// passagem de valor por parametro. param 1 recebe o valor do param1 da chamada e param2 recebe o valor de param2 da chamada

    int total; 

    total = (hora * 60) + min;

    return total;  //importante fazer a chamada da funcao duas vezes pois a funcao nao pode retornar dois valores
				   //porem o programa precisa que o calculo ocorra duas vezes 
}

int diferenca (int minTotal1, int minTotal2){

    int sub;

    if (minTotal1 > minTotal2){
        sub = minTotal1 - minTotal2;
    }else{
        sub = minTotal2 - minTotal1; //IF e ELSE precisam de {}
    }

    return sub; //nao pode retornar o nome da funcao ent foi criada uma nova variavel 
}