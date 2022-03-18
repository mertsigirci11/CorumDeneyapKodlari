#include "Dikdortgen.h"
//.cpp uzantýlý dosyalar bizim kodumuz kaynak kodlarýdýr.
#include <iostream>
using namespace std;

int Dikdortgen::alanHesapla()
{
    return kisaKenar*uzunKenar;
}

void Dikdortgen::kenarDuzenle(int ukenar, int kkenar)
{
    kisaKenar=kkenar;
    uzunKenar=ukenar;
}

void Dikdortgen::bilgileriGetir()
{
    cout<<"Kisa kenar: "<< kisaKenar<<endl;
    cout<<"Uzun kenar: "<< uzunKenar<<endl;
}

Dikdortgen::Dikdortgen()
{
    cout<<"Yeni bir dikdortgen(parametre verilmeden) olusturuldu"<<endl;
}

Dikdortgen::Dikdortgen(int ukenar, int kkenar)
{
    kisaKenar=kkenar;
    uzunKenar=ukenar;
    cout<<"Yeni bir dikdortgen (parametre verilerek) olusturuldu"<<endl;
}

Dikdortgen::~Dikdortgen()
{
    cout<<"Olusturulan nesne hafizadan silindi cunku yikici metot calisti"<<endl;
}
