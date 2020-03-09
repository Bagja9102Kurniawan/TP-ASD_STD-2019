/*
    NAMA    : BAGJA 9102 KURNIAWAN
    NIM     : 1301194020
*/
#ifndef PERPUSTELYU_H_INCLUDED
#define PERPUSTELYU_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
using namespace std ;

struct buku
{
    string ID;
    string judul;
    string pengarang;
    string penerbit;
    int tahun ;
};

typedef buku infotype ;
typedef struct elmList *address;

struct elmList
{
    infotype info ;
    address next ;
};

struct List
{
    address first ;
    address last ;
};

void buatList(List &L) ;
bool listKosong(List L) ;
address cariElemen(List L, string X) ;
void buatElemen(address &P, string ID,string judul,string pengarang,string penerbit, int tahun) ;
void tambahDataTerakhir(List &L, address P) ;
void tambahDataSetelah(List &L, address Prec, address P) ;
void hapusDataTerakhir(List &L, address &P) ;
void lihatList(List L) ;
int jumBuku(List L, int thn) ;

#endif // PERPUSTELYU_H_INCLUDED
