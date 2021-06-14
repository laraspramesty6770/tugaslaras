#include <iostream>
#include "SLLLAST.h"

using namespace std;

int main()
{   list L;
    address P;
    address Prec;

    createList(L);
    alokasi(12, P);
    insertFirst(L, P);
    showList(L);

    alokasi(10, P);
    insertLast(L, P);
    showList(L);
    alokasi(9, P);
    Prec = searchList(L, 12);
    insertAfter(L, Prec, P);
    showList(L);
    deleteFirst(L, P);
    showList(L);
    Prec = searchList(L, 12);
    deleteAfter(L, Prec, P);
    showList(L);
    deleteLast(L, P);
    showList(L);

    return 0;


}
