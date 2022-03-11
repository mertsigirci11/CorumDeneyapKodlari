#include <iostream>

using namespace std;

class Ogrenci
{
public:
    int ndp;
    int wp;
    int pg;
    int pdp;
    int ortalama;
};

class Dersler
{
public:

    int ndpKredi=6;
    int wpKredi=4;
    int pgKredi=6;
    int pdpKredi=5;
    int toplam=21;

};

int main()
{
    //3 tane öðrenci tanýmlayalým.
    Ogrenci ogr1;//1. ogrenci
    ogr1.ndp=60;
    ogr1.pdp=70;
    ogr1.wp=50;
    ogr1.pg=100;


    Ogrenci ogr2;//2. ogrenci
    ogr2.ndp=50;
    ogr2.pdp=30;
    ogr2.wp=90;
    ogr2.pg=20;

    Ogrenci ogr3;//3. ogrenci
    ogr3.ndp=90;
    ogr3.pdp=95;
    ogr3.wp=90;
    ogr3.pg=100;

    //Kredileri yazmak için dersler nesnesi tanimladik
    Dersler dersler1;

    ogr1.ortalama=(ogr1.ndp*dersler1.ndpKredi+
                   ogr1.pdp*dersler1.pdpKredi+
                   ogr1.wp*dersler1.wpKredi+
                   ogr1.pg*dersler1.pgKredi)/dersler1.toplam;

    ogr2.ortalama=(ogr2.ndp*dersler1.ndpKredi+
                   ogr2.pdp*dersler1.pdpKredi+
                   ogr2.wp*dersler1.wpKredi+
                   ogr2.pg*dersler1.pgKredi)/dersler1.toplam;

    ogr3.ortalama=(ogr3.ndp*dersler1.ndpKredi+
                   ogr3.pdp*dersler1.pdpKredi+
                   ogr3.wp*dersler1.wpKredi+
                   ogr3.pg*dersler1.pgKredi)/dersler1.toplam;

    cout<<"Ogrenci1 ortalamasi: "<<ogr1.ortalama<<endl;
    cout<<"Ogrenci2 ortalamasi: "<<ogr2.ortalama<<endl;
    cout<<"Ogrenci3 ortalamasi: "<<ogr3.ortalama<<endl;



    return 0;
}
