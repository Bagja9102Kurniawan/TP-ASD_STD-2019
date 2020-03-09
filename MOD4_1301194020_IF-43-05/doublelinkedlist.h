/**
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
**/

#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED

#include <iostream>

#define First(L) L.First
#define Last(L) L.Last

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
    address prev;
};

struct List{
    address First;
    address Last;
};

bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype x, address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address &Prec, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address &Prec, address &P);
void deleteLast(List &L, address &P);
void concat(List L1, List L2, List &L3);
float median(List L);
void printInfo(List L);
address findElm(List L, infotype x);

#endif // DOUBLELINKEDLIST_H_INCLUDED
