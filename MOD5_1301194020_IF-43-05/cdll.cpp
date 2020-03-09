/**
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
**/

#include "cdll.h"

bool isEmpty(List L)
{
    return (First(L)==NIL) ;
}

void createList(List &L)
{
    First(L) = NIL;
}

address createNewElmt(infotype x)
{
    address P = new elmlist;
    info(P) = x ;
    next(P) = P;
    prev(P) = P;
    return P;
}

void insertFirst(List &L, address P){
    if(isEmpty(L)){
        First(L) = P;
    }else{
        next(P) = First(L);
        prev(P) = prev(First(L));
        next(prev(First(L))) = P;
        prev(First(L)) = P;
        First(L) = P;
    }
}
void insertAfter(address Prec, address P){
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
    prev(next(P)) = P;
}
void deleteFirst(List &L, address &P){
    P = First(L);
    First(L) = next(P);
    next(prev(P)) = First(L);
    prev(First(L)) = prev(P);
    prev(P) = NIL;
    next(P) = NIL;
}
void deleteAfter(address Prec, address &P){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P)=NIL;
    prev(P)=NIL;
}
int countWord(char data[], List L){
    address P = First(L);
    int n = 0;
    do {
        int i = 0;
        address Q = P;
        while(data[i] != NIL){
            if(data[i] == info(Q)){
                Q = next(Q);
                i++;
            } else {
                break;
            }
            if(data[i] == NIL){
                n++;
            }
        }
        P = next(P);
    } while(P != First(L));
    return n;
}
void printInfo(List L){
    address P = First(L);
    do {
        cout<<info(P)<<", ";
        P = next(P);
    } while(P != First(L));
    cout<<endl;
}
