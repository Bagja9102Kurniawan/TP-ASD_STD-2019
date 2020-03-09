/*
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
*/
#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List L;
    address P;
    cout << "Input 3 digit nim terakhir anda" << endl;
    createList(L);
    cout <<"Masukkan angka pertama ke dalam list:\t";
    infotype x;
    cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);

    cout <<"Masukkan angka kedua ke dalam list :\t";
    cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);

    cout <<"Masukkan angka ketiga ke dalam list:\t";
    cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);

    haveFun(L);
    printInfo(L);

    return 0;
}
