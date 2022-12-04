#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int voto, joao=0;
	char opcao='s';
	while (opcao=='s' || opcao=='S' && opcao=='n')
	{
		printf("***********************************\n"); printf("BEM VINDO(A) A ELEIÇÃO DA CIPA 2022\n"); printf("***********************************\n\n");
		
		printf(" \n - Nº do canditado 12135: João Garcia, Garcia, 30 anos, setor comercial; \n"); 
		printf(" \n - Nº do canditado 10123: Bianca Ferreira, Bia, 35 anos, setor operacional; \n"); 
		printf(" \n - Nº do canditado 41231: Ana Paula Ribeiro, Ana, 41 anos, setor financeiro; \n"); 
		printf(" \n - Nº do canditado 13172: Carlos Eduardo Siqueira, Cadu, 47 anos, setor administrativo; \n");
		printf("\n - Digite 01 para votar branco; \n"); 
		printf("\n - Digite 0 para votar nulo. \n\n");
		printf("Digite o número do seu canditado: ");
		scanf("%d",&voto);
		system("cls");
		
		if(voto==12135)
		{
			printf("\nNome:João Garcia \nApelido:Garcia \nIdade:30 anos \nSetor:Comercial\n");
			printf("\nDeseja confimar o voto? ");
			scanf("%s",&opcao);
			system("cls");
			if(opcao=='s')
			{
				printf("\nSeu voto foi confirmado!\n");
				joao=joao+1;		
				system("pause");
				system("cls");			
			}						
		}
		else
		if(voto==10123)
		{
			printf("\nNome:Bianca Ferreira \nApelido:Bia \nIdade:35 anos \nSetor:Operacional \n");
			printf("\nDeseja confimar o voto? ");
			scanf("%s",&opcao);
			system("cls");
			if(opcao=='s')
			{
				printf("\nSeu voto foi confirmado!\n");
				system("pause");
				system("cls");	
			}
		}
		else
		if(voto==41231)
		{
			printf("\nNome:Ana Paula Ribeiro \nApelido:Ana \nIdade:41 anos \nSetor:Financeiro \n");
			printf("\nDeseja confimar o voto? ");
			scanf("%s",&opcao);
			system("cls");
			if(opcao=='s')
			{
				printf("\nSeu voto foi confirmado!\n");
				system("pause");
				system("cls");	
			}
		}
		else
		if(voto==13172)
		{
			printf("\nNome:Carlos Eduardo Siqueira \nApelido:Cadu \nIdade:47 anos \nSetor:Administrativo \n");
			printf("\nDeseja confimar o voto? ");
			scanf("%s",&opcao);
			system("cls");
			if(opcao=='s')
			{
				printf("\nSeu voto foi confirmado!\n");
				system("pause");
				system("cls");	
			}
		}
		else
		if(voto==01)
		{
			printf("\nVoto Branco\n");
			printf("\nDeseja confirmar o voto? ");
			scanf("%s",&opcao);
			system("cls");
			if(opcao=='s')
			{
				printf("\nVocê votou em branco!\n");
				system("pause");
				system("cls");	
			}
		}
		else
		if(voto==0)
		{
			printf("\nVoto Nulo\n");
			printf("\nDeseja confirmar o voto? ");
			scanf("%s",&opcao);
			system("cls");
			if(opcao=='s')
			{
				printf("\nVocê votou nulo!\n");
				system("pause");
				system("cls");	
			}
		}		
    }
	printf("Voto foi %d",joao);
	return 0;
}
