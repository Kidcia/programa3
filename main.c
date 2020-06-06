#include <stdio.h>
#include "tabla_tipos.h"
#include "tabla_simbolos.h"

int main(){
	SYMTAB *ts;
	ts = crear_lista_symtab();
	append_sym(ts, 0, 4, x, 0, 0, 1);
	clear_sym_tab(SYMTAB ∗ts);

	return 0;
}