/*
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
*/
#include "list.h"

void createList(List &L)
{
    first(L) = NULL;
}

address allocate(infotype x)
{

    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertFirst(List &L, address P)
{

    next(P) = first(L);
    first(L) = P;

}

void printInfo(List L)
{

    address P = first(L);
    while (P != NULL)
    {
        cout << info(P)<<" ";
        P = next(P);
    }
    cout << endl;
}

void deleteFirst(List &L, address &P)
{

    if (first(L) != NULL)
    {
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;

    }
}

void insertLast(List &L, address P)
{
    address Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    }
    next(Q) = P;
}

void insertAfter(List &L, address P, address prec)
{
    next(P) = next(prec);
    next(prec) = P;
}

void deleteLast(List &L, address &P)
{
    address Q = first(L);
    while(next(next(Q)) != NULL){
        Q = next(Q);
    }
    P = next(Q);
    next(Q)= NULL;
}

void deleteAfter(List &L, address &P, address prec)
{
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}

address searchInfo(List L, infotype x) {
    address Q = first(L);

    while (Q != NULL) {
        if (x == info(Q)) {
            return Q;
        }
        Q = next(Q);
    }
    return NULL;
}

void haveFun(List &L){
    address P;
    infotype x;
    createList(L);
    cout <<endl <<"===== SESI HAVE FUN ====="<< endl << "Masukkan NIM perdigit" << endl;
    int i = 1;
    while (i <= 10) {
        cout << "Digit " << i << ": ";
        cin >> x;
        P = allocate(x);
        if (first(L) == NULL) {
            insertFirst(L, P);
        } else {
            insertLast(L, P);
        }
        i++;
    }
    cout << "isi list : ";
}
