/**
    NAMA    =   BAGJA 9102 KURNIAWAN
    NIM     =   1301194020
**/

#include "doublelinkedlist.h"

List L,La,Lb,Lc;
address P, Prec;
infotype X;
int i;

int main()
{
    createList(L);

    //==================================================
    // TEST INSERT FIRST
    cout << "TES INSERT FIRST" << endl;

    createNewElmt(6, P);
    insertFirst(L, P);
    printInfo(L);
    cout<<"output should be: 6,"<<endl;

    createNewElmt(3, P);
    insertFirst(L, P);
    printInfo(L) ;
    cout<<"output should be: 3, 6,"<<endl;
    createNewElmt(8, P);
    insertFirst(L, P);
    printInfo(L);
    cout<<"output should be: 8, 3, 6,"<<endl;

    //==================================================
    // TEST INSERT LAST
    cout << "TES INSERT LAST" << endl;

    createNewElmt(4, P);
    insertLast(L, P);
    createNewElmt(2, P);
    insertLast(L, P);
    printInfo(L);
    cout<<"output should be: 8, 3, 6, 4, 2,"<<endl;

    //==================================================
    // TEST INSERT AFTER
    cout << "TES INSERT AFTER" << endl;

    Prec = findElm(L, 6);
    createNewElmt(5, P);
    insertAfter(L,Prec,P);
    printInfo(L);
    cout<<"output should be: 8, 3, 6, 5, 4, 2,"<<endl;

    //==================================================
    // TEST DELETE FIRST
    cout << "TES DELETE FIRST" << endl;

    deleteFirst(L, P);
    cout << "My output : ";
    cout<<info(P)<<endl;
    cout<<"output should be: 8"<<endl;
    printInfo(L);
    cout<<"output should be: 3, 6, 5, 4, 2,"<<endl;
    delete P;

    //==================================================
    // TEST DELETE LAST
    cout << "TES DELETE LAST" << endl;

    deleteLast(L, P);
    cout << "My output : ";
    cout<<info(P)<<endl;
    cout<<"output should be: 2"<<endl;
    printInfo(L);
    cout<<"output should be: 3, 6, 5, 4,"<<endl;
    delete P;

    //==================================================
    // TEST DELETE AFTER
    cout << "TES DELETE AFTER" << endl;

    Prec = findElm(L, 6);
    deleteAfter(L,Prec,P);
    printInfo(L);
    cout<<"output should be: 3, 6, 4, "<<endl;

    //==================================================
    // TEST CONCAT
    cout << "TES CONCAT" << endl;

    createList(La);
    createList(Lb);
    createList(Lc);

    for(i=4;i<=6;i++){
        createNewElmt(i, P);
        insertLast(La, P);
    }
    for(i=7;i<=10;i++){
        createNewElmt(i, P);
        insertLast(Lb, P);
    }
    for(i=1;i<=3;i++){
        createNewElmt(i, P);
        insertLast(Lc, P);
    }
    while(First(La) != NULL) {
        deleteFirst(La, P);
        insertLast(Lc, P);
    }
    while(First(Lb) != NULL) {
        deleteFirst(Lb, P);
        insertLast(Lc, P);
    }

    printInfo(Lc);
    cout<<"output should be: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, "<<endl;

    //==================================================
    // TEST MEDIAN
    cout << "TES MEDIAN" << endl;

    cout << "My output : ";
    float m;
    m = median(Lc);
    cout<< m <<endl;
    cout<<"output should be: 5.5 "<<endl;
}
