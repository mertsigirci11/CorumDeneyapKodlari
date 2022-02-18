#include <iostream>

using namespace std;

int main()
{
    int sayi1,sayi2,sayi3;

    cout<<"1. sayiyi giriniz: ";
    cin>>sayi1;

    cout<<"2.sayiyi giriniz: ";
    cin>>sayi2;

    cout<<"3. sayiyi giriniz: ";
    cin>>sayi3;

    int buyuk,orta,kucuk;

    if(sayi1>sayi2)
    {
        if(sayi3>sayi1)
        {
            buyuk=sayi3;
            orta=sayi1;
            kucuk=sayi2;
        }
        else
        {
            buyuk=sayi1;
            if(sayi2>sayi3)
            {
                orta=sayi2;
                kucuk=sayi3;
            }
        }
    }
    else
    {
        if(sayi2>sayi3)
        {
            buyuk=sayi2;
            if(sayi3>sayi1)
            {
                orta=sayi3;
                kucuk=sayi1;
            }
            else
            {
                orta=sayi1;
                kucuk=sayi3;
            }
        }
        else
        {
            buyuk=sayi3;
            orta=sayi2;
            kucuk=sayi1;
        }
    }

    cout<<"Buyuk sayi: "<<buyuk<<endl;
    cout<<"Orta sayi: "<<orta<<endl;
    cout<<"Kucuk sayi: "<<kucuk<<endl;
    return 0;
}
