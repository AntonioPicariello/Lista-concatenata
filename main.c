#include<stdio.h>
#include "lista.h"

int main()
{
    Lista l;

    InitLista(&l);
    
    StampaLista(&l);

    InserisciInLista(&l, 5);
    StampaLista(&l);

    InserisciInLista(&l, 15);
    StampaLista(&l);

    InserisciInLista(&l, 10);
    StampaLista(&l);

    InserisciInLista(&l, 1);
    StampaLista(&l);

    InserisciInLista(&l, 7);
    StampaLista(&l);

    RimuoviDaLista(&l, 15);
    StampaLista(&l);

    RimuoviDaLista(&l, 10);
    StampaLista(&l);

    RimuoviDaLista(&l, 1);
    StampaLista(&l);

    RimuoviDaLista(&l, 100);
    StampaLista(&l);

    ClearLista(&l);
    
    InserisciInLista(&l, 50);
    InserisciInLista(&l, 55);
    InserisciInLista(&l, 60);
    StampaLista(&l);
    RimuoviDaLista(&l, 60);
    
    ClearLista(&l);
    
    return 0;
}