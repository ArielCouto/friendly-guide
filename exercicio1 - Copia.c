#include <stdio.h>/*stdio.h � um cabe�alho da biblioteca padr�o do C*/
#include <math.h>/*math.h � um arquivo cabe�alho que fornece prot�tipos para fun��es, macros e defini��o de tipos da biblioteca padr�o da linguagem de 
programa��o C para fun��es matem�ticas b�sicas.*/
main()
{
	int num1, num2, num3, num4, num5, opcao, p1, p2, p3, p4, p5, pesos, maior, menor;   /*essas foram as vari�veis utilizadas durante o programa*/
	float soma, media, x, y, z, w, t, A, B, C, D, E, d1, d2, desvio;
	
	printf("insira 5 numeros para realizar as operacoes. \n"); /*foi pedido que o usu�rio insira cinco n�meros*/
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	printf("Terceiro numero: ");
	scanf("%d", &num3);
	printf("Quarto numero: ");
	scanf("%d", &num4);
	printf("Quinto numero: ");
	scanf("%d", &num5);
	

	
	printf("\n\n----------------MENU----------------\n");
	printf("\n\nAgora selecione a operacao matematica que deseja realizar: \n"); /*foi pedido para o usu�rio inserir uma das op��es das opera��es matem�ticas*/
	printf("1 - media aritmetica simples\n");
	printf("2 - media ponderada\n");
	printf("3 - desvio padrao\n");
	printf("4 - mostrar o maior valor\n");
	printf("5 - mostrar o menor valor\n");
	printf("6 - mostrar os valores inseridos\n\n");
	printf("opcao: ");
	scanf("%d", &opcao);
	
	switch (opcao) /*Switch/case � uma estrutura de condi��o que define o c�digo a ser executado*/
	{
		case 1: /*m�dia simples*/
			soma = num1+num2+num3+num4+num5;
			printf("o resultado da media aritmetica simples: %f \n", soma/5);
			system("pause"); /*usado para n�o deixar um teste fechar imediatamente*/
		break; /*usado para encerrar o programa*/
		
		case 2: /*m�dia ponderada*/
			printf("primeiro valor digitado: %d", num1);    printf("   insira o peso: "); scanf("%d", &p1);
			printf("segundo valor digitado: %d", num2);     printf("   insira o peso: "); scanf("%d", &p2);
			printf("terceiro valor digitado: %d", num3);    printf("   insira o peso: "); scanf("%d", &p3);
			printf("quarto valor digitado: %d", num4);      printf("   insira o peso: "); scanf("%d", &p4);
			printf("quinto valor digitado: %d", num5);      printf("   insira o peso: "); scanf("%d", &p5);
			soma = num1*p1 + num2*p2 + num3*p3 + num4*p4 + num5*p5;
			pesos = p1 + p2 + p3 + p4 + p5;
			printf("o resultado da media ponderada: %f \n", soma/pesos);
			system("pause"); /*usado para n�o deixar um teste fechar imediatamente*/
		break; /*usado para encerrar o programa*/
		
		case 3: /*desvio padr�o*/
			soma = num1 + num2 + num3 + num4 + num5;
			media= soma/5;
			x = num1 - media; 
			y = num2 - media;
			z = num3 - media;
			w = num4 - media;
			t = num5 - media;
			A = pow (x, 2);
			B = pow (y, 2);
			C = pow (z, 2);
			D = pow (w, 2);
			E = pow (t, 2);
			d1 = A + B + C + D + E;
			d2 = d1/5;
			desvio = sqrt (d2);
			printf("o resultado do desvio padrao: %f \n", desvio);
			system("pause");  /*usado para n�o deixar um teste fechar imediatamente*/
		break; /*usado para encerrar o programa*/
			
			
		case 4: /*maior valor*/
            maior = num1;
            menor = num1;
            if (num2 < menor)
                menor = num2;
            if (num2 > maior)
                maior = num2;
            if (num3 < menor)
                menor = num3;
            if (num3 > maior)
                maior = num3;
            if (num4 < menor)
                menor = num4;
            if (num4 > maior)
                maior = num4;
            if (num5 > maior)
                maior = num5;
            if (num5 > maior)
                maior = num5;
            printf ("O Maior valor digitado foi: %d \n", maior);
            system("pause"); /*usado para n�o deixar um teste fechar imediatamente*/
        break; /*usado para encerrar o programa*/

        case 5: /*menor valor*/
            maior = num1;
            menor = num1;
            if (num2 < menor)
                menor = num2;
            if (num2 > maior)
                maior = num2;
            if (num3 < menor)
                menor = num3;
            if (num3 > maior)
                maior = num3;
            if (num4 < menor)
                menor = num4;
            if (num4 > maior)
                maior = num4;
            if (num5 > maior)
                maior = num5;
            if (num5 > maior)
                maior = num5;
            printf ("O Menor valor digitado foi: %d \n", menor);
            system("pause"); /*usado para n�o deixar um teste fechar imediatamente*/
        break; /*usado para encerrar o programa*/
		case 6: 
			printf("mostrar os valores inseridos: \n %d\n %d\n %d\n %d\n %d\n", num1,num2,num3,num4,num5); 
			system("pause"); /*usado para n�o deixar um teste fechar imediatamente*/
        break; /*usado para encerrar o programa*/
		
	}
			
}
