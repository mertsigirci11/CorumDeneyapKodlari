#ifndef MATEMATIK_H
#define MATEMATIK_H

#include <iostream>//Bunu eklemezsek cin cout endl gibi kavramlar çalýþmaz
using namespace std;//Bunu eklemezsek cin cout endl gibi kavramlar çalýþmaz

class Matematik
{
public:
    void toplama(int sayi1,int sayi2)
    {
        cout<<"toplam:" <<sayi1+sayi2<<endl;
    }
    void carpma(int sayi1,int sayi2)
    {
        cout<<"carpim:" <<sayi1*sayi2<<endl;
    }
    void bolme(int sayi1,int sayi2)
    {
        cout<<"bolum:" <<sayi1/sayi2<<endl;
    }
};

#endif // MATEMATIK_H
