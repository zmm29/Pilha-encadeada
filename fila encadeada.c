#include <stlib.d>
#include <stdio.h>

typedef struct {
	char site[40], data[40];
}tdado;

typedef struct {
	tdado dado;
	struct no *prox;
}tno;

typedef struct {
	tno *topo;
}tpilha;

//----------------------------------------------------
void inicializa(tpilha *p){
	p->topo = NULL;
}
//----------------------------------------------------
int push(tpilha *p, tdado x){
	tno *novo;
	novo = malloc(sizeof(tno));
	if(novo == NULL) // erro ao alocar[
	return 0;
	}	
	novo -> prox = p->topo;
	novo -> dado = x
	p->topo = novo
	return 1;
}
//----------------------------------------------------
tdado pop (tpilha *p){
	tno * aux;
	aux = p->topo;
	p -> topo = p -> topo -> prox;
	tdado x = aux -> dado;
	free(aux);
	return x;
}
//----------------------------------------------------
int isEmpty (tpilha p){
	return p.topo == NULL?1:0;
	//if(p.topo==NULL
	//	return 1;
	//else 
	//	return 0;
}
void mostraPilha(tpilha p){
	while(p.topo!= NULL){
		printf("%s | %s ->", p.topo->dado.site,
							 p.topo->dado.data)
	p.topo = p.topo->prox;	 
	} // fim while
	printf ("\n");
}
