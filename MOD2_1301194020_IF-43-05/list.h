/*
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
*/
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

void createList(List &L);
address allocate(infotype x);
void printInfo(List L);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P, address Q);
void deleteAfter(List &L, address &P, address prec);
void insertFirst(List &L, address P);
void insertLast(List &L, address P, address Q);
void insertAfter(List &L, address P, address prec);
void haveFun(List &L);
address searchInfo(List L, infotype x);

#endif // LIST_H_INCLUDED
