#include <iostream>

using namespace std;

//S�n�f tan�mlamak i�in class anahtar kelimesi kullan�l�r.
//S�n�f�m�z�n ilk harfi adland�rmada b�y�k olur.

class Araba
{
    /*
        Eri�im belirte�leri yaz�yoruz.
        1-Public: S�n�f�m�zda tan�mlanan de�i�ken ve fonksiyonlar�n yazd���m�z
                    kodda her eri�imini sa�lar.
        2-Private: S�n�f�m�zda tan�mlanan de�i�ken ve fonksiyonlar�n sadece
                    tan�mland��� s�n�fta kullan�lmas�n� sa�lar.
    */
public:
    int tekerlekSayisi;
    string marka;
    string model;
    int yil;
    int hiz=0;
    //DAH�L� FONKS�YON TANIMLAMA
    void hizlanma()
    {
        hiz+=10;
        cout<<"Arabanin hizi 10 artti"<<endl;
    }
    void yavaslama();
    void saseNumarasiGoster()
    {
        cout<<"Arabanin sase numarasi: "<<saseNumarasi<<endl;
    }
private:
    int motorSeriNumarasi=5;
    int saseNumarasi=6;
    int vergiNumarasi=7;
};

int main()
{
    Araba nesne1;//Nesnemizi tan�mlad�k. S�n�f i�erisinde tan�mlanan de�erler bo�.
    cout<<"Nesnemizin markasi: "<<nesne1.marka<<endl;//Nesne de�i�kenine de�er vermedi�imiz i�in bo�tur
    cout<<"Nesnemizin modeli: "<<nesne1.model<<endl;//Nesne de�i�kenine de�er vermedi�imiz i�in bo�tur
    nesne1.hiz=50;//Eri�im tipi public oldu�u i�in her yerden eri�ebiliriz ve de�er atayabiliriz.
    nesne1.marka="TOGG";//Eri�im tipi public oldu�u i�in her yerden eri�ebiliriz ve de�er atayabiliriz.
    nesne1.model="Sedan";//Eri�im tipi public oldu�u i�in her yerden eri�ebiliriz ve de�er atayabiliriz.
    nesne1.tekerlekSayisi=4;//Eri�im tipi public oldu�u i�in her yerden eri�ebiliriz ve de�er atayabiliriz.
    nesne1.yil=2023;//Eri�im tipi public oldu�u i�in her yerden eri�ebiliriz ve de�er atayabiliriz.
    cout<<"Nesnemizin markasi: "<<nesne1.marka<<endl;
    cout<<"Nesnemizin modeli: "<<nesne1.model<<endl;
    cout<<"Nesnemizin hizi: "<<nesne1.hiz<<endl;
    cout<<"Nesnemizin tekerlek sayisi: "<<nesne1.tekerlekSayisi<<endl;
    cout<<"Nesnemizin yili: "<<nesne1.yil<<endl;
    nesne1.hizlanma();
    nesne1.hizlanma();
    nesne1.hizlanma();
    cout<<"Nesnemizin hizi: "<<nesne1.hiz<<endl;
    nesne1.yavaslama();
    nesne1.yavaslama();
    cout<<"Nesnemizin hizi: "<<nesne1.hiz<<endl;

    //nesne1.motorSeriNumarasi=6;//Private oldu�u i�in de�er atama i�lemi yapamad�k.
    //nesne1.saseNumarasi=10;//Private oldu�u i�in de�er atama i�lemi yapamad�k.
    //nesne1.vergiNumarasi=9;//Private oldu�u i�in de�er atama i�lemi yapamad�k.
    //cout<<"Nesnemizin saseNosu: "<<nesne1.saseNumarasi<<endl;//Private oldu�u i�in de�er atama i�lemi yapamad�k.
    nesne1.saseNumarasiGoster();

    return 0;
}


//HAR�C� FONKS�YON TANIMLAMA
void Araba ::yavaslama()
{
    hiz-=10;
    cout<<"Arabanin hizi 10 azaldi"<<endl;
}
