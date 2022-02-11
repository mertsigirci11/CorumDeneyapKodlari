#include <iostream>

using namespace std;

int main()
{
    float sayi1,sayi2,sonuc;

    char matematikselIsaret;

    cout<<"Sayi1: ";
    cin>>sayi1;
    cout<<"Sayi2: ";
    cin>>sayi2;

    cout<<"Yapmak istediginiz islem\n->+\n->-\n->*\n->/"<<endl;
    cout<<"Seciminiz: ";
    cin>>matematikselIsaret;

    if(matematikselIsaret == '+')
    {
        sonuc=sayi1+sayi2;
        cout<<"Sonuc: "<<sonuc;
    }
    else if(matematikselIsaret == '-')
    {
        sonuc=sayi1-sayi2;
        cout<<"Sonuc: "<<sonuc;
    }
    else if(matematikselIsaret == '*')
    {
        sonuc=sayi1*sayi2;
        cout<<"Sonuc: "<<sonuc;
    }
    else if(matematikselIsaret == '/')
    {
        sonuc=sayi1/sayi2;
        cout<<"Sonuc: "<<sonuc;
    }
    else
    {
        cout<<"Girdiginiz operator programda tanimli degildir.";
    }


    return 0;
}
