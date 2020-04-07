#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

struct lista {
    Nodo *head;
    int counter;
};

typedef struct lista Lista;

void InitLista(Lista *l);
void StampaLista(Lista *l);
void InserisciInLista(Lista *l, int val);
void RimuoviDaLista(Lista *l, int val);
void ClearLista(Lista *l);

#endif