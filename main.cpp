#include <iostream>

#include "complexe.h"

using namespace std;

int main()
{
    complexe *C1 = new complexe(5, 8);

    complexe *C2 = new complexe(4, 3);

    complexe C;
    cout << "*****************le nombre complexe C1******************" << endl;

    C1->affiche();

    cout << "*****************Le module****************** " << endl;
    cout << C1->module(*C1) << endl;
    cout << "*****************Le conjugue***************" << endl;
    C1->conjugue();


    cout << "*****************le nombre complexe C2******************" << endl;
    C2->affiche();
    cout << "*****************Le module****************** " << endl;
    cout << C2->module(*C2) << endl;
    cout << "*****************Le conjugue***************" << endl;
    C2->conjugue();

    cout << "*****************Les operation entre deux nombre complexe******************" << endl;

    cout << "**************La somme de C1 et C2****************" << endl << endl;

    C = *C1 + (*C2);
    C.affiche();
    cout << "**************La difference de C1 et C2****************" << endl << endl;

    C = *C1 - (*C2);
    C.affiche();

    cout << "**************Le produit de C1 et C2****************" << endl << endl;

    C = *C1 * (*C2);
    C.affiche();


    cout << "*****************Les operation entre un nombre complexe et un double******************" << endl;

    cout << "*************La somme entre un nombre complexe C1 et un double ********" << endl;

    C = *C1 + (4);
    C.affiche();

     cout << "*************La difference entre un nombre complexe C1 et un double ********" << endl;

    C = *C1 - (4);
    C.affiche();

     cout << "*************Le produit entre un nombre complexe C1 et un double ********" << endl;

    C = *C1 * (4);
    C.affiche();




    return 0;
}
