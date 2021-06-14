#ifndef SLLLAST_H_INCLUDED
#define SLLLAST_H_INCLUDED
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct list{
    address first;
    address last;
};

void createList(list &L);
address alokasi(infotype x,address &P);
void insertFirst(list &L, address P);
void insertAfter(list &L, address Prec, address P);
void insertLast(list &L,address P);
void deleteFirst(list &L, address P);
void deleteAfter(list L,address Prec, address P);
void deleteLast(list L, address P);
void showList(list L);
address searchList(list L, infotype x);


#endif // SLLLAST_H_INCLUDED
