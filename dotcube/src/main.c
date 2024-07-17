#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "headers/histzero.h"
#include "headers/metadata.h"
#include "headers/dot.h"
#include "headers/histone.h"
#include "headers/explan.h"

int bemv();
int sim();
int nao();


int show_S_seSIM();
int show_S_seNAO();



int main() {
	setlocale(LC_ALL, "portuguese");
	bemv();
	sim();
	nao();
	return 0;
}
int bemv() {
	puts(chapzero_a);
	puts(chapzero_b);
	puts(chapzero_c);
	printf("-*- Olá %s, você dormiu bem? consegue se lembrar de tudo?\n:", PROTA);
	scanf("%s", cmd);
	
	
	if(strcmp(cmd, TRUE) == 0) {
		printf("-*- Muito bem! Então você se lembra de tudo...\n");
		sim();
	}
	else if(strcmp(cmd, FALSE) == 0) {
		printf("-*- Aparentemente aquilo que eu mais temia realmente aconteceu...\n\n");
		nao();
	}
	else if(cmd != TRUE) {
		printf("\n\n\terro 92039 na barra de comandos\n\n");
		bemv();
	}
	else if(cmd != FALSE) {
		printf("\n\n\terro 92039 na barra de comandos\n\n");
		bemv();
		return 1;
	}
}
int show_S_seSIM() {
	puts(spag00);
	puts(spag01);
	puts(spag02);
	puts(spag03);
}
int show_S_seNAO() {

}
int sim() {
	show_S_seSIM();

	puts(dica);

	puts(opt0);
	puts(opt1);
	puts(opt2);
	puts(opt3);
	puts(opt4);

	printf(": ");
	scanf("%d", ptr_o);

	switch(*ptr_o) {
		case 0:
			CASE_ZERO();
			break;
		case 1:
			CASE_ONE();
			break;
		case 2:
			CASE_TWO();
			break;
		case 3:
			CASE_THREE();
			break;
		default:
			CASE_FOUR();
			break;
	}
}
int nao() {
	//code
}
