/*******************************************************************************
Autor: Danrlei Almeida Araujo
Componente Curricular: Algoritmos I
Concluido em: 27/11/2018
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void lembrete();
void add();

int import_quest (char arq_quest[], char questoes [100][150], int cod_escala_q[]);
void import_escala (char arq_escala[], char s[50][50][100], int tam_esc[], int cod_esc[]);
void import_respost(char arq_resposta[], char cursos[100][150], char sexo[100][150], char idade[100][150], char respostas[100][150], int quant_respostas);

main(){
	int opcao[10], cod_esc[100], tam_esc[100], cod_escala_q[100],idade[1000],resposta[1000][100];
	int i=0, j=0, k=0, maxq=0, z=0, entrevistado=0, op=0, quant_respostas=0;
	char s[50][50][100], questoes[100][150], cursos[1000][100], sexo[1000][100], respostas[1000][150];
	char arq_resposta[100], arq_escala[100], arq_quest[100];

	setlocale(LC_ALL,"Portuguese"); //acentua as palavras.
	
	printf("\t\tBem vindo � enquete\n\n");
	do{
		printf("Digite a op��o desejada e tecle 'ENTER' \n\n");
		printf("\nO que deseja ?\n\n ");
		printf("[1] - Aplicar pesquisa\n ");
		printf("[2] - Ver resultado\n ");
		printf("[3] - Sair. \n\n");
		scanf("%d",&opcao[0]); 
		getchar();
		system("cls");
		switch(opcao[0]){
			case 1: // Aplicar pesquisa.
				printf(" Qual arquivo se encontra as escalas?\n");
				lembrete();
				gets(arq_escala);
				import_escala(arq_escala, s, cod_esc, tam_esc);
				system("cls");
				printf(" Escalas importadas...\n Digite agora, o arquivo que se encontra as quest�es.\n");
				lembrete();
				gets(arq_quest);
				import_quest(arq_quest, questoes, cod_escala_q);
				maxq=import_quest(arq_quest, questoes, cod_escala_q);
				system("cls");
				printf("Bem, importado as escalas e as quest�es, ja podemos come�ar ...\n");
				system("pause");
				system("cls");
				printf(" \t\tPARTE DEMOGR�FICA\n");
				printf(" O que está cursando?\n ");
				gets(cursos[entrevistado]);
				printf(" Qual seu sexo?\n  Masculino / Feminino\n");
				gets(sexo[entrevistado]);
				printf(" Qual sua idade?\n");
				scanf("%d",&idade[entrevistado]);
				//entrevista		
				printf("\t\tINICIANDO QUESTION�RIO:\n");
				for (i= 0 ; i <= maxq; i++){
					printf("Quest�o %d :\n %s",i,questoes[i]);
					for(j=0; cod_escala_q [i] != cod_esc[j] ; j++ ){
					}
					if(cod_escala_q[i] == cod_esc[j] ){
						for(z=0; z <= tam_esc[j]; z++){
							op=z+1;
							printf("%d -%s\n",op,s[j][z]);	
						}
					}
					scanf("%d",&resposta[entrevistado][i]);
				}
				break;
			case 2: // Ver resultado
				printf(" Deseja ver resultado de qual pesquisa ?\n Escreva o nome do arquivo em que ela se encontra:\n");
				lembrete();
				gets(arq_resposta);
				import_respost(arq_resposta, cursos, sexo, idade, respostas, quant_respostas);
				
				for (i= 0 ; i <= quant_respostas; i++){
					printf("Resposta %d :\n %s",i,cursos[i]);
				}
				
				break;
			case 3: // Sair.
				break;
			default:
				printf("Caractere invalido.\n");
		}
	}while(opcao[0] < 0 || opcao[0] > 3); //verificacao de erro
} //final da main()


void lembrete (){
	printf("~Lembre-se, quando colocar o nome do arquivo, use .txt no final~ <Exemplo: nome_do_arquivo.txt>\n");
}

void add(char resposta[]){
	FILE *file;
	file = fopen ("teste.txt","a"); // 1thd-->abre o arquivo,2thd-->escolhe se vai W- escrever ou sobrescrever; R- Ler; A- inserindo ou anexando.
	fputs(resposta,file);
	fclose(file); //fecha a funcao.
}

void import_escala (char arq_escala[],char s[50][50][100],int cod_esc[], int tam_esc[]) {
	FILE *file_e;
	char str[400];
	int i=0,j=0,k=0,x=0,y=0,z=0;
	
	file_e = fopen (arq_escala,"r"); // ponteiro abre o arquivo escrito e le o que tem dentro.
	if(file_e == NULL){
		printf("Arquivo nao encontrado.\n");
	}
	else{
		while (feof(file_e) == 0) {      //laco de repeticao enquanto final de arquivo nao for verdade.
			fscanf(file_e,"%d",&cod_esc[j]); //le o codigo da escala dentro do arquivo.
			fgetc(file_e); //pega o espa�o em branco
			fscanf(file_e,"%d",&tam_esc[j]); //le o tamanho da escala dentro do arquivo.
			fgetc(file_e); //pega o espa�o em branco
	  		fgets(str, 400, file_e);		   // le a string dentro do arquivo.
	  		while(str[i]!= '\n') {			// coloca as strings dentro da matriz atraves de um laco de repeticao.
	  			if (str[i] == ',') { 		// ve se tem uma virgula, caso tiver, substitui por um enter.
	  				s[x][y][z] = '\0';
	  				z = 0;
					y++;
				}
				else {
					s[x][y][z] = str[i];
					z++;
				}
				i++;
	  		} // fim while leitura string
	  		y = 0;
	  		i = 0;
	  		z = 0;
			if(	s[x][y][z] != '\0'){
				x++;	
			}
		j++;
	 	} // fim while linha
	 }
	 fclose(file_e); //fecha a funcao.
} //final da funcao import_esc

int import_quest (char arq_quest[], char questoes[100][150], int cod_escala_q[]){ // inicio de funcao
	FILE *fileq;
	int j=0;

	fileq = fopen (arq_quest,"r"); //abre o arquivo com o ponteiro para ler
	if(fileq == NULL){
		printf("Arquivo nao encontrado.\n");
	}
   else{
		while (feof(fileq) == 0) { // laco de repeticao para ler
			fgets(questoes[j], 400, fileq);		   // le a string dentro do arquivo e joga no vetor de string.	
			fscanf(fileq,"%d",&cod_escala_q[j]); //le o tamanho da escala dentro do arquivo e joga em uma variavel.	
			fgetc(fileq); //pega o espaco em branco
			j++; //incrementacao.	
		} // final do laco de repeticao
		return j;
	}
	fclose(fileq); //fecha a funcao.
} // fim de funcao	import_quest


void import_respost (char arq_resposta[], char cursos[100][150], char sexo[100][150], char idade[100][150], char respostas[100][150], int quant_repostas){
	FILE *file_r;
	int j=0;
	file_r = fopen (arq_resposta,"r"); // ponteiro abre o arquivo escrito e le o que tem dentro.
	if(file_r == NULL){
		printf("Arquivo nao encontrado.\n");
	}
	else{
		while (feof(file_r) == 0) { // laco de repeticao para ler
			fgets(cursos[j], 100, file_r);	
			printf ("%d --> curso: %s", j, cursos[j]);
			fgets(sexo[j], 100, file_r);		   	
			fgets(idade[j], 100, file_r);		   
			fgets(respostas[j], 100, file_r);		 
			quant_repostas++; //incrementacao.
			j++;	
		} // final do laco de repeticao
	 }
	 fclose(file_r); //fecha a funcao.
} //final da funcao import_respost


int media_arit(){
	float media = 0;
	media = (1) / (1) ; 
	//quant_respostas;
}
