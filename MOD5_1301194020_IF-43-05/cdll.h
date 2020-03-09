/**
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
**/

#ifndef CDLL_H_INCLUDED
#define CDLL_H_INCLUDED

#include <iostream>

#define First(L) L.First
#define NIL NULL

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev

using namespace std;

typedef char infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
    address prev;
};

struct List{
    address First;
};

bool isEmpty(List L);
void createList(List &L);
address createNewElmt(infotype x);
void insertFirst(List &L, address P);
void insertAfter(address Prec, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(address Prec, address &P);
int countWord(char data[], List L);
void printInfo(List L);


#endif // CDLL_H_INCLUDED
