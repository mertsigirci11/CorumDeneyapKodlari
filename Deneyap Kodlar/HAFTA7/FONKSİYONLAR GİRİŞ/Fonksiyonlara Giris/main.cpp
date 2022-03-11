#include <iostream>

using namespace std;

void selamla1()
{
    cout<<"Selamla1: Merhaba Dunya"<<endl;
}

void selamla2();

void toplama(int a, int b)
{
    cout<<a<<"+"<<b<<"="<<a+b;
}

string kelimeBirlestir(string kelime1, string kelime2)
{
    cout<<"Kelime1: "<<kelime1<<endl;
    cout<<"Kelime2: "<<kelime2<<endl;
    return kelime1+kelime2;
}

int daireAlanHesapla(int yaricap)
{
    return 3*yaricap*yaricap;
}

int main()
{
    int alan;
    alan=daireAlanHesapla(3);
    cout<<"Alan: "<<alan<<endl;

    /*
        fonksiyon Tan�mlamalar�

        1-Main metodunun �zerine kodlar�yla birlikte yaz�m.
        2-Meain metodunun �zerine ismi, main metodunun alt�na kodlar� yaz�l�r.
    */

    /*
            De�er d�nd�rmeyen fonksiyonlar(void)

            ->De�er d�nd�rmez sadece fonksiyon i�ine yazd���m�z kodlar� �al��t�r�r.
    */

    /*
        Fonksiyonlara Paramatre Verme

        ->Bir veya birden fazla paremetre verilebilir.
        ->Parametreler virg�lle ayr�l�r.
        ->�lk �nce tipi, sonra parametre ismi yaz�l�r.
        ->Parametreler fonksiyon i�inde kulan�lmak i�in verilir.
    */

    /*
        De�er d�nd�ren fonksiyonlar(int,double,stringi,bool)

        ->Yazd���m�z kodlar sonucunda bir de�ere sahip olan fonksiyonlard�r.
        ->Sahip oldu�u de�er "return" anahtar kelimesiyler belirtilir.
        ->return anahtar kelimesinden sonra fonksiyonumuzda yazd�klar�m�z �al��maz.
        ->Bu sayede fonksiyonlardan elde etti�imiz de�eri bir de�i�kene atayabiliriz
            veya ba�ka bir yerde kullanabiliriz.
    */

    selamla1();
    selamla2();
    toplama(5,25);
    cout<<endl;
    string kelime =kelimeBirlestir("Corum","Deneyap");//CorumDeneyap
    cout<<"kelime= "<<kelime<<endl;
    cout<<kelimeBirlestir("Corum","Deneyap")<<endl;

    return 0;
}

void selamla2()
{
    cout<<"Selamla2: Merhaba Dunya"<<endl;
}


