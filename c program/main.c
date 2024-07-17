#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
	float *input1;
	float *input2;
	char  *calcType;
}calc;
 
//start the program
void boot_program();


//get the value to each calc u choose
float getting_calc_type();

int main (int argc, char **argv) {
	calc new_type;
	
	
	setlocale(LC_ALL, "portuguese");
	
	boot_program();
	
	scanf("")
	getting_calc_type();
	
	
	return 1;
}

void boot_program() {
	puts("calculando a porra de uma operação matemática>\n");
}