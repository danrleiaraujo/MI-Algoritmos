/*******************************************************************************
Autor: Danrlei Almeida Araujo
Componente Curricular: Algoritmos I
Concluido em: 27/12/2018
Declaro que este c�digo foi elaborado por mim de forma individual e n�o cont�m nenhum
trecho de c�digo de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e p�ginas ou documentos eletr�nicos da Internet. Qualquer trecho de c�digo
de outra autoria que n�o a minha est� destacado com uma cita��o para o autor e a fonte
do c�digo, e estou ciente que estes trechos n�o ser�o considerados para fins de avalia��o.
******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/************************************* S T R U C T ********************************/
typedef struct {  // incializa��o da struct para os cadastros.
	char titulo_projeto[100], autor[100], orientador[100];
	char coorientador[100], coautor[100],area_conhecimento[100], conceito [20];
	int codigo_projeto, nota;
}cadastro; //Nome da struct
/******************************************************************************************/

/******************************  INICIALIZANDO FUN��ES  *********************************************************************/

void area_conhecimento(cadastro participantes[], int num_area,int i); // fun��o para incrementar a area de conhecimento

void novo_projeto (cadastro participantes[], int tam_alloc, int i, int *num_p); // Adiciona novo participantes.

void add (cadastro participantes[],int i); // Adiciona um novo cadastro no txt.

void dar_nota (cadastro participantes[], cadastro aprovados[], int num_p, int i); // Da nota ao participantes

void ler_arquivo(cadastro participantes[],int i, int *num_p); //Fun��o para leitura de arquivo.

void ordenar (cadastro aprovados[], int num_p); // Orderna os aprovados.

void salvar_binario (cadastro aprovados[], int num_p); // Cria��o de arquivo BIN�RIO.

void carregar_binario (cadastro programacao[], int *num_p); // Carrega um arquivo BIN�RIO.

void desistencia (cadastro participantes[], int codigo);

/***************************************************************************************************************/

/************************************* M A I N ******************************************************************/
main(){
	int i=0, continuar = 0, num_p=0, codigo=0, tam_alloc=100;
	
	cadastro *participantes, *aprovados, *programacao; //ponteiros de struct
	
	system("color 79"); // Da cor a tela de compila��o.
	
	setlocale(LC_ALL,"Portuguese"); // acentua as palavras.
	
	do{ //loping de continue.
		int opcao[5]={0,0,0,0,0};
		while (opcao[0] < 1 || opcao[0] > 4 ){ // verifica��o de erro.
			printf("\t\tBem vindo � enquete\n\n");
			printf(" Digite a op��o desejada e tecle 'ENTER' \n\n");
			printf("\n\tO que deseja ?\n\n ");
			printf("[1] - Cadastrar proposta\n ");
			printf("[2] - Editar cadastros\n ");
			printf("[3] - Programa��o.\n ");
			printf("[4] - Sair. \n\n--> ");
			scanf("%d",&opcao[0]);
			getchar();
			system("cls");
		}
		
		switch (opcao[0]){
			case 1:
				participantes = (cadastro *) malloc (tam_alloc*sizeof(cadastro));
				ler_arquivo(participantes, i, &num_p); //l� os cadastros existentes.
				novo_projeto(participantes,i,tam_alloc,&num_p);
				printf("Cadastro Realizado com sucesso!\n");
				free(participantes);
				break;
			
			case 2:
				participantes = (cadastro *) malloc (tam_alloc*sizeof(cadastro));
				aprovados = (cadastro *) malloc (tam_alloc*sizeof(cadastro));
				ler_arquivo(participantes, i, &num_p); //l� os cadastros existentes.
				while (opcao[1]<1 || opcao[1]>2){ //verifica��o de erro.
					printf("\tEDITAR CADASTROS\n [1] - Dar notas / Conceito\n [2] - Desist�ncia / Cancelamento de cadastro\n\n --> ");
					scanf("%d",&opcao[1]);
					getchar();
				}
				if (opcao[1] == 1){
					dar_nota(participantes,aprovados,num_p, i);
				}
				else {
					printf("Digite o c�digo do cadastro:\n");
					scanf("%d",codigo);
					desistencia(participantes, codigo);
				}
				free(aprovados);
				free(participantes);
				break;
				
			
			case 3:
				programacao = (cadastro *) malloc (65*sizeof(cadastro));
				carregar_binario(programacao, num_p);
				printf("\tDIA 1:\n");
				for(i=0;i>32;i++){
					printf("Participante %d\n",i+1);
					printf("%d\n",programacao[i].codigo_projeto);
					printf("%s",programacao[i].titulo_projeto);
					printf("%s",programacao[i].area_conhecimento);
					printf("%s",programacao[i].autor);
					printf("%s",programacao[i].orientador);
					printf("%s",programacao[i].coautor); 
					printf("%s",programacao[i].coorientador);  
				}
				printf("\tDIA 2:\n");
				for(i=32;i>64;i++){
					printf("Participante %d\n",i+1);
					printf("%d\n",programacao[i].codigo_projeto);
					printf("%s",programacao[i].titulo_projeto);
					printf("%s",programacao[i].area_conhecimento);
					printf("%s",programacao[i].autor);
					printf("%s",programacao[i].orientador);
					printf("%s",programacao[i].coautor); 
					printf("%s",programacao[i].coorientador); 
				}
				free(programacao);				
				break;
				
			case 4:
				printf("Volte sempre!\n");
				break;			
		}
			
		if(opcao[0] == 4){
			continuar = 0;
		}
		else{
			printf("Deseja retornar o menu principal ?\n [1] - Sim\n [2] - N�o\n");
			scanf("%d",&continuar);
			getchar();
		}
		system("cls");
	} while(continuar == 1); //verifica��o para o looping
	
	/*libera��o de espa�o da aloca��o dinamica*/
	
	
	
}
/********************************************************************************************************************************************************************/


/**************************************************  F U N � � E S  ********************************************************/
//fun��o para ler o arquivo com cadastros.
void ler_arquivo(cadastro participantes[],int i, int *num_p){ 
	FILE *file;
	int x;
	file = fopen ("cadastros.txt","r");
	fscanf(file,"%d",&x); //quantidade de participantes
	fgetc(file);
	*num_p= x;
	
	while (feof(file) == 0){
		
		fscanf (file,"%d",&participantes[i].codigo_projeto); //coloca o c�digo do projeto no .txt
		fgetc(file); //pega o espa�o em branco
		fgets (participantes[i].titulo_projeto, 100, file); //coloca o t�tulo do projeto no .txt
		fgets (participantes[i].area_conhecimento,100,file);//coloca a area de conhecimento do projeto no .txt
		fgets (participantes[i].autor,100, file);	//coloca o autor no .txt
		fgets (participantes[i].orientador,100, file);  //coloca o orientador no .txt
		fgets (participantes[i].coautor,100, file);  //coloca o coautor se existir no .txt
		fgets (participantes[i].coorientador,100, file);  //coloca o coorientador se existir no .txt
		fgetc(file); //pega o espa�o em branco

		i++;
	}
	fclose(file); //fecha a fun��o.
}
//*******************************************************************************************************************************************
// Novo cadastro
void novo_projeto(cadastro participantes[], int i, int tam_alloc, int *num_p){
	int num_area, area[*num_p], continuar=0;
	i = i+*num_p;
	
 	do{	int p = 1;
		int opcao[2] = {0,0};
		printf("\t\tC A D A S T R O \n");
		printf("\t\t NUMERO -> %d\n",i);		
		printf("Qual o titulo do projeto ?\n --> ");
		fgets(participantes[i].titulo_projeto,100,stdin);
		
		printf("O projeto pertence a qual grupo? \n [1] - Ci�ncias da Sa�de\n [2] - Ciencias Exatas\n [3] - Ci�ncias Agr�rias\n");
		printf(" [4] - Engenharias\n [5] - Ci�ncias Sociais\n [6] - Ci�ncias Humanas\n [7] - Lingu�sticas, letras ou Artes\n --> ");
		scanf("%d",num_area);
		area[i] = num_area;
		getchar();
		area_conhecimento(participantes, num_area, i);
	
		
		printf("Qual o nome do autor principal ?\n --> ");
		fgets(participantes[i].autor,100,stdin);
	
		printf("Qual o nome do seu orientador ?\n --> ");
		fgets(participantes[i].orientador,100,stdin);
		
		//coautor
		while(opcao[0] >2 || opcao[0] < 1){
			printf("Existe um coautor ?\n [1] - Sim\n [2] - N�o\n --> ");
			scanf("%d",&opcao[0]);
			getchar();
		}
		if(opcao[0] == 1){ //se existir um coautor pergunta e pega o nome
			printf("Qual o nome do coautor ?\n --> ");
			fgets(participantes[i].coautor,100,stdin);
		}
		else{ //caso contrario, add inexistente a variavel correspondente
			strcpy(participantes[i].coautor, "inexistente\n");
		}
		
		//coorientador
		while(opcao[1] >2 || opcao[1] < 1){
			printf("Existe um coorientador?\n [1] - Sim\n [2] - N�o\n --> ");
			scanf("%d",&opcao[1]);
			getchar();
		}	
		if(opcao[1] == 1){ //se existir um coorientador pergunta e pega o nome.
			printf("Qual o nome do seu coorientador ?\n --> ");
			fgets(participantes[i].coorientador,100,stdin);
		}
		else{ //caso contrario, add inexistente a variavel correspondente
			strcpy(participantes[i].coorientador, "inexistente\n");
		}
		if (area[i] == area[i-1]){
			participantes[i].codigo_projeto = (2018*10000)+((p+1)*100) + num_area;
		}
		else{
			participantes[i].codigo_projeto = (2018*10000)+(p*100) + num_area; //c�digo do projeto
		}
		
		printf(" Seu c�digo � : %d .\n Por favor anote, para caso de futura desist�ncia.\n",participantes[i].codigo_projeto);
		i++;
		printf("Novo projeto ?\n [1] - Sim\n [2] - N�o\n --> ");
		scanf("%d",&continuar);
		getchar();
	}while (continuar == 1);
	*num_p = *num_p + i;
	add(participantes,i); //fun��o para salvar em .txt

}
//*******************************************************************************************************************************************
void area_conhecimento(cadastro participantes[], int num_area,int num_p){
	switch (num_area){
		case 1:
			strcpy(participantes[num_p].area_conhecimento, "Ci�ncias da Sa�de\n");
			break;
		case 2:
			strcpy(participantes[num_p].area_conhecimento, "Ciencias Exatas\n");
			break;
		case 3:
			strcpy(participantes[num_p].area_conhecimento, "Ci�ncias Agr�rias\n");
			break;
		case 4:
			strcpy(participantes[num_p].area_conhecimento, "Engenharias\n");
			break;
		case 5:
			strcpy(participantes[num_p].area_conhecimento, "Ci�ncias Sociais\n");
			break;
		case 6:
			strcpy(participantes[num_p].area_conhecimento, "Ci�ncias Humanas\n");
			break;
		case 7:
			strcpy(participantes[num_p].area_conhecimento, "Lingu�sticas, letras ou Artes\n");
			break;
	}
}
//*******************************************************************************************************************************************
void add (cadastro participantes[],int i){ //adiciona o cadastro do participantes no .txt
	FILE *file;
	int x=0;
	if (file == NULL || i ==1){
		file = fopen ("cadastros.txt","w"); // o ponteiro abre o arquivo com a func�o = "w" - criar ou anexar.
	}
	else{
		file = fopen ("cadastros.txt","a"); // o ponteiro abre o arquivo com a func�o = "a" - acrescentar.
	}
	fprintf(file,"%d\n",i);

	
	while(x < i ){
		
		fprintf(file,"%d\n",participantes[x].codigo_projeto); //coloca o c�digo do projeto no .txt
		fprintf(file,"%s",participantes[x].titulo_projeto); //coloca o t�tulo do projeto no .txt
		fprintf(file,"%s",participantes[x].area_conhecimento);//coloca a area de conhecimento do projeto no .txt
		fprintf(file,"%s",participantes[x].autor);	//coloca o autor no .txt
		fprintf(file,"%s",participantes[x].orientador);  //coloca o orientador no .txt
		fprintf(file,"%s",participantes[x].coautor);  //coloca o coautor se existir no .txt
		fprintf(file,"%s",participantes[x].coorientador);  //coloca o coorientador se existir no .txt
		fprintf(file,"\n");
		x++;	
	}
	fclose(file); //fecha a fun��o.
}
//*******************************************************************************************************************************************
void dar_nota (cadastro participantes[], cadastro aprovados[], int num_p, int i){
	int conceito, num_aprovados ;
	for (i = 0; i < num_p; i++){
		printf(" Cadastro N�mero = %d\n",i+1);
		printf(" C�digo %d\n",participantes[i].codigo_projeto); 
		printf(" Titulo : %s",participantes[i].titulo_projeto);
		printf(" �rea de conhecimento : %s",participantes[i].area_conhecimento);
		printf(" Autor : %s",participantes[i].autor);
		printf(" Orientador : %s",participantes[i].orientador);  
		printf(" Coautor : %s",participantes[i].coautor); 
		printf(" Coorientador : %s",participantes[i].coorientador);  
		printf("Qual a nota do participantes?\n --> ");
		scanf("%d",& participantes[i].nota);
		getchar();
		do{
			printf("Qual o conceito do participantes?\n [1] - Aprovado\n [2] - Reprovado\n --> ");
			scanf("%d",&conceito);
			if ( conceito == 1){
				strcpy(participantes[i].conceito,"Aprovado");
				aprovados = participantes;
				num_aprovados++;
			}
			else if (conceito == 2){
				strcpy(participantes[i].conceito,"Reprovado");
			}
			else{
				printf("N�mero inv�lido!");
				system ("pause");
			}
		}while(conceito < 1 || conceito > 2);
	}
	ordenar(aprovados,num_p);
	salvar_binario (aprovados,num_p);
}
//*******************************************************************************************************************************************

// Ordena o vetor de struct
void ordenar(cadastro aprovados[], int num_p){
	cadastro aux;
	int j,s,t;
	t=num_p;
	do{
		s=1;
		t=t-1;
		for(j=0; j<t; j=j+1)
		if(aprovados[j].codigo_projeto>aprovados[j+1].codigo_projeto){
			aux=aprovados[j];
			aprovados[j]= aprovados[j+1];
			aprovados[j+1] = aux;
			s=0;
		}
	} while(s == 0);
}
//*******************************************************************************************************************************************

// Cria um arquivo bin�rio para grava��o
void salvar_binario (cadastro aprovados[], int num_p){
	FILE *bin;
	
	bin = fopen("programacao.bin", "wb");  
	
	if (bin == NULL){ // Se n�o conseguiu criar
	    printf("Problemas na cria��o do arquivo\n");
		return;
	}
		fwrite(&num_p, sizeof(int), 1, bin);
		fwrite (aprovados, sizeof(cadastro), num_p, bin);
	fclose(bin);
}
//*******************************************************************************************************************************************

// L� um arquivo bin�rio
void carregar_binario (cadastro programacao[], int *num_p){ 
	FILE *bin;

	bin = fopen("programacao.bin", "rb"); 
	
	if (bin == NULL){ // Se n�o conseguiu ler	
	    printf("Problemas na leitura do arquivo\n");
		return;
	}

		fread(&num_p, sizeof(int), 1, bin);
		fread(programacao, sizeof(cadastro), num_p, bin);
	
	fclose(bin);
	
}
//*******************************************************************************************************************************************/

void desistencia (cadastro participantes[], int codigo){
	int i = 0;
	while (participantes[i].codigo_projeto =! codigo){
		i++;
	}
	if(participantes[i].codigo_projeto == codigo){
		while (participantes[i].codigo_projeto =! NULL){
			participantes[i]= participantes[i+1];
			i++;
		}
	}
	i = 1;
	add(participantes,i);
	
}
