#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
//.h uzant�l� dosyalar�m�zda s�n�f�m�zdaki degiskenler ve metodlar�m�z�n isimleri bulunur.
#include <iostream>
using namespace std;

class Dikdortgen
{
private:
    int kisaKenar;
    int uzunKenar;
public:
    void kenarDuzenle(int,int);
    int alanHesapla();
    void bilgileriGetir();
    Dikdortgen();
    Dikdortgen(int,int);
    ~Dikdortgen();
};

#endif // DIKDORTGEN_H
