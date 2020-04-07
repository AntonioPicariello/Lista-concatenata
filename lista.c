#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "nodo.h"

void InitLista(Lista * l){
    
    l->head = NULL;
    l->counter = 0;
}

void StampaLista(Lista * l){
    
    Nodo *current = l->head;

    printf("[%d] ", l->counter);

    while (current != NULL) {
        printf("%d ---> ", current->val);
        current = current->next;
    }
    
    printf("NULL\n");
}

void InserisciInLista(Lista *l, int val){
    
    Nodo *current = l->head;
    Nodo *prev = NULL;

    Nodo *temp = malloc(sizeof(Nodo));
    temp->val = val;
    temp->next = NULL;

    
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
       
        temp->next = l->head;
        l->head = temp;
    } else {
       
        prev->next = temp;
        temp->next = current;
    }

    l->counter++;
}

void RimuoviDaLista(Lista *l, int val){
    
    Nodo *current = l->head;
    Nodo *prev = NULL;
    Nodo *temp = NULL;

    
    while (current != NULL && current->val < val) {
        prev = current;
        current = current->next;
    }

   
    if (current == NULL) {
        printf("rimuovi(): ELEMENTO %d NON TROVATO\n", val);
        return;
    }

    printf("rimuovi(): ELEMENTO %d TROVATO\n", val);
    l->counter--;

    
    if (prev == NULL) {
        printf("L'elemento da eliminare e' in testa, elimina\n");
        
        temp = l->head;           
        l->head = l->head->next;  
        free(temp);              
        return;
    }

    printf("L'elemento da eliminare non e' in testa, elimina\n");
    temp = prev->next;
    prev->next = temp->next;
    free(temp);
}

void ClearLista(Lista *l){
    
    Nodo *temp;
    Nodo *current = l->head;

    while (current != NULL) {
        temp = current;    
        current = current->next;
        
        printf("ELIMINAZIONE NODO CON VALORE %d\n", temp->val);
        free(temp);
    }

    l->head = NULL;
    l->counter = 0;
}