#include <iostream>

using namespace std;

//Sýnýf tanýmlamak için class anahtar kelimesi kullanýlýr.
//Sýnýfýmýzýn ilk harfi adlandýrmada büyük olur.

class Araba
{
    /*
        Eriþim belirteçleri yazýyoruz.
        1-Public: Sýnýfýmýzda tanýmlanan deðiþken ve fonksiyonlarýn yazdýðýmýz
                    kodda her eriþimini saðlar.
        2-Private: Sýnýfýmýzda tanýmlanan deðiþken ve fonksiyonlarýn sadece
                    tanýmlandýðý sýnýfta kullanýlmasýný saðlar.
    */
public:
    int tekerlekSayisi;
    string marka;
    string model;
    int yil;
    int hiz=0;
    //DAHÝLÝ FONKSÝYON TANIMLAMA
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
    Araba nesne1;//Nesnemizi tanýmladýk. Sýnýf içerisinde tanýmlanan deðerler boþ.
    cout<<"Nesnemizin markasi: "<<nesne1.marka<<endl;//Nesne deðiþkenine deðer vermediðimiz için boþtur
    cout<<"Nesnemizin modeli: "<<nesne1.model<<endl;//Nesne deðiþkenine deðer vermediðimiz için boþtur
    nesne1.hiz=50;//Eriþim tipi public olduðu için her yerden eriþebiliriz ve deðer atayabiliriz.
    nesne1.marka="TOGG";//Eriþim tipi public olduðu için her yerden eriþebiliriz ve deðer atayabiliriz.
    nesne1.model="Sedan";//Eriþim tipi public olduðu için her yerden eriþebiliriz ve deðer atayabiliriz.
    nesne1.tekerlekSayisi=4;//Eriþim tipi public olduðu için her yerden eriþebiliriz ve deðer atayabiliriz.
    nesne1.yil=2023;//Eriþim tipi public olduðu için her yerden eriþebiliriz ve deðer atayabiliriz.
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

    //nesne1.motorSeriNumarasi=6;//Private olduðu için deðer atama iþlemi yapamadýk.
    //nesne1.saseNumarasi=10;//Private olduðu için deðer atama iþlemi yapamadýk.
    //nesne1.vergiNumarasi=9;//Private olduðu için deðer atama iþlemi yapamadýk.
    //cout<<"Nesnemizin saseNosu: "<<nesne1.saseNumarasi<<endl;//Private olduðu için deðer atama iþlemi yapamadýk.
    nesne1.saseNumarasiGoster();

    return 0;
}


//HARÝCÝ FONKSÝYON TANIMLAMA
void Araba ::yavaslama()
{
    hiz-=10;
    cout<<"Arabanin hizi 10 azaldi"<<endl;
}
