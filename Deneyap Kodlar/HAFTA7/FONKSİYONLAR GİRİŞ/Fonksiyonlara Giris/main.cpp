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
        fonksiyon Tanýmlamalarý

        1-Main metodunun üzerine kodlarýyla birlikte yazým.
        2-Meain metodunun üzerine ismi, main metodunun altýna kodlarý yazýlýr.
    */

    /*
            Deðer döndürmeyen fonksiyonlar(void)

            ->Deðer döndürmez sadece fonksiyon içine yazdýðýmýz kodlarý çalýþtýrýr.
    */

    /*
        Fonksiyonlara Paramatre Verme

        ->Bir veya birden fazla paremetre verilebilir.
        ->Parametreler virgülle ayrýlýr.
        ->Ýlk önce tipi, sonra parametre ismi yazýlýr.
        ->Parametreler fonksiyon içinde kulanýlmak için verilir.
    */

    /*
        Deðer döndüren fonksiyonlar(int,double,stringi,bool)

        ->Yazdýðýmýz kodlar sonucunda bir deðere sahip olan fonksiyonlardýr.
        ->Sahip olduðu deðer "return" anahtar kelimesiyler belirtilir.
        ->return anahtar kelimesinden sonra fonksiyonumuzda yazdýklarýmýz çalýþmaz.
        ->Bu sayede fonksiyonlardan elde ettiðimiz deðeri bir deðiþkene atayabiliriz
            veya baþka bir yerde kullanabiliriz.
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


