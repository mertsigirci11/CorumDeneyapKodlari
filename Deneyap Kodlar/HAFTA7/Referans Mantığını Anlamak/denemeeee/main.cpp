#include <iostream>

using namespace std;
//Sýnýf tanýmlamak için class anahtar kelimesini kullanýrýz.
//Sýnýf ismi büyük harfle baþlar
class Araba
{
    /*
        Eriþim belirteci yazýyoruz. 2 tane belirtecimiz var
        1-public: sýnýfýmýzda tanýmlanan deðiþkenleri ve fonksiyonlarý
                  HER TARAFTAN eriþilebilir yapar.
        2-private:sýnýfýmýzda tanýmlanan deðiþkenleri ve fonksiyonlarý
                  SADECE sýnýf içinden eriþilebilir yapar.
    */
public://eriþim belirtecimizi yazdýktan sonra verilerimizi tanýmlayabiliriz.
    string marka;
    int yil;
    string model;
    //DAHÝLÝ FONKSÝYON TANIMLAMA
    void hizlanma()
    {
        cout<<"Araba hizlaniyor..."<<endl;
    }
    void yavaslama();
private://eriþim belirtecimizi yazdýktan sonra verilerimizi tanýmlayabiliriz.
    int motorSeriNumarasi;
};

int main()
{
    Araba nesne1;//nesnemizi tanýmladýk lakin içindeki deðerler boþ.
    nesne1.marka="TOGG";//nesnemizin public deðiþkenlerini tanýmladýk
    nesne1.model="Sedan";//nesnemizin public deðiþkenlerini tanýmladýk
    nesne1.yil=2023;//nesnemizin public deðiþkenlerini tanýmladýk
    //nesne1.motorSeriNumarasi=4;//private olduðu için bu deðiþkene sadece tanýmlandýðý sýnýf içerisinden eriþilebilir.
    /*
        nesne1.hizlanma();
        nesne1.yavaslama();

        fonksiyonlarýmýzýn iþlevlerini 2 türlü tanýmlayabiliriz.
        1-Dahili olarak
        2-Harici olarak

    */
    nesne1.hizlanma();
    nesne1.yavaslama();

    //Þimdi tanýmladýðýmýz deðiþkenleri ekranýmýza yazdýralým.
    cout<<"Araba markasi: "<<nesne1.marka<<endl;
    cout<<"Araba modeli: "<<nesne1.model<<endl;
    cout<<"Araba yili: "<<nesne1.yil<<endl;
    return 0;

}

//HARÝCÝ FONKSÝYON TANIMLAMA
void Araba :: yavaslama()
{
    cout<<"Araba yavasliyor..."<<endl;
}
