/*
    NAMA    : BAGJA 9102 KURNIAWAN
    NIM     : 1301194020
*/
#include "perpustelyu.h"

void buatList(List &L)
{
    first(L) = NULL ;
    last(L) = NULL ;
}

bool listKosong(List L)
{
    return (first(L)== NULL && last(L) == NULL) ;
}

address cariElemen(List L, string X)
{
    address P = first(L) ;
    while ((P != NULL) && X != info(P).penerbit)
    {
        P = next(P) ;
    }
    return P ;
}

void buatElemen(address &P, string ID,string judul,string pengarang,string penerbit, int tahun)
{
    P = new elmList;
    info(P).ID = ID;
    info(P).judul = judul;
    info(P).pengarang = pengarang;
    info(P).penerbit = penerbit;
    info(P).tahun = tahun;
    next(P) = NULL;
}

void tambahDataTerakhir(List &L, address P)
{
    if (listKosong(L)) {
        first(L) = P ;
        last(L) = P;
    } else {
        next(last(L)) = P;
        last(L) = P;
    }
}

void tambahDataSetelah(List &L, address Prec, address P)
{
    if (Prec != NULL) {
        next(P) = next(Prec) ;
        next(Prec) = P;
    }
}

void hapusDataTerakhir(List &L, address &P)
{
    address Q = first(L);
    while(next(next(Q))!= NULL){
        Q = next(Q);
    }
    P = next(Q);
    next(Q) = NULL;
    last(L) = Q;
}

void lihatList(List L) //noted
{
    address P = first(L);
    while (P != NULL)
    {
        cout<<info(P).ID <<"\t"<<info(P).judul<<"\t"<<info(P).pengarang<<endl ;
        P = next(P);
    }
    cout << endl;
}

int jumBuku(List L, int thn) //noted
{
    address P = first(L);
    int jum = 0 ;
    while (P != NULL)
    {
        if (thn >= info(P).tahun)
        {
            jum++ ;
        }
        P = next(P);
    }
    return jum ;
}
