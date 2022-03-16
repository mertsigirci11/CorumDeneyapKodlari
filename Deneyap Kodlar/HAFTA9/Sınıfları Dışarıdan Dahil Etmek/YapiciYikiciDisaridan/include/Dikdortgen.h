#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H

#include <iostream>//Bunu eklemezsek cin cout endl gibi kavramlar �al��maz
using namespace std;//Bunu eklemezsek cin cout endl gibi kavramlar �al��maz

class Dikdortgen
{
private:
    int uzunKenar;
    int kisaKenar;
public:
    void kenarlariDuzenle(int uzun, int kisa)
    {
        uzunKenar=uzun;
        kisaKenar=kisa;
    }
    int alanHesapla()
    {
        return uzunKenar*kisaKenar;
    }
    void bilgileriGetir()
    {
        cout<<"Uzun kenar: "<<uzunKenar<<endl;
        cout<<"Kisa kenar: "<<kisaKenar<<endl;
    }

    Dikdortgen()//Yap�c� fonksiyon
    {
        cout<<"Parametre girilmeden olusturulan nesnede calisacagim"<<endl;
        cout<<"Nesne olusturulur olusturulmaz yapici fonksiyon yani ben calistim"<<endl;
    }

    Dikdortgen(int uzun,int kisa)//Yap�c� fonksiyon
    {
        uzunKenar=uzun;
        kisaKenar=kisa;
        cout<<"Nesne olusturulurken parametre girilirse ben calisacagim"<<endl;
    }

    //altgr+� => 2kez bas
    ~Dikdortgen()//Y�k�c� fonksiyon
    {
        //Y�k�c� metot herhangi bir parametre almaz
        cout<<"Program calismasi bitince ben calisirim ve olusturulan sinif nesnelerini hafizadan silerim"<<endl;
    }
};

#endif // DIKDORTGEN_H
