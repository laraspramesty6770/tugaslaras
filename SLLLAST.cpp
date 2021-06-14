#include <iostream>
#include "SLLLAST.h"
using namespace std;

void createList(list &L){
    first(L)=NULL;
    last(L)=NULL;
}
address alokasi(infotype x,address &P){
    P = new elmList;
    info(P)= x;
    next(P)= NULL;
    return P;
}
void insertFirst(list &L, address P){
    if(first(L)==NULL && last(L)== NULL){
            first(L)=P;
            last(L)=P;
    }else{
            next(P)=first(L);
            first(L)= P;
    }
}
void insertAfter(list &L, address Prec, address P){
        next(P)= next(Prec);
        next(Prec)= P;
}
void insertLast(list &L,address P){
    next(last(L))=P;
    last(L)=P;
}
void deleteFirst(list &L, address P){
    P = first(L);
    first(L)= next(P);
    next(P)= NULL;
}
void deleteAfter(list L,address Prec, address P){
    P = next(Prec);
    next(Prec)= next(P);
    next(P)=NULL;
}
void deleteLast(list L, address P){
    P = last(L);
    while (next(next(P)!=NULL)){
            P= next(P);
    }
    last(L)= P;
    next(P)= NULL;
}
void showList(list L){
    address P;
    P = first(L);
    while(next(P)!= NULL){
        cout<<info(P)<<endl;
        P = next(P);
    }
    cout<<info(P)<<endl;

}

address searchList(list L, infotype x){
     address P;
    P = first(L);
    while(info(P)!= x && next(P)!= NULL){
            P = next(P);
        }
    if(info(P)== x){
        return P;
    }else{
        return NULL;
    }

}
