#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

class complexe
{
    float Re;
    float img;

public:

    complexe(float Re=0 , float img=0 )
    {
        this ->Re = Re;
        this->img = img;
    }

    void affiche()
    {
        cout << "La partie reel est: " << this->Re << endl;
        cout << "La partie imaginaire est: " << this->img << "i" << endl << endl;

        cout<< "***************AFFICHAGE*********************" << endl;

        cout << "Z = " << this->Re << " + " << this->img << "i" << endl << endl;
    }

    float module (complexe c)
    {

        int a;
        int b;
        float M;

        a = c.Re * c.Re;
        b = c.img * c.img;

        M = sqrt (a + b);
        return M;
    }

    void conjugue ()
    {
         cout << "Z = " << this->Re << " - " << this->img << "i" << endl << endl;

    }

    complexe operator + (complexe c)
    {
        complexe add;
        add.img = this->img + c.img;
        add.Re = this->Re + c.Re;
        return add;
    }

     complexe operator * (complexe c)
    {
        complexe multi;
        multi.Re = (this->Re * c.Re) - (this->img * c.img);
        multi.img = (this->Re * c.img) - (this->img * c.Re);
        return multi;
    }

    complexe operator - (complexe c)
    {
        complexe sous;
        sous.img = this->img - c.img;
        sous.Re = this->Re - c.Re;
        return sous;
    }

    //Operation entre un complexe et un double

    complexe operator + (double n)
    {
        complexe c;

        c.Re = this->Re + n;
        c.img = this->img;
        return c;

    }

    complexe operator - (double n)
    {
        complexe c;

        c.Re = this->Re - n;
        c.img = this->img;
        return c;

    }

    complexe operator * (double n)
    {
        complexe c;

        c.Re = this->Re * n;
        c.img = this->img * n;
        return c;

    }


};


#endif // COMPLEXE_H_INCLUDED
