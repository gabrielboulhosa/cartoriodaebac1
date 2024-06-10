#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro(){
	setlocale(LC_ALL,"portuguese");
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o cpf: ");
	scanf("%s",cpf);
	strcpy(arquivo,cpf);
	
	FILE *file;
	file = fopen(arquivo,"w");
	fprintf(file,cpf);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("escreva seu nome: ");
	scanf("%s",nome);
	
	file=fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("escreva seu sobrenome: ");
	scanf("%s",sobrenome);
	
	file=fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("escreva o cargo: ");
	scanf("%s",cargo);
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
}

int consulta(){
	
	setlocale(LC_ALL,"portuguese");
	
	char cpf [40];
	char conteudo [200];
	
	printf("digite o cpf que gostaria de consultar: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
		if(file==NULL){
		printf("essa informação não existe.\n");
	}
	
	while(fgets(conteudo,200,file) != NULL){
		printf("essas são as informações: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	system("pause");
}

int deletar(){
	
	char cpf[40];

    printf("Digite o CPF que você quer excluir: ");
    scanf("%s", cpf);
    
    remove(cpf);
    
    
    

    // Tenta abrir o arquivo para verificar se ele existe
    FILE *file = fopen(cpf, "r");
    
    if(file==NULL){
    	printf("o cpf foi deletado: ");
	} 
    	
}


int main(){
	
	int opcao=0; 
	int laco=1;
	
	for(laco=1;laco=1;){
		
	system("cls");
	setlocale(LC_ALL,"portuguese");
	printf("### Cartorio da Ebac ### \n\n");
	printf("escolha a opção desejada do menu: \n\n");
	printf("\t1_registrar nome \n");
	printf("\t2_consultar nomes \n");
	printf("\t3_deletar nomes\n");
	
	scanf("%d",&opcao);
	system("cls");
	
	switch(opcao){
		
		case 1:
			registro();
		    system("pause");
		    break;
		    
		case 2:
		    consulta();
			system("pause");
			break;
			
	    case 3:
		    deletar();
		    system("pause");
		    break;
		    
		default:
		    printf("essa opçao não existe\n");
			system("pause");
			break;    
		    		    
	}
	
 }	

}
