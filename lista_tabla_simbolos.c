#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_simbolos.h"


/* NUEVO */
ARG *crear_nodo_arg(int arg){
	ARG *n_arg = (ARG *)malloc(sizeof(ARG));
	n_arg->arg = arg;
	n_arg->next = NULL;
	return n_arg;
}//Crea un nodo de tipo ARG

/* NUEVO */
SYM *crear_nodo_sym(int dir, int tipo, char id[], ARG *arg, int num, int var){
	SYM *n_sym = (SYM *)malloc(sizeof(SYM));
	n_sym->dir = dir;
	n_sym->tipo = tipo;
	strcpy(n_sym->id, id);
	n_sym->arg = arg;
	n_sym->num = num;
	n_sym->var = var;
	n_sym->next = NULL;
	return n_sym;
} //Crea un nodo de tipo SYM

/* NUEVO */
ARGS *crear_lista_args(){
	ARGS *args = (ARGS*)malloc(sizeof(ARGS));
}

/* NUEVO */
SYMTAB *crear_lista_symtab(){
	SYMTAB *t = (SYMTAB*)malloc(sizeof(SYMTAB));
}

void append_arg(ARGS ∗args, int arg){
	if(args == NULL) return;
	if(args->head == NULL){
		ARG *nuevo = crear_nodo_arg(arg);
		args->tail = args->head = nuevo;
		return;
	}
	ARG *nuevo = crear_nodo_arg(arg);
	args->tail->next = nuevo;
	args->tail = nuevo;
} //Agrega un argumento al final de una lista de argumentos

/*
int compare_args(ARGS ∗a1, ARGS ∗a2){

} //Compara dos lista y devuelve 1 si son iguales , 0 si son diferentes
*/

void append_sym(SYMTAB ∗t, SYM s){
	if(t == NULL) return;
	if(t->head == NULL){
		SYM *nuevo = crear_nodo_arg(s);
		t->tail = t->head = nuevo;
		t->num ++;
		return;
	}
	SYM *nuevo = crear_nodo_sym(s);
	t->tail->next = nuevo;
	t->tail = nuevo;
	t->num ++;

} //Agrega al final de la tabla un nuevo simbolo


void clear_sym_tab(SYMTAB ∗t){
	if(t != NULL){
		if(t->head != NULL){
			clear_sym_tab(t->head);
		}
		t->num = 0;
		free(t);
		t = NULL;
	}
} // Deja vacia la tabla

/*

SYMTAB pop_st(SSTACK ∗ s){

} // Ejecuta un pop sobre la pila de tablas de simbolos
void push_st(SSTACK ∗s, SYMTAB ∗st){

} // Ingresa una tabla a la pila de tablas de simbolos

ARGS ∗init_args(){

} // Retorna el apunador a un tipo ARGS
ARG ∗init_arg(int dato){

} // Reserva memoria para un tipo ARG y reto rna e l apuntador
SSTACK ∗init_sym_tab_stack(){

} // Reserva memoria para la pila
SYMTAB ∗init_sym_tab(){

} // Reserva memoria para una tabla de simbolos vacia
SYM ∗init_sym(){

} // Reserva memoria para un simbolo vacio

void finish_sym_tab_stack(SSTACK ∗s){

} // Libera la memoria para la pila
void finish_sym_tab(SYMTAB ∗ st){

}// Libera memoria para una tabla de simbolos
void finish_sym(SYM ∗S){

} // libera memoria para un simbolo
void finish_arg(ARG ∗S){

} // libera memoria para un arg
void finish_args(ARGS ∗S){
// libera memoria para una lista ARGS
*/

/* NUEVO */
VOID imprimir_nodo_sym(SYM *nodo_sym){
	printf("%d\n", nodo_sym->info);
}

void print_tab(SYMTAB ∗t){
	for(SYM *i = t->head; i != NULL; i = i->next){
		imprimir_nodo_sym(i);
	}

} // Imprime en pantalla la tabla de simbolos
/*
int getDir(SYMTAB ∗T, char ∗ id){

}
int getTipo(SYMTAB ∗T, char ∗ id){

}
int getVar(SYMTAB ∗T, char ∗ id){

}
ARGS ∗getArgs(SYMTAB ∗T, char ∗ id){

}
int getNumArgs(SYMTAB ∗T, char ∗ id){

}
*/