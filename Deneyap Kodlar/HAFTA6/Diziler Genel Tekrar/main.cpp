#include <iostream>

using namespace std;

int main()
{
    /*
        Diziler tek tipte veri saklayabilir.
    */
    int dizi1[4] = {1,2,3,4};
    char dizi2[4] = {'a','b','c','d'};
    float dizi3[2];//De�erlerini yazmadan tan�mlad�k
    //dizi3'�n de�erlerini ayr� ayr� kodlar tan�mlam�� olduk.
    dizi3[0]=1.6;
    dizi3[1]=2.7;
    dizi3[2]=4.8;

    //Dizinin indisi s�f�rdan ba�lar.

    /*
        Diziler ikiye ayr�l�r
        Tek boyutlu ve �ok boyutlu
    */
    int dizi4[2][2]={{1,2},{3,4}};//Soldaki indis sat�ra, Sa�daki indiste s�tuna denk gelir.
    dizi4[2][1]=19;

    /*
        Diziler statik bir veri tipidir. Yani dizi olu�tururken diziye vermi� oldu�umuz
        boyut de�i�tirilemez. Ama dizinin de�erleri de�i�tirilebilir.
    */

    /*
        Diziyi olu�turup tek bir de�er tan�mlarsak o dizinin t�m elemanlar� o de�ere e�it olur.
    */
    int a[5]={0};
    cout<<a[0];
    cout<<a[1];
    cout<<a[2];
    cout<<a[3];

    /*
        Kullan�c�dan bir de�er al�p dizi boyutunu ona g�re belirleyebiliriz.
    */

    cout<<"Gireceginiz kelimenin uzunlugu: ";
    int kelimeUzunlugu; //DENEYAP 7
    cin>>kelimeUzunlugu;

    char kelime[kelimeUzunlugu-1];//6= DENEYAP

    for(int i=0; i<kelimeUzunlugu; i++)//Dizimize eleman atad�k
    {
        cout<<i+1<<". harfi: ";
        cin>>kelime[i];
    }
    for(int i =0; i<kelimeUzunlugu; i++)//Dizimizdeki kelimeyi yazd�r�r.
    {
        cout<<kelime[i];
    }


    /*
    Dizinin elemanlar�na tek tek de�er atayabiliriz.
    */
    string dizi7[2];
    dizi7[0]="Corum";
    dizi7[1]="Deneyap";
    dizi7[2]="Atolyeleri";

    /*
        Bir dizinin elamanlar�n�n de�erlerini bir ba�ka diziye atayabiliriz.
    */
    int dizi8[2]={1,2};
    int dizi9[4]={4,5,6,7};
    cout<<"Eski deger:"<<dizi9[2]<<endl;
    dizi9[2]=dizi8[1];//dizi9un 2. indisindeki de�eri de�i�tirdik.
    cout<<"Yeni deger:"<<dizi9[2]<<endl;


    return 0;
}
