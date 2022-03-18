#include <iostream>
#include "Dikdortgen.h"

using namespace std;

int main()
{
    Dikdortgen d1;
    Dikdortgen d2(7,8);
    d1.bilgileriGetir();
    d1.kenarDuzenle(10,20);
    d1.bilgileriGetir();
    d1.alanHesapla();
    return 0;
}
