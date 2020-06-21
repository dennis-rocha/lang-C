#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int mediaAluno (){ //primeira atividade -----> Algoritmo que l� nome, sexo, idade e as notas. Faz o calculo e mostra a m�dia do aluno 
	int nota[4], idade, soma, i;
	char nome[10], sexo[10];
	
	printf ("Digite o nome do aluno: ");
	scanf ("%s", &nome);
	
	printf ("Qual o g�nero do aluno?\nMasculino\t\tFeminino\n\n--->");
	scanf ("%s", &sexo);
	
	for (i=0; i<4; i++){
		
		printf ("qual a %d� nota do aluno: ", i+1);
		scanf ("%d", &nota[i]);
	}
	
	soma = (nota[0]+nota[1]+nota[2]+nota[3])/4;
	
	printf ("\n\n************************", nome);
	printf ("\n\n Nome do aluno: %s\n", nome);
	printf (" G�nero do aluno: %s\n", sexo);
	printf (" A m�dia do aluno: %d", soma);
	
	return 0;
}
int trocarValor (){ //segunda atividade -----> Algoritmo que inverte o valor de A para B e vice-versa
	
	int a,b,z;
	
	printf ("Digite um n�mero inteiro para A: ");
	scanf ("%d", &a);
	printf ("Digite um n�mero inteiro para B: ");
	scanf ("%d", &b);
	
	z=a;
	a=b;
	b=z;
	
	printf ("\n\nO valor de 'A': %d\nO valor de 'B': %d", a, b);
	
	return 0;
}
int lerVetores (){ //terceira atividade -----> Algoritmo que l� 6 numeros de vetores e mostra o resultado

int i, vetor[6];
printf ("Declare 6 n�meros do tipo INTEIRO para cada posi��o do vetor.\n\n");

for (i=0;i<6;i++){
	printf ("Digite um numero para o vetor[%d]\n-->", i);
	scanf ("%d", &vetor[i]);
}

for (i=0;i<6;i++){
	if (i==0){
		printf ("\n\n");
	}
	printf ("Digitado para a posi��o do vetor[%d] �: %d\n", i, vetor[i]);
}
	return 0;
}
int parOuImpar (){ //Quarta atividade -----> Algoritmo que l� um numero e diz se � par ou impar

int numero, soma;

printf ("Digite um n�mero para verificar se ele � PAR ou IMPAR\n --> ");
scanf ("%d", &numero);

soma=numero%2;

if(soma==0){
	printf ("Numero digitado foi: %d\nEsse n�mero � PAR", numero);
}else{
	printf ("Numero digitado foi: %d\nEsse n�mero � IMPAR", numero);
}

return 0;	
}
int lerTriangulo (){ //Quinta atividade -----> Algoritmo que l� os tr�s lados de um triangulo e diz qual � o formato do tri�ngulo

int lado[3], i, soma;
printf ("DIGITE OS TR�S LADOS DO TRI�NGULO\n\n");
for (i=0;i<3;i++){
	printf ("Digite um numero para o %d� lado\n--> ", i+1);
	scanf ("%d", &lado[i]);
}
if (lado[0] == lado[1] && lado[0]==lado[2] && lado[1]==lado[2]){
	printf ("\nEsse tri�ngulo � EQUILATERO");
}else if(lado[0]==lado[1] || lado[0]==lado[2] || lado[1]==lado[2]){
	printf ("\nEsse tri�ngulo � IS�SCELES");
}else{
	printf ("\nEsse tri�ngulo � ESCALENO");
}
return 0;
}
int aposentar (){ //Sexta atividade ----> Algoritmo que l� o sexo e a idade e informa se o usuario pode se aposentar


int idade, tempo;
char sexo;

//Se pegar a idade e o tempo de contribui��o antes do switch. Ele n�o funciona dentro do switch

printf ("Digite o g�nero:\n -->'M' para Masculino\n -->'F' para Feminino\n\n");
scanf ("%s", &sexo);

switch (sexo){
	case 'm':
		printf ("Digite a idade: ");
		scanf ("%d", &idade);
		printf ("Digite o tempo de contribui��o: ");
		scanf ("%d", &tempo);
		
		if (idade>=65 && tempo>=10){
			printf ("---->APOSENT�VEL<----");
		}else if(idade>=63 && tempo>=15){
			printf ("---->APOSENT�VEL<----");
		}else{
			printf ("---->N�O APOSENT�VEL<----");
		}
	break;
	
	case 'f':
		printf ("Digite a idade: ");
		scanf ("%d", &idade);
		printf ("Digite o tempo de contribui��o: ");
		scanf ("%d", &tempo);
		
		if (idade>=63 && tempo>=10){
			printf ("---->APOSENT�VEL<----");
		}else if(idade>=61 && tempo>=15){
			printf ("---->APOSENT�VEL<----");
		}else{
			printf ("---->N�O APOSENT�VEL<----");
		}
	break;
	
default:
	printf ("---->OP��O INVALIDA<----");	
}
}
int maiorMenor(){ // Setima atividade -----> Algoritmo que l�  n�meros e mostra qual deles � o MAIOR e o MENOR
	
 int  i, maior, menor, num;
 
 for(i=1;i<=5;i++){
 printf("Digite o %d� numero: ", i);
 scanf("%d", &num);

    if (i==1){
	maior=num;
    menor=num;
	}else{
		if(num>maior){
		maior=num;
		}else{
			if(num<menor){
			menor=num;
			}
		}
	}
  }
    
printf("\n -->O menor n�mero �: %d\n -->O maior n�mero �: %d", menor,maior);
 
 return 0;
 }

int somar(){ //Base pra fun��o
	return 0;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  
  int n, funcao;
  char caso;
  
do{

  printf ("\n ******************************************");
  printf ("\n **	Escolha abaixo uma das op��es	 **\n");
  printf (" ******************************************\n\n");
  
  printf (" ----> Atividade 1 = digite (1)\n");
  printf (" ----> Atividade 2 = digite (2)\n");
  printf (" ----> Atividade 3 = digite (3)\n");
  printf (" ----> Atividade 4 = digite (4)\n");
  printf (" ----> Atividade 5 = digite (5)\n");
  printf (" ----> Atividade 6 = digite (6)\n");
  printf (" ----> Atividade 7 = digite (7)\n");
  printf (" ----> Atividade 8 = digite (8)\n\n");
  
  scanf ("%s", &caso);
  
  system("clear||cls"); //limpar o terminal
  
  switch (caso) {
  	case '1':
  		funcao=mediaAluno();
  		printf ("\n\n");
  		break;
  	
  	case '2':
  		funcao=trocarValor();
  		printf ("\n\n");
  		break;
  	
  	case '3':
  		funcao=lerVetores();
  		printf ("\n\n");
  		break;
  	
	 case '4':
  		funcao=parOuImpar();
  		printf ("\n\n");
  		break;
		  
	case '5':
  		funcao=lerTriangulo();
  		printf ("\n\n");
  		break;
		  
	case '6':
  		funcao=aposentar ();
  		printf ("\n\n");
  		break;
		  
	case '7':
  		funcao= maiorMenor();
  		printf ("\n\n");
  		break;
		  
	case '8':
  		funcao=somar();
  		printf ("%d", funcao);
  		printf ("\n\n");
  		break;
		  	
  	
  	default: 
	  printf ("\n ******************************************");
	  printf ("\n **\t------->OP��O ERRADA<-------\t **");
	  printf ("\n ******************************************\n\n");
	  printf (" ++++++++++++++++++++++++++++++++++++++++++\n");
  }
  printf ("\n ******************************************\n");
  printf (" **\tDeseja fazer outra opera��o?\t **");
  printf ("\n ******************************************\n");
  printf ("\n\n--->Digite 0 para sim.\n--->Digite qualquer numero para sair.\n\n");
  scanf ("%d", &n);
  
  system("clear||cls"); //limpar o terminal
  
} while (n==0);


  
  return 0;
}
