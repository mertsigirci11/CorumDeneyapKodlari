#include <iostream>

using namespace std;

void selamla(string isim)//1 parametre
{
    cout<<"Merhaba "<<isim<<" hosgeldin"<<endl;
}

void selamla(string isim, string soyisim)//2 parametre
{
    cout<<"Merhaba "<<isim<<" "<<soyisim<<" hosgeldin"<<endl;
}

void toplama(int a, int b)//2 tane sayýyý toplayacak
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

void toplama(int sayi1,int sayi2, int sayi3)
{
    cout<<sayi1<<"+"<<sayi2<<"+"<<sayi3<<"="<<sayi1+sayi2+sayi3<<endl;
}
int main()
{
    selamla("mert");
    selamla("mert","sigirci");
    cout<<"xxxxxxxxxxxxxx"<<endl;
    toplama(7,8);
    toplama(5,6,9);
    return 0;
}
