#include <iostream>
using namespace std;

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

    Dikdortgen()//Yapýcý fonksiyon
    {
        cout<<"Parametre girilmeden olusturulan nesnede calisacagim"<<endl;
        cout<<"Nesne olusturulur olusturulmaz yapici fonksiyon yani ben calistim"<<endl;
    }

    Dikdortgen(int uzun,int kisa)//Yapýcý fonksiyon
    {
        uzunKenar=uzun;
        kisaKenar=kisa;
        cout<<"Nesne olusturulurken parametre girilirse ben calisacagim"<<endl;
    }

    //altgr+ü => 2kez bas
    ~Dikdortgen()//Yýkýcý fonksiyon
    {
        //Yýkýcý metot herhangi bir parametre almaz
        cout<<"Program calismasi bitince ben calisirim ve olusturulan sinif nesnelerini hafizadan silerim"<<endl;
    }
};

int main()
{
    Dikdortgen dikdortgen1;//nesne yaratýlma iþleme yapýlýr yapýlmaz yapýcý metot kendiliðinden çalýsýr.
    Dikdortgen dikdortgen2(8,7);
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;

    return 0;
}
