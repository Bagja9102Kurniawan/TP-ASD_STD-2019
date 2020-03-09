/**
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
**/

#include "doublelinkedlist.h"

bool isEmpty(List L)
{
    return ((First(L)==NULL) && (Last(L)==NULL)) ;
}

void createList(List &L)
{
    First(L) = NULL;
    Last(L) = NULL;
}

void createNewElmt(infotype x, address &P)
{
    P = new elmlist;
    next(P) = NULL;
    prev(P) = NULL;
    info(P) = x ;
}

void insertFirst(List &L, address P)
{
    if(isEmpty(L))
    {
        Last(L) = P;
        First(L) = P;
    }
    else
    {
        next(P) = First(L);
        prev(First(L)) = P;
        First(L) = P;
    }
}

void insertAfter(List &L, address &Prec, address P)
{
    next(P) = next(Prec);
    prev(P) = Prec;
    prev(next(Prec)) = P;
    next(Prec) = P;
}

void insertLast(List &L, address P)
{
    if (isEmpty(L)){
        insertFirst(L, P);
    }
    else {
        next(Last(L)) = P;
        prev(P) = Last(L);
        Last(L) = P;
    }
}

void deleteFirst(List &L, address &P)
{
    if(Last(L) == First(L)){
        P = First(L);
        First(L) = NULL;
        Last(L) = NULL;
    }
    else {
    P = First(L);
    First(L) = next(P);
    next(P) = NULL;
    prev(First(L)) = NULL;
    }
}

void deleteAfter(List &L, address &Prec, address &P)
{
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    prev(P) = NULL;
    next(P) = NULL;
}

void deleteLast(List &L, address &P)
{
    P = Last(L);
    Last(L) = prev(P);
    next(Last(L)) = NULL;
    prev(P) = NULL;
}

void concat(List L1, List L2, List &L3)
{
    address P = First(L1);
    address Q = First(L2);
    while(P != NULL)
    {
        deleteFirst(L1, P);
        insertLast(L3, P);
        P = next(P);
    }
    while(Q != NULL)
    {
        deleteFirst(L2, Q);
        insertLast(L3, Q);
        Q = next(Q);
    }
}

float median(List L)
{
    address P ;
    int n,mid;
    float med,l,r;
    int i =0;

    P = First(L);
    n = 0 ;
    while (P != NULL)
    {
        n++;
        P = next(P);
    }
    mid = n / 2;
    if (n% 2==1)
    {
        P = First(L);
        while (mid > i)
        {
            P = next(P);
            i++;
        }
        mid++ ;
        return info(P) ;
    }
    else
    {
        P = First(L) ;
        while (mid-1 > i)
        {
            P = next(P);
            i++;
        }
        l = info(P);
        r = info(next(P));
        med = (((l+r))/2);
        return med;
    }
}

void printInfo(List L)
{
    address P = First(L);
    cout << "My output : ";
    while (P != NULL)
    {
        cout << info(P)<<", ";
        P = next(P);
    }
    cout<<endl;
}

address findElm(List L, infotype x)
{
    address P = First(L);
    while((P != NULL) && (x != info(P)))
    {
        P = next(P);
    }
    return P;
}
