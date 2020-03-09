/**
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
**/

#include "cdll.h"
List L;
address P;

int main()
{
    createList(L);

    insertFirst(L, createNewElmt('a'));
    printInfo(L);
    insertFirst(L, createNewElmt('t'));
    printInfo(L);
    insertAfter(next(First(L)), createNewElmt('t'));
    printInfo(L);
    insertAfter(First(L), createNewElmt('c'));
    printInfo(L);
    insertAfter(prev(First(L)), createNewElmt('a'));
    printInfo(L);
    insertAfter(prev(First(L)), createNewElmt('s'));
    printInfo(L);
    insertAfter(prev(First(L)), createNewElmt('c'));
    printInfo(L);
    insertAfter(prev(First(L)), createNewElmt('a'));
    printInfo(L);
    cout<<countWord("cat", L)<<endl;
    return 0;
}
