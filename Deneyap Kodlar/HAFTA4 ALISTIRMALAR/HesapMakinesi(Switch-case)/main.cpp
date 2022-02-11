#include <iostream>

using namespace std;

int main()
{
    float sayi1,sayi2,sonuc;
    cout<<"Sayi1: ";
    cin>>sayi1;
    cout<<"Sayi2: ";
    cin>>sayi2;

    char matematikselIsaret; //+,-,*,/

    cout<<"Hangi matematiksel islemi yapmak istiyorsunuz?"<<endl;
    cout<<"->+\n->-\n->*\n->/"<<endl;

    cout<<"Seciminiz: ";
    cin>>matematikselIsaret;

    switch(matematikselIsaret)
    {
    case '+':
        sonuc=sayi1+sayi2;
        cout<<"Sonuc: "<<sonuc;
        break;
    case '-':
        sonuc=sayi1-sayi2;
        cout<<"Sonuc: "<<sonuc;
        break;
    case '*':
        sonuc=sayi1*sayi2;
        cout<<"Sonuc: "<<sonuc;
        break;
    case '/':
        sonuc=sayi1/sayi2;
        cout<<"Sonuc: "<<sonuc;
        break;
    default:
        cout<<"Girdiginiz karakteri program tanimamaktadir.";
        break;
    }
    return 0;
}
