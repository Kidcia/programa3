/*Estructuras para la TABLA DE SIMBOLOS */
typedef struct arg ARG;

struct arg{
	int arg;
	ARG *next;
};

typedef struct args{
	ARG *head;
	ARG *tail;
	int num; // numero de elementos de la lista
}ARGS;

typedef struct sym SYM;

struct sym{
	int dir; // dirreción para la variable
	int tipo; // tipo como indice a la tabla de tipos
	char id[33]; // identificador
	ARG *arg; // Lista de argumentos
	int num; // numero de argumentos
	int var; //tipo de variable
	SYM *next; // apuntador al siguiente simbolo
};

typedef struct sym_tab SYMTAB;

struct sym_tab{
	SYM *head;
	SYM *tail;
	int num; //numero de elementos en la tabla
	SYMTAB *next; // apuntador a la tabla siguiente
};
/*
struct sym_stack{
	SYM *top;
	SYM *tail;
}SSTACK;

// Estructuras para la TABLA DE TIPOS 

typedef struct tipobase{
	int is_set; // 1: si es estructura 0: si es tipo simple -1: si no tiene tipo base
	union{
	SYMTAB *est;
	int tipo;
	}tipo;
}TB;

typedef struct type TYP;

struct type{
	int id;
	char nombre[12];
	TB tb;
	int tam;
	TYP *next; // apuntador al siguiente tipo de la tabla de tipos 
};

typedef struct type_tab TYPTAB;

struct type_tab{
	TYP *head;
	TYP *tail;
	int num; // Contador de elementos en la tabla
	TYPTAB *next; // Apuntador a la tabla siguiente 
};

typedef struct typ_stak{
	TYPTAB *top;
	TYPTAB *tail;
}TSTACK;
*/