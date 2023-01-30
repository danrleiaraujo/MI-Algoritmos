/*******************************************************************************
Autor: Danrlei Almeida Araujo
Componente Curricular: Algoritmos I
Concluido em: 10/10/2018
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese"); //acrescenta pontuação nos printf
	system("color 74");
	//variaveis gerais
	int idade=0,curso=0,faixaI=0,faixaII=0,faixaIII=0,reiniciar=0,sexo=0,masculino=0,feminino=0,pessoa=0,individual=0; 
	int engCivil=0,medicina=0,historia=0,vernaculas=0,resposta;

	//variaveis para a verificação de frequencia absoluta e relativa	
	float q1_ConcordoT=0,q1_Concordo=0,q1_ConcordoP=0,q1_DiscordoT=0,q1_Discordo=0,q1_DiscordoP=0;
	float q2_ConcordoT=0,q2_Concordo=0,q2_ConcordoP=0,q2_DiscordoT=0,q2_Discordo=0,q2_DiscordoP=0;
	float q3_ConcordoT=0,q3_Concordo=0,q3_ConcordoP=0,q3_DiscordoT=0,q3_Discordo=0,q3_DiscordoP=0;
	float q4_ConcordoT=0,q4_Concordo=0,q4_ConcordoP=0,q4_DiscordoT=0,q4_Discordo=0,q4_DiscordoP=0;
	float q5_ConcordoT=0,q5_Concordo=0,q5_ConcordoP=0,q5_DiscordoT=0,q5_Discordo=0,q5_DiscordoP=0;
	float q6_ConcordoT=0,q6_Concordo=0,q6_ConcordoP=0,q6_DiscordoT=0,q6_Discordo=0,q6_DiscordoP=0;
	float q7_ConcordoT=0,q7_Concordo=0,q7_ConcordoP=0,q7_DiscordoT=0,q7_Discordo=0,q7_DiscordoP=0;
	float q8_ConcordoT=0,q8_Concordo=0,q8_ConcordoP=0,q8_DiscordoT=0,q8_Discordo=0,q8_DiscordoP=0;	
	float q9_ConcordoT=0,q9_Concordo=0,q9_ConcordoP=0,q9_DiscordoT=0,q9_Discordo=0,q9_DiscordoP=0;
	float q10_ConcordoT=0,q10_Concordo=0,q10_ConcordoP=0,q10_DiscordoT=0,q10_Discordo=0,q10_DiscordoP=0;
	float q11_ConcordoT=0,q11_Concordo=0,q11_ConcordoP=0,q11_DiscordoT=0,q11_Discordo=0,q11_DiscordoP=0;
	float q12_ConcordoT=0,q12_Concordo=0,q12_ConcordoP=0,q12_DiscordoT=0,q12_Discordo=0,q12_DiscordoP=0;
	float q13_ConcordoT=0,q13_Concordo=0,q13_ConcordoP=0,q13_DiscordoT=0,q13_Discordo=0,q13_DiscordoP=0;
	float q14_ConcordoT=0,q14_Concordo=0,q14_ConcordoP=0,q14_DiscordoT=0,q14_Discordo=0,q14_DiscordoP=0;
	float q15_ConcordoT=0,q15_Concordo=0,q15_ConcordoP=0,q15_DiscordoT=0,q15_Discordo=0,q15_DiscordoP=0;	
	float q16_ConcordoT=0,q16_Concordo=0,q16_ConcordoP=0,q16_DiscordoT=0,q16_Discordo=0,q16_DiscordoP=0;
	float q17_ConcordoT=0,q17_Concordo=0,q17_ConcordoP=0,q17_DiscordoT=0,q17_Discordo=0,q17_DiscordoP=0;
	float quantConcordoT=0,quantConcordo=0,quantConcordoP=0,quantDiscordoT=0,quantDiscordo=0,quantDiscordoP=0;
	
	//Bloco do valor relativo pra cada questão
	float valorRCTQ1,valorRCQ1,valorRCPQ1,valorRDTQ1,valorRDQ1,valorRDPQ1;
	float valorRCTQ2,valorRCQ2,valorRCPQ2,valorRDTQ2,valorRDQ2,valorRDPQ2;
	float valorRCTQ3,valorRCQ3,valorRCPQ3,valorRDTQ3,valorRDQ3,valorRDPQ3;
	float valorRCTQ4,valorRCQ4,valorRCPQ4,valorRDTQ4,valorRDQ4,valorRDPQ4;
	float valorRCTQ5,valorRCQ5,valorRCPQ5,valorRDTQ5,valorRDQ5,valorRDPQ5;
	float valorRCTQ6,valorRCQ6,valorRCPQ6,valorRDTQ6,valorRDQ6,valorRDPQ6;
	float valorRCTQ7,valorRCQ7,valorRCPQ7,valorRDTQ7,valorRDQ7,valorRDPQ7;
	float valorRCTQ8,valorRCQ8,valorRCPQ8,valorRDTQ8,valorRDQ8,valorRDPQ8;	
	float valorRCTQ9,valorRCQ9,valorRCPQ9,valorRDTQ9,valorRDQ9,valorRDPQ9;
	float valorRCTQ10,valorRCQ10,valorRCPQ10,valorRDTQ10,valorRDQ10,valorRDPQ10;
	float valorRCTQ11,valorRCQ11,valorRCPQ11,valorRDTQ11,valorRDQ11,valorRDPQ11;
	float valorRCTQ12,valorRCQ12,valorRCPQ12,valorRDTQ12,valorRDQ12,valorRDPQ12;
	float valorRCTQ13,valorRCQ13,valorRCPQ13,valorRDTQ13,valorRDQ13,valorRDPQ13;
	float valorRCTQ14,valorRCQ14,valorRCPQ14,valorRDTQ14,valorRDQ14,valorRDPQ14;
	float valorRCTQ15,valorRCQ15,valorRCPQ15,valorRDTQ15,valorRDQ15,valorRDPQ15;
	float valorRCTQ16,valorRCQ16,valorRCPQ16,valorRDTQ16,valorRDQ16,valorRDPQ16;
	float valorRCTQ17,valorRCQ17,valorRCPQ17,valorRDTQ17,valorRDQ17,valorRDPQ17;
		
	//variaveis das respostas submissivas
	float subConcordoT=0,subConcordo=0,subConcordoP=0,subDiscordoT=0,subDiscordo=0,subDiscordoP=0; 

	//variaveis das respostas agressivas
	float agreConcordoT=0,agreConcordo=0,agreConcordoP=0,agreDiscordoT=0,agreDiscordo=0,agreDiscordoP=0; 
	
	//variaveis das respostas convencionalistas
	float convConcordoT=0,convConcordo=0,convConcordoP=0,convDiscordoT=0,convDiscordo=0,convDiscordoP=0; 

 	//variaveis para score individual
	float mediaConv=0,mediaSub=0,mediaAgre=0;
	
	//variaveis das médias gerais
	float geralMediaConv=0,geralMediaSub=0,geralMediaAgre=0,geral=0,indice=0;
	
	//variaveis da média de acordo com o genero
	float feminino_mediaConv=0,feminino_mediaSub=0,feminino_mediaAgre=0,feminino_indice=0,feminino_geral=0;
	float masculino_mediaConv=0,masculino_mediaSub=0,masculino_mediaAgre=0,masculino_indice=0,masculino_geral=0;
	
	//variaveis da média de acordo com o curso
	float engCivil_mediaConv=0,engCivil_mediaSub=0,engCivil_mediaAgre=0,engCivil_indice=0,engCivil_geral=0;
	float medicina_mediaConv=0,medicina_mediaSub=0,medicina_mediaAgre=0,medicina_indice=0,medicina_geral=0;
	float historia_mediaConv=0,historia_mediaSub=0,historia_mediaAgre=0,historia_indice=0,historia_geral=0;
	float vernaculas_mediaConv=0,vernaculas_mediaSub=0,vernaculas_mediaAgre=0,vernaculas_indice=0,vernaculas_geral=0;
	
	//variaveis da média de acordo com a faixa etaria
	float faixaI_mediaConv=0,faixaI_mediaSub=0,faixaI_mediaAgre=0,faixaI_indice=0,faixaI_geral=0; 
	float faixaII_mediaConv=0,faixaII_mediaSub=0,faixaII_mediaAgre=0,faixaII_indice=0,faixaII_geral=0;
	float faixaIII_mediaConv=0,faixaIII_mediaSub=0,faixaIII_mediaAgre=0,faixaIII_indice=0,faixaIII_geral=0;
	
	do{ //inicio do looping
		printf("Bem vindo a pesquisa sobre o Medo da Violência e o Apoio ao Autoritarismo no Brasil\nLembre-se, responda apenas com números\n");

		/*Bloco da idade*/
		do{ //looping da idade para numeros inválidos
			printf("Por favor, antes de continuar digite sua idade\n");
			scanf("%d",&idade);
			fflush(stdin);
			if(idade>=18 && idade<=20){
				printf("Entre 18 e 20 anos, ok\n");
				faixaI++;}
			else if(idade>=21 && idade<=23){
				printf("Entre 21 e 23 anos, ok\n");
				faixaII++;	}
			else if(idade>23){
				printf("Acima de 23 anos, ok\n");
				faixaIII++;	}
			else{
				printf("Sinto muito, mas você precisa ter pelo menos 18 anos para participar.\n");}	
			}while(idade<18);
			
		//Bloco do genero
		do{	//looping para resposta errada no genero
			printf("Agora digite seu sexo\n < 1 >-Masculino\ < 2 >-Feminino\n");
			scanf("%d",&sexo);
			fflush(stdin);
			if(sexo==1){
				masculino++;}
			else if(sexo==2){
				feminino++;}
			else {
				printf("Por favor, apenas 1 ou 2\n");
			}}while (sexo>2 || sexo<=0);
			
		//Bloco de curso
		printf("Agora que sabemos sua idade e seu sexo, precisamos saber o que cursa\n");
		do{//looping para numeros invalidos
			printf("Digite o numero que representa o seu curso\n < 1 >-Eng. Civil\n < 2 >-Medicina\n < 3 >-História\n < 4 >-Letras Vernáculas\n");
			scanf("%d",&curso);
			fflush(stdin);
			if (curso==1){
				printf("Eng. Civil, ok.\n");
				engCivil++;}
			else if(curso==2){
				printf("Medicina, ok\n");
				medicina++;}
			else if(curso==3){
				printf("Historia, ok\n");
				historia++;}
			else if(curso==4){
				printf("Letras vernaculas, ok\n");
				vernaculas++;}
			else {
				printf("Número inválido\n");}
			}while(curso>4 || curso<=0);
			
		//Bloco da pesquisa
		printf("Bem, agora vamos dar iniciativa a pesquisa\n\n");
		system("pause");//pausa a tela
		system("cls");// limpa a tela
		printf("Para responder e simples:\n Digite < 1 > para concordo totalmente\n Digite < 2 > para concordo\n Digite < 3 > para concordo parcialmente\n Digite < 4 > para discorda parcialmente\n Digite < 5 > para discordo\n Digite < 6 > para discordo totalmente\n ");
		do{//looping para numeros invalidos
			printf("1- O que este país necessita, principalmente, antes de leis ou planos políticos, é de alguns líderes valentes, incansáveis e dedicados em quem o povo possa depositar a sua fé\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				subConcordoT=subConcordoT+6;
				q1_ConcordoT++;}
			else if(resposta==2){
				subConcordo=subConcordo+5;
				q1_Concordo++;}
			else if(resposta==3){
				subConcordoP=subConcordoP+4;
				q1_ConcordoP++;}
			else if(resposta==4){
				subDiscordoP=subDiscordoP+3;
				q1_DiscordoP++;}
			else if(resposta==5){
				subDiscordo=subDiscordo+2;
				q1_Discordo++;}
			else if(resposta==6){
				subDiscordoT=subDiscordoT+1;
				q1_DiscordoT++;}
			else{
			printf("Número inválido\n");}
		}while (resposta>7 || resposta<=0);
		do{	printf("2- A obediência e o respeito à autoridade são as principais virtudes que devemos ensinar as nossas crianças\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				subConcordoT=subConcordoT+6;
				q2_ConcordoT++;}
			else if(resposta==2){
				subConcordo=subConcordo+5;
				q2_Concordo++;}
			else if(resposta==3){
				subConcordoP=subConcordoP+4;
				q2_ConcordoP++;}
			else if(resposta==4){
				subDiscordoP=subDiscordoP+3;
				q2_DiscordoP++;}
			else if(resposta==5){
				subDiscordo=subDiscordo+2;
				q2_Discordo++;}
			else if(resposta==6){
				subDiscordoT=subDiscordoT+1;
				q2_DiscordoT++;}
			else{
			printf("Número inválido\n");}
		}while (resposta>7 || resposta<=0);
		do{	printf("3- Não há nada pior do que uma pessoa que não sente profundo amor, gratidão e respeito por seus pais\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				subConcordoT=subConcordoT+6;
				q3_ConcordoT++;}
			else if(resposta==2){
				subConcordo=subConcordo+5;
				q3_Concordo++;}
			else if(resposta==3){
				subConcordoP=subConcordoP+4;
				q3_ConcordoP++;}
			else if(resposta==4){
				subDiscordoP=subDiscordoP+3;
				q3_DiscordoP++;}
			else if(resposta==5){
				subDiscordo=subDiscordo+2;
				q3_Discordo++;}
			else if(resposta==6){
				subDiscordoT=subDiscordoT+1;
				q3_DiscordoT++;}
			else{
			printf("Número inválido\n");}
		}while (resposta>7 || resposta<=0);
		do{	printf("4- Nenhuma pessoa decente, normal e em seu são juízo pensaria em ofender um amigo ou parente próximo\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				subConcordoT=subConcordoT+6;
				q4_ConcordoT++;}
			else if(resposta==2){
				subConcordo=subConcordo+5;
				q4_Concordo++;}
			else if(resposta==3){
				subConcordoP=subConcordoP+4;
				q4_ConcordoP++;}
			else if(resposta==4){
				subDiscordoP=subDiscordoP+3;
				q4_DiscordoP++;}
			else if(resposta==5){
				subDiscordo=subDiscordo+2;
				q4_Discordo++;}
			else if(resposta==6){
				subDiscordoT=subDiscordoT+1;
				q4_DiscordoT++;}
			else{
			printf("Número inválido\n");}
		}while (resposta>7 || resposta<=0);
		do{	printf("5- O policial é um guerreiro de Deus para impor a ordem e proteger as pessoas de bem\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				subConcordoT=subConcordoT+6;
				q5_ConcordoT++;}
			else if(resposta==2){
				subConcordo=subConcordo+5;
				q5_Concordo++;}
			else if(resposta==3){
				subConcordoP=subConcordoP+4;
				q5_ConcordoP++;}
			else if(resposta==4){
				subDiscordoP=subDiscordoP+3;
				q5_DiscordoP++;}
			else if(resposta==5){
				subDiscordo=subDiscordo+2;
				q5_Discordo++;}
			else if(resposta==6){
				subDiscordoT=subDiscordoT+1;
				q5_DiscordoT++;}
			else{
			printf("Número inválido\n");}
		}while (resposta>7 || resposta<=0);
		do{	printf("6- A maioria de nossos problemas sociais estaria resolvida se pudéssemos nos livrar das pessoas imorais, dos marginais e dos pervertidos\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q6_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q6_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q6_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q6_DiscordoP++;}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q6_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q6_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("7- Se falássemos menos e trabalhássemos mais, todos estaríamos melhor\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q7_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q7_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q7_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q7_DiscordoP++;}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q7_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q7_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("8- Deve-se castigar sempre todo insulto à nossa honra\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q8_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q8_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q8_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q8_DiscordoP++;	}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q8_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q8_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("9- Os crimes sexuais tais como o estupro ou ataques a crianças merecem mais que prisão; quem comete esses crimes deveria receber punição física publicamente ou receber um castigo pior\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q9_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q9_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q9_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q9_DiscordoP++;}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q9_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q9_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("10-Os homossexuais são quase criminosos e deveriam receber um castigo severo\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q10_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q10_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q10_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q10_DiscordoP++;}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q10_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q10_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("11- Às vezes, os jovens têm ideias rebeldes que, com os anos, deverão superar para acalmar os seus pensamentos\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q11_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q11_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q11_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q11_DiscordoP++;}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q11_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q11_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("12- Hoje em dia, as pessoas se intrometem cada vez mais em assuntos que deveriam ser somente pessoais e privados\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				agreConcordoT=agreConcordoT+6;
				q12_ConcordoT++;}
			else if(resposta==2){
				agreConcordo=agreConcordo+5;
				q12_Concordo++;}
			else if(resposta==3){
				agreConcordoP=agreConcordoP+4;
				q12_ConcordoP++;}
			else if(resposta==4){
				agreDiscordoP=agreDiscordoP+3;
				q12_DiscordoP++;}
			else if(resposta==5){
				agreDiscordo=agreDiscordo+2;
				q12_Discordo++;}
			else if(resposta==6){
				agreDiscordoT=agreDiscordoT+1;
				q12_DiscordoT++;}
			else{
			printf("Número inválido\n");
			}}while (resposta>7 || resposta<=0);
		do{	printf("13- A ciência tem o seu lugar, mas há muitas coisas importantes que a mente humana jamais poderá compreender\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				convConcordoT=convConcordoT+6;
				q13_ConcordoT++;}
			else if(resposta==2){
				convConcordo=convConcordo+5;
				q13_Concordo++;}
			else if(resposta==3){
				convConcordoP=convConcordoP+4;
				q13_ConcordoP++;}
			else if(resposta==4){
				convDiscordoP=convDiscordoP+3;
				q13_DiscordoP++;}
			else if(resposta==5){
				convDiscordo=convDiscordo+2;
				q13_Discordo++;}
			else if(resposta==6){
				convDiscordoT=convDiscordoT+1;
				q13_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("14- Os homens podem ser divididos  em duas classes definidas:  os fracos e os fortes\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				convConcordoT=convConcordoT+6;
				q14_ConcordoT++;}
			else if(resposta==2){
				convConcordo=convConcordo+5;
				q14_Concordo++;}
			else if(resposta==3){
				convConcordoP=convConcordoP+4;
				q14_ConcordoP++;}
			else if(resposta==4){
				convDiscordoP=convDiscordoP+3;
				q14_DiscordoP++;}
			else if(resposta==5){
				convDiscordo=convDiscordo+2;
				q14_Discordo++;}
			else if(resposta==6){
				convDiscordoT=convDiscordoT+1;
				q14_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("15- Um indivíduo de más maneiras, maus costumes e má educação dificilmente pode fazer amizade com pessoas decentes\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				convConcordoT=convConcordoT+6;
				q15_ConcordoT++;}
			else if(resposta==2){
				convConcordo=convConcordo+5;
				q15_Concordo++;}
			else if(resposta==3){
				convConcordoP=convConcordoP+4;
				q15_ConcordoP++;}
			else if(resposta==4){
				convDiscordoP=convDiscordoP+3;
				q15_DiscordoP++;}
			else if(resposta==5){
				convDiscordo=convDiscordo+2;
				q15_Discordo++;}
			else if(resposta==6){
				convDiscordoT=convDiscordoT+1;
				q15_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("16- Todos devemos ter fé absoluta em um poder sobrenatural, cujas decisões devemos acatar\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				convConcordoT=convConcordoT+6;
				q16_ConcordoT++;}
			else if(resposta==2){
				convConcordo=convConcordo+5;
				q16_Concordo++;}
			else if(resposta==3){
				convConcordoP=convConcordoP+4;
				q16_ConcordoP++;}
			else if(resposta==4){
				convDiscordoP=convDiscordoP+3;
				q16_DiscordoT++;}
			else if(resposta==5){
				convDiscordo=convDiscordo+2;
				q16_Discordo++;}
			else if(resposta==6){
				convDiscordoT=convDiscordoT+1;
				q16_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		do{	printf("17- Pobreza é consequência da falta de vontade de querer trabalhar\n");
			scanf("%d",&resposta);
			fflush(stdin);
			if (resposta==1){
				convConcordoT=convConcordoT+6;
				q17_ConcordoT++;}
			else if(resposta==2){
				convConcordo=convConcordo+5;
				q17_Concordo++;}
			else if(resposta==3){
				convConcordoP=convConcordoP+4;
				q17_ConcordoP++;}
			else if(resposta==4){
				convDiscordoP=convDiscordoP+3;
				q17_DiscordoP++;}
			else if(resposta==5){
				convDiscordo=convDiscordo+2;
				q17_Discordo++;}
			else if(resposta==6){
				convDiscordoT=convDiscordoT+1;
				q17_DiscordoT++;}
			else{
			printf("Número inválido\n");}
			}while (resposta>7 || resposta<=0);
		system("cls"); 
		pessoa++;
		
		//Bloco do score individual
		printf("Deseja ver o scorer individual ? Digite <0> se sim, ou qualquer outro numero se não.");
		scanf("%d",&individual);
		if (individual==0){
		mediaSub=((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5);
		mediaAgre=((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7);
		mediaConv=((convConcordoT+convConcordo+convConcordoP+convDiscordoT+convDiscordo+convDiscordoP)/5);
		printf("Score de submissão: %.2f\n",mediaSub);
		printf("Score de agressividade: %.2f\n",mediaAgre);
		printf("Score de convencionalismo: %.2f \n \n",mediaConv);
		system("pause");}
		else{
			printf("Então vamos adiante...");}
		system("cls"); 
		
		//qtd de respostas		
		quantConcordoT=q1_ConcordoT+q2_ConcordoT+q3_ConcordoT+q4_ConcordoT+q5_ConcordoT+q6_ConcordoT+q7_ConcordoT+q8_ConcordoT+q9_ConcordoT+q10_ConcordoT+q11_ConcordoT+q12_ConcordoT+q13_ConcordoT+q14_ConcordoT+q15_ConcordoT+q16_ConcordoT+q17_ConcordoT;
		quantConcordo=q1_Concordo+q2_Concordo+q3_Concordo+q4_Concordo+q5_Concordo+q6_Concordo+q7_Concordo+q8_Concordo+q9_Concordo+q10_Concordo+q11_Concordo+q12_Concordo+q13_Concordo+q14_Concordo+q15_Concordo+q16_Concordo+q17_Concordo;
		quantConcordoP=q1_ConcordoP+q2_ConcordoP+q3_ConcordoP+q4_ConcordoP+q5_ConcordoP+q6_ConcordoP+q7_ConcordoP+q8_ConcordoP+q9_ConcordoP+q10_ConcordoP+q11_ConcordoP+q12_ConcordoP+q13_ConcordoP+q14_ConcordoP+q15_ConcordoP+q16_ConcordoP+q17_ConcordoP;
		quantDiscordoT=q1_DiscordoT+q2_DiscordoT+q3_DiscordoT+q4_DiscordoT+q5_DiscordoT+q6_DiscordoT+q7_DiscordoT+q8_DiscordoT+q9_DiscordoT+q10_DiscordoT+q11_DiscordoT+q12_DiscordoT+q13_DiscordoT+q14_DiscordoT+q15_DiscordoT+q16_DiscordoT+q17_DiscordoT;
		quantDiscordo=q1_Discordo+q2_Discordo+q3_Discordo+q4_Discordo+q5_Discordo+q6_Discordo+q7_Discordo+q8_Discordo+q9_Discordo+q10_Discordo+q11_Discordo+q12_Discordo+q13_Discordo+q14_Discordo+q15_Discordo+q16_Discordo+q17_Discordo;
		quantDiscordoP=q1_DiscordoP+q2_DiscordoP+q3_DiscordoP+q4_DiscordoP+q5_DiscordoP+q6_DiscordoP+q7_DiscordoP+q8_DiscordoP+q9_DiscordoP+q10_DiscordoP+q11_DiscordoP+q12_DiscordoP+q13_DiscordoP+q14_DiscordoP+q15_DiscordoP+q16_DiscordoP+q17_DiscordoP;

		printf("RELAÇÃO DAS RESPOSTAS ATÉ O MOMENTO: \n\n");
		printf("Quantidades de Concordo totalmente : %.f \n",quantConcordoT);
		printf("Quantidades de Concordo: %.f \n",quantConcordo);
		printf("Quantidades de Concordo parcialmente: %.f \n",quantConcordoP);
		printf("Quantidade de Discordo parcialmente: %.f \n ",quantDiscordoP);
		printf("Quantidade de Discordo: %.f \n",quantDiscordo);
		printf("Quantidade de Discordo totalmente: %.f \n",quantDiscordoT);
		system("pause");
		
		//calculo do score geral
		geralMediaSub=(geralMediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
		geralMediaAgre=(geralMediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
		geralMediaConv=(geralMediaConv+((convConcordoT+convConcordo+convConcordoP+convDiscordoT+convDiscordo+convDiscordoP)/5));	
		
		//bloco de conta relação a idade
		if(idade>=18 && idade<=20){
			faixaI_mediaConv=(faixaI_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			faixaI_mediaSub=(faixaI_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			faixaI_mediaAgre=(faixaI_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			}
		else if(idade>=21 && idade<=23){
			faixaII_mediaConv=(faixaII_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			faixaII_mediaSub=(faixaII_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			faixaII_mediaAgre=(faixaII_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			}
		else {
			faixaIII_mediaConv=(faixaIII_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			faixaIII_mediaSub=(faixaIII_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			faixaIII_mediaAgre=(faixaIII_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			}
		
		//bloco de conta relação a genero
		if (sexo==1){
			masculino_mediaSub=(masculino_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			masculino_mediaAgre=(masculino_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			masculino_mediaConv=(masculino_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			}
		else {
			feminino_mediaConv=(feminino_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			feminino_mediaSub=(feminino_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			feminino_mediaAgre=(feminino_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
		}	 
		//bloco de conta relação a curso
		if (curso==1){
			engCivil_mediaSub=(engCivil_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			engCivil_mediaAgre=(engCivil_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			engCivil_mediaConv=(engCivil_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
		}
		else if (curso==2){
			medicina_mediaSub=(medicina_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			medicina_mediaAgre=(medicina_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			medicina_mediaConv=(medicina_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
		}
		else if (curso==3){
			historia_mediaSub=(historia_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			historia_mediaAgre=(historia_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			historia_mediaConv=(historia_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
		}
		else {
			vernaculas_mediaSub=(vernaculas_mediaSub+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
			vernaculas_mediaAgre=(vernaculas_mediaAgre+((agreConcordoT+agreConcordo+agreConcordoP+agreDiscordoT+agreDiscordo+agreDiscordoP)/7));
			vernaculas_mediaConv=(vernaculas_mediaConv+((subConcordoT+subConcordo+subConcordoP+subDiscordoT+subDiscordo+subDiscordoP)/5));
		}
		
		//zerando as variaveis das respostas
		subConcordoT=0,subConcordo=0,subConcordoP=0,subDiscordoT=0,subDiscordo=0,subDiscordoP=0; 
		agreConcordoT=0,agreConcordo=0,agreConcordoP=0,agreDiscordoT=0,agreDiscordo=0,agreDiscordoP=0;
		convConcordoT=0,convConcordo=0,convConcordoP=0,convDiscordoT=0,convDiscordo=0,convDiscordoP=0;	
		
		printf("\n Para outra pesquisa digite < 0 >\nSe quiser ver o resultado final digite qualquer outro numero.\n");
		scanf("%d",&reiniciar);
		system("cls");
		}while (reiniciar==0);
		
		//if para não dividir se não houver participante
	if (faixaI>0){
		faixaI_mediaConv=faixaI_mediaConv/faixaI;
		faixaI_mediaSub=faixaI_mediaSub/faixaI;
		faixaI_mediaAgre=faixaI_mediaAgre/faixaI;
		faixaI_geral=(faixaI_mediaConv+faixaI_mediaSub+faixaI_mediaAgre)/3;
		faixaI_indice=((faixaI_geral-1)*2);
		}
	if (faixaII>0){
		faixaII_mediaConv=faixaII_mediaConv/faixaII;
		faixaII_mediaSub=faixaII_mediaSub/faixaII;
		faixaII_mediaAgre=faixaII_mediaAgre/faixaII;
		faixaII_geral=(faixaII_mediaAgre+faixaII_mediaConv+faixaII_mediaSub)/3;
		faixaII_indice=((faixaII_geral-1)*2);
		}
	if (faixaIII>0){
		faixaIII_mediaConv=faixaIII_mediaConv/faixaIII;
		faixaIII_mediaSub=faixaIII_mediaSub/faixaIII;
		faixaIII_mediaAgre=faixaIII_mediaAgre/faixaIII;
		faixaIII_geral=(faixaIII_mediaAgre+faixaIII_mediaConv+faixaIII_mediaSub)/3;
		faixaIII_indice=((faixaIII_geral-1)*2);
		}
	if (masculino>0){
		masculino_mediaSub=masculino_mediaSub/masculino;
		masculino_mediaAgre=masculino_mediaAgre/masculino;
		masculino_mediaConv=masculino_mediaConv/masculino;
		masculino_geral=(masculino_mediaConv+masculino_mediaSub+masculino_mediaAgre)/3;
		masculino_indice=(masculino_geral-1)*2;
		}
	if (feminino>0){
		feminino_mediaConv=feminino_mediaConv/feminino;
		feminino_mediaSub=feminino_mediaSub/feminino;
		feminino_mediaAgre=feminino_mediaAgre/feminino;
		feminino_geral=(feminino_mediaConv+feminino_mediaSub+feminino_mediaAgre)/3;
		feminino_indice=(feminino_geral-1)*2;
		}
	if (engCivil>0){
		engCivil_mediaSub=engCivil_mediaSub/engCivil;
		engCivil_mediaAgre=engCivil_mediaAgre/engCivil;
		engCivil_mediaConv=engCivil_mediaConv/engCivil;
		engCivil_geral=(engCivil_mediaConv+engCivil_mediaSub+engCivil_mediaAgre)/3;
		engCivil_indice=(engCivil_geral-1)*2;
		}
	if (medicina>0){
		medicina_mediaSub=medicina_mediaSub/medicina;
		medicina_mediaAgre=medicina_mediaAgre/medicina;
		medicina_mediaConv=medicina_mediaConv/medicina;
		medicina_geral=(medicina_mediaConv+medicina_mediaSub+medicina_mediaAgre)/3;
		medicina_indice=(medicina_geral-1)*2;
		}
	if (historia>0){
		historia_mediaSub=historia_mediaSub/historia;
		historia_mediaAgre=historia_mediaAgre/historia;
		historia_mediaConv=historia_mediaConv/historia;
		historia_geral=(historia_mediaConv+historia_mediaSub+historia_mediaAgre)/3;
		historia_indice=(historia_geral-1)*2;
		}
	if (vernaculas>0){
		vernaculas_mediaSub=vernaculas_mediaSub/vernaculas;
		vernaculas_mediaAgre=vernaculas_mediaAgre/vernaculas;
		vernaculas_mediaConv=vernaculas_mediaConv/vernaculas;
		vernaculas_geral=(vernaculas_mediaConv+vernaculas_mediaSub+vernaculas_mediaAgre)/3;
		vernaculas_indice=(vernaculas_geral-1)*2;
		}

	
	//Verificação media por faixa etaria
	printf("Média de submissão: %.2f para a faixa etaria de 18 a 20 anos\n",faixaI_mediaSub);
	printf("Media de agressividade: %.2f para a faixa etaria de 18 a 20 anos\n",faixaI_mediaAgre);
	printf("Média de convencionalismo: %.2f para a faixa etaria de 18 a 20 anos\n",faixaI_mediaConv);
	printf("Média geral de Autoritarismo: %.2f para a faixa etaria de 18 a 20 anos\n",faixaI_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",faixaI_indice);
	
	printf("Média de submissão: %.2f para a faixa etaria de 21 a 23 anos\n",faixaII_mediaSub);
	printf("Media de agressividade: %.2f para a faixa etaria de 21 a 23 anos\n",faixaII_mediaAgre);
	printf("Média de convencionalismo: %.2f para a faixa etaria de 21 a 23 anos\n",faixaII_mediaConv);
	printf("Média geral de Autoritarismo: %.2f para a faixa etaria de 21 a 23 anos\n",faixaII_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",faixaII_indice);
	
	printf("Média de submissão: %.2f para a faixa etaria de acima de 23 anos \n",faixaIII_mediaSub);
	printf("Media de agressividade: %.2f para a faixa etaria acima de 23 anos\n",faixaIII_mediaAgre);
	printf("Média de convencionalismo: %.2f para a faixa etaria acima de 23 anos\n",faixaIII_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação a faixa etaria acima de 23 anos\n",faixaIII_geral);	
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",faixaIII_indice);
	system("pause");
	system("cls");
		
	//Verificação media por genero (masculino)
	printf("Média de submissão: %.2f em relação aos homens\n",masculino_mediaSub);
	printf("Media de agressividade: %.2f em relação aos homens\n",masculino_mediaAgre);
	printf("Média de convencionalismo: %.2f em relação aos homens\n",masculino_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação aos homens\n",masculino_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",masculino_indice);
	
	//Verificação media por genero (feminino)
	printf("Média de submissão: %.2f em relação às mulheres\n",feminino_mediaSub);
	printf("Media de agressividade: %.2f em relação às mulheres\n",feminino_mediaAgre);
	printf("Média de convencionalismo: %.2f em relação às mulheres \n",feminino_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação às mulheres\n",feminino_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",feminino_indice);
	system("pause");
	system("cls");
	
	//Verificação media por curso (Engenharia Cívil)
	printf("Média de submissão: %.2f em relação ao curso de Eng. Civil\n",engCivil_mediaSub);
	printf("Media de agressividade: %.2f em relação ao curso de Eng. Civil\n",engCivil_mediaAgre);
	printf("Média de convencionalismo: %.2f em relação ao curso de Eng. Civil\n",engCivil_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação ao curso de Eng. Civil\n",engCivil_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",engCivil_indice);
	
	//Verificação media por curso (Medicina)
	printf("Média de submissão: %.2f em relação ao curso de Medicina\n",medicina_mediaSub);
	printf("Media de agressividade: %.2f em relação ao curso de Medicina\n",medicina_mediaAgre);
	printf("Média de convencionalismo: %.2f em relação ao curso de Medicina\n",medicina_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação ao curso de Medicina\n",medicina_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",medicina_indice);
	
	//Verificação media por curso (História)
	printf("Média de submissão: %.2f em relação ao curso de História\n",historia_mediaSub);
	printf("Media de agressividade: %.2f em relação ao curso de História\n",historia_mediaAgre);
	printf("Média de convencionalismo: %.2f em relação ao curso de História\n",historia_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação ao curso de História\n",historia_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",historia_indice);
	
	//Verificação media por curso (Letras Vernáculas)
	printf("Média de submissão: %.2f em relação ao curso de Letras Veráculas\n",vernaculas_mediaSub);
	printf("Media de agressividade: %.2f em relação ao curso de Letras Veráculas\n",vernaculas_mediaAgre);
	printf("Média de convencionalismo: %.2f em relação ao curso de Letras Veráculas\n",vernaculas_mediaConv);
	printf("Média geral de Autoritarismo: %.2f em relação ao curso de Letras Veráculas\n",vernaculas_geral);
	printf("Em escala de 0 à 10 o grau de autoritarismo é %.1f\n\n",vernaculas_indice);
	system("pause");
	system("cls");

	//Bloco do valor relativo pra cada questão
	valorRCTQ1=q1_ConcordoT*100/pessoa;
	valorRCQ1=q1_Concordo*100/pessoa;
	valorRCPQ1=q1_ConcordoP*100/pessoa;
	valorRDTQ1=q1_DiscordoT*100/pessoa;
	valorRDQ1=q1_Discordo*100/pessoa;
	valorRDPQ1=q1_DiscordoP*100/pessoa;
		
	valorRCTQ2=q2_ConcordoT*100/pessoa;
	valorRCQ2=q2_Concordo*100/pessoa;
	valorRCPQ2=q2_ConcordoP*100/pessoa;
	valorRDTQ2=q2_DiscordoT*100/pessoa;
	valorRDQ2=q2_Discordo*100/pessoa;
	valorRDPQ2=q2_DiscordoP*100/pessoa;	
		
	valorRCTQ3=q3_ConcordoT*100/pessoa;	
	valorRCQ3=q3_Concordo*100/pessoa;
	valorRCPQ3=q3_ConcordoP*100/pessoa;	
	valorRDTQ3=q3_DiscordoT*100/pessoa;	
	valorRDQ3=q3_Discordo*100/pessoa;
	valorRDPQ3=q3_DiscordoP*100/pessoa;
		
	valorRCTQ4=q4_ConcordoT*100/pessoa;	
	valorRCQ4=q4_Concordo*100/pessoa;
	valorRCPQ4=q4_ConcordoP*100/pessoa;	
	valorRDTQ4=q4_DiscordoT*100/pessoa;	
	valorRDQ4=q4_Discordo*100/pessoa;
	valorRDPQ4=q4_DiscordoP*100/pessoa;
		
	valorRCTQ5=q5_ConcordoT*100/pessoa;	
	valorRCQ5=q5_Concordo*100/pessoa;
	valorRCPQ5=q5_ConcordoP*100/pessoa;	
	valorRDTQ5=q5_DiscordoT*100/pessoa;
	valorRDQ5=q5_Discordo*100/pessoa;
	valorRDPQ5=q5_DiscordoP*100/pessoa;	
		
	valorRCTQ6=q6_ConcordoT*100/pessoa;	
	valorRCQ6=q6_Concordo*100/pessoa;	
	valorRCPQ6=q6_ConcordoP*100/pessoa;	
	valorRDTQ6=q6_DiscordoT*100/pessoa;	
	valorRDQ6=q6_Discordo*100/pessoa;	
	valorRDPQ6=q6_DiscordoP*100/pessoa;	
		
	valorRCTQ7=q7_ConcordoT*100/pessoa;	
	valorRCQ7=q7_Concordo*100/pessoa;	
	valorRCPQ7=q7_ConcordoP*100/pessoa;	
	valorRDTQ7=q7_DiscordoT*100/pessoa;	
	valorRDQ7=q7_Discordo*100/pessoa;	
	valorRDPQ7=q7_DiscordoP*100/pessoa;	
		
	valorRCTQ8=q8_ConcordoT*100/pessoa;	
	valorRCQ8=q8_Concordo*100/pessoa;	
	valorRCPQ8=q8_ConcordoP*100/pessoa;		
	valorRDTQ8=q8_DiscordoT*100/pessoa;	
	valorRDQ8=q8_Discordo*100/pessoa;	
	valorRDPQ8=q8_DiscordoP*100/pessoa;	
		
	valorRCTQ9=q9_ConcordoT*100/pessoa;	
	valorRCQ9=q9_Concordo*100/pessoa;
	valorRCPQ9=q9_ConcordoP*100/pessoa;	
	valorRDTQ9=q9_DiscordoT*100/pessoa;	
	valorRDQ9=q9_Discordo*100/pessoa;	
	valorRDPQ9=q9_DiscordoP*100/pessoa;	
		
	valorRCTQ10=q10_ConcordoT*100/pessoa;
	valorRCQ10=q10_Concordo*100/pessoa;	
	valorRCPQ10=q10_ConcordoP*100/pessoa;
	valorRDTQ10=q10_DiscordoT*100/pessoa;
	valorRDQ10=q10_Discordo*100/pessoa;	 	
	valorRDPQ10=q10_DiscordoP*100/pessoa;	
	
	valorRCTQ11=q11_ConcordoT*100/pessoa;	
	valorRCQ11=	q11_Concordo*100/pessoa;	 
	valorRCPQ11=q11_ConcordoP*100/pessoa;
	valorRDTQ11=q11_DiscordoT*100/pessoa;
	valorRDQ11=q11_Discordo*100/pessoa;		 
	valorRDPQ11=q11_DiscordoP*100/pessoa;	
		
	valorRCTQ12=q12_ConcordoT*100/pessoa;
	valorRCQ12=q12_Concordo*100/pessoa;	
	valorRCPQ12=q12_ConcordoP*100/pessoa;
	valorRDTQ12=q12_DiscordoT*100/pessoa;
	valorRDQ12=q12_Discordo*100/pessoa;	
	valorRDPQ12=q12_DiscordoP*100/pessoa;
		
	valorRCTQ13=q13_ConcordoT*100/pessoa;
	valorRCQ13=q13_Concordo*100/pessoa;	
	valorRCPQ13=q13_ConcordoP*100/pessoa;
	valorRDTQ13=q13_DiscordoT*100/pessoa;
	valorRDQ13=q13_Discordo*100/pessoa;	
	valorRDPQ13=q13_DiscordoP*100/pessoa;
		
	valorRCTQ14=q14_ConcordoT*100/pessoa;
	valorRCQ14=q14_Concordo*100/pessoa;	
	valorRCPQ14=q14_ConcordoP*100/pessoa;
	valorRDTQ14=q14_DiscordoT*100/pessoa;
	valorRDQ14=q14_Discordo*100/pessoa;	
	valorRDPQ14=q14_DiscordoP*100/pessoa;
		
	valorRCTQ15=q15_ConcordoT*100/pessoa;
	valorRCQ15=q15_Concordo*100/pessoa;	
	valorRCPQ15=q15_ConcordoP*100/pessoa;
	valorRDTQ15=q15_DiscordoT*100/pessoa;
	valorRDQ15=q15_Discordo*100/pessoa;	
	valorRDPQ15=q15_DiscordoP*100/pessoa;
	
	valorRCTQ16=q16_ConcordoT*100/pessoa;
	valorRCQ16=q16_Concordo*100/pessoa;	
	valorRCPQ16=q16_ConcordoP*100/pessoa;
	valorRDTQ16=q16_DiscordoT*100/pessoa;
	valorRDQ16=q16_Discordo*100/pessoa;	
	valorRDPQ16=q16_DiscordoP*100/pessoa;
		
	valorRCTQ17=q17_ConcordoT*100/pessoa;
	valorRCQ17=q17_Concordo*100/pessoa;	
	valorRCPQ17=q17_ConcordoP*100/pessoa;
	valorRDTQ17=q17_DiscordoT*100/pessoa;
	valorRDQ17=q17_Discordo*100/pessoa;	
	valorRDPQ17=q17_DiscordoP*100/pessoa;
	
	//Bloco de conta do indice e da media geral
	geral=((geralMediaConv+geralMediaSub+geralMediaAgre)/3)/pessoa;
	indice=(geral-1)*2;
	
	printf("Frequência Relativa geral de cada nivel de concordância pra cada questão:\n");
	printf("Questão 1:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ1);
	printf("Concordo: %.1f \n",valorRCQ1);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ1);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ1);
	printf("Discordo: %.1f \n",valorRDQ1);
	printf("Discordo totalmente: %.1f \n",valorRDTQ1);
	system("pause");
	system("cls");
	
	printf("Questão 2:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ2);
	printf("Concordo: %.1f \n",valorRCQ2);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ2);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ2);
	printf("Discordo: %.1f \n",valorRDQ2);
	printf("Discordo totalmente: %.1f \n",valorRDTQ2);
	system("pause");
	system("cls");
	
	printf("Questão 3:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ3);
	printf("Concordo: %.1f \n",valorRCQ3);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ3);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ3);
	printf("Discordo: %.1f \n",valorRDQ3);
	printf("Discordo totalmente: %.1f \n",valorRDTQ3);
	system("pause");
	system("cls");
	
	printf("Questão 4:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ4);
	printf("Concordo: %.1f \n",valorRCQ4);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ4);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ4);
	printf("Discordo: %.1f \n",valorRDQ4);
	printf("Discordo totalmente: %.1f \n",valorRDTQ4);
	system("pause");
	system("cls");
	
	printf("Questão 5:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ5);
	printf("Concordo: %.1f \n",valorRCQ5);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ5);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ5);
	printf("Discordo: %.1f \n",valorRDQ5);
	printf("Discordo totalmente: %.1f \n",valorRDTQ5);
	system("pause");
	system("cls");
	
	printf("Questão 6:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ6);
	printf("Concordo: %.1f \n",valorRCQ6);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ6);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ6);
	printf("Discordo: %.1f \n",valorRDQ6);
	printf("Discordo totalmente: %.1f \n",valorRDTQ6);
	system("pause");
	system("cls");
	
	printf("Questão 7:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ7);
	printf("Concordo: %.1f \n",valorRCQ7);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ7);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ7);
	printf("Discordo: %.1f \n",valorRDQ7);
	printf("Discordo totalmente: %.1f \n",valorRDTQ7);
	system("pause");
	system("cls");
	
	printf("Questão 8:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ8);
	printf("Concordo: %.1f \n",valorRCQ8);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ8);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ8);
	printf("Discordo: %.1f \n",valorRDQ8);
	printf("Discordo totalmente: %.1f \n",valorRDTQ8);
	system("pause");
	system("cls");
	
	printf("Questão 9:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ9);
	printf("Concordo: %.1f \n",valorRCQ9);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ9);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ9);
	printf("Discordo: %.1f \n",valorRDQ9);
	printf("Discordo totalmente: %.1f \n",valorRDTQ9);
	system("pause");
	system("cls");
	
	printf("Questão 10:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ10);
	printf("Concordo: %.1f \n",valorRCQ10);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ10);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ10);
	printf("Discordo: %.1f \n",valorRDQ10);
	printf("Discordo totalmente: %.1f \n",valorRDTQ10);
	system("pause");
	system("cls");
	
	printf("Questão 11:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ11);
	printf("Concordo: %.1f \n",valorRCQ11);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ11);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ11);
	printf("Discordo: %.1f \n",valorRDQ11);
	printf("Discordo totalmente: %.1f \n",valorRDTQ11);
	system("pause");
	system("cls");
	
	printf("Questão 12:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ12);
	printf("Concordo: %.1f \n",valorRCQ12);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ12);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ12);
	printf("Discordo: %.1f \n",valorRDQ12);
	printf("Discordo totalmente: %.1f \n",valorRDTQ12);
	system("pause");
	system("cls");
	
	printf("Questão 13:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ13);
	printf("Concordo: %.1f \n",valorRCQ13);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ13);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ13);
	printf("Discordo: %.1f \n",valorRDQ13);
	printf("Discordo totalmente: %.1f \n",valorRDTQ13);
	system("pause");
	system("cls");
	
	printf("Questão 14:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ14);
	printf("Concordo: %.1f \n",valorRCQ14);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ14);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ14);
	printf("Discordo: %.1f \n",valorRDQ14);
	printf("Discordo totalmente: %.1f \n",valorRDTQ14);
	system("pause");
	system("cls");
	
	printf("Questão 15:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ15);
	printf("Concordo: %.1f \n",valorRCQ15);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ15);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ15);
	printf("Discordo: %.1f \n",valorRDQ15);
	printf("Discordo totalmente: %.1f \n",valorRDTQ15);
	system("pause");
	system("cls");
	
	printf("Questão 16:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ16);
	printf("Concordo: %.1f \n",valorRCQ16);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ16);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ16);
	printf("Discordo: %.1f \n",valorRDQ16);
	printf("Discordo totalmente: %.1f \n",valorRDTQ16);
	system("pause");
	system("cls");
	
	printf("Questão 17:\n");
	printf("Concordo totalmente : %.1f \n",valorRCTQ17);
	printf("Concordo: %.1f \n",valorRCQ17);
	printf("Concordo parcialmente: %.1f \n",valorRCPQ17);
	printf("Discordo parcialmente: %.1f \n",valorRDPQ17);
	printf("Discordo: %.1f \n",valorRDQ17);
	printf("Discordo totalmente: %.1f \n",valorRDTQ17);
	system("pause");
	system("cls");
	
	//resultado final geral
	printf("Dentro da escala de likert,a media no grau de autoritarismo é de:%.2f \n",geral);
	printf("Que resulta em %.2f , numa escala de 0 à 10\n",indice);
	
	printf("Quantidade de estudantes:%d \n",pessoa);
	printf("Sexo:\n Masculino:%d \ Feminino:%d \n",masculino,feminino);
	printf("Cursos: \n Eng. Civil:%d \n Medicina:%d \n História:%d \n Letras Vernáculas:%d \n",engCivil,medicina,historia,vernaculas);
	printf("Faixa etárias:\n Entre 18 e 20 anos: %d \n Entre 21 e 23 anos: %d \n Acima de 23 anos: %d\n",faixaI,faixaII,faixaIII);

	return 0;
	}
