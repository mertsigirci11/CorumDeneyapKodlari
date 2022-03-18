#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
//.h uzantýlý dosyalarýmýzda sýnýfýmýzdaki degiskenler ve metodlarýmýzýn isimleri bulunur.
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
