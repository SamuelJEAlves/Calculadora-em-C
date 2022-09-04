#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void adicao (){
	
	float numeros, op=0; 
	printf("Digite os numeros a serem somados e em seguida  digite 0 para o resultado: \n");
	
	do{
		scanf("%f", &numeros);
		op += numeros;
	} 
	while (numeros != 0);
	printf("Resultado = %.3f\n", op);
}
void subtracao (){
	
	float numeros, op=0; 
	printf("Digite os numeros a serem subtra�dos e em seguida digite 0 para o resultado: \n");
	
	do{
		scanf("%f", &numeros);
		op = numeros - op;
	} 
	while (numeros != 0);
	printf("Resultado = %.3f\n", op);
}
void multiplicacao (){
	
	float numeros, op=1;
	printf("Digite os numeros a serem multiplicados e em seguida digite 1 para o resultado: \n");
	
	do{
		scanf("%f", &numeros);
		op = numeros * op;
	}
	while (numeros != 1);
	printf("Resultado = %.3f\n", op);
}
void divisao (){
	
	float numeros, op=1;
	printf("Digite os numeros a serem divididos e em seguida digite 1 para o resultado: \n");
	
	do{
		scanf("%f", &numeros);
		op = numeros / op;
	}
	while (numeros != 1);
	printf("Resultado = %.3f\n", op);
}
void raiz_q (){
	
	float numero, op;
	printf("Digite o n�mero a ser extra�da a raiz quadrada: \n");
	scanf("%f", &numero);
	
	op = sqrt(numero);	
	printf("Resultado = %.3f\n", op);
}
void potencia (){
	
	float numero, op;
	int expoente;
	printf("Digite a base e o expoente da potencia��o: \n");
	scanf("%f", &numero);
	scanf("%d", &expoente);
	
	op = pow(numero, expoente);
	printf("Resultado = %.3f\n", op);
}
void fatorial (){
	
	long int numero, i;
	printf("Digite o n�mero a ser calculado o seu fatorial: \n");
	scanf("%d", &numero);
	
	for (i=1; numero>1; numero--){
		i = i * numero;
	}
	printf("Resultado = %d\n", i);
}
void menu (){
	
	int operacao;
	printf("$ $ $ $ $ BEM VINDO A CALCULADORA $ $ $ $ $ \n");
	
	do{
	  printf("\n");
	  printf("Digite o n�mero da opera��o desejada: \n");
	  printf("1 - Adi��o\n");
	  printf("2 - Subtra��o\n");
	  printf("3 - Multiplica��o\n");
	  printf("4 - Divis�o\n");
	  printf("5 - Radicia��o\n");
	  printf("6 - Potencia��o\n");
	  printf("7 - Fatorial\n");
	  printf("0 - Fechar CALCULADORA\n");
	
	scanf("%d", &operacao);
	
	while (operacao>7 || operacao<0){
		printf("OP��O INV�LIDA! TENTE NOVAMENTE.\n");
	    scanf("%d", &operacao);
    }
    
	switch (operacao){
			case 1:
				adicao();
				break;
			case 2:
			    subtracao();
				break;
			case 3:
			    multiplicacao();
				break;
			case 4:
				divisao();
				break;
			case 5:
				raiz_q();
				break;
			case 6:
				potencia();
				break;
			case 7:
				fatorial();
				break;
			case 0:
			    printf("$ $ $ $ $ OBRIGADO POR UTILIZAR O NOSSO SISTEMA! $ $ $ $ $\n");
				break;
		}
      } while (operacao != 0);
	}
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	menu();
	
	return 0;
}
