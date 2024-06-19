#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("### Cartorio da Ebac ### \n\n");
	printf("escolha a opção desejada do menu: \n\n");
	printf("\t1_registrar nome \n");
	printf("\t2_consultar nomes \n");
	printf("\t3_deletar nomes\n");
}
