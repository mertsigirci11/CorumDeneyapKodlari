#include <iostream>

using namespace std;

int main()
{
    /*
        Diziler tek tipte veri saklayabilir.
    */
    int dizi1[4] = {1,2,3,4};
    char dizi2[4] = {'a','b','c','d'};
    float dizi3[2];//Deðerlerini yazmadan tanýmladýk
    //dizi3'ün deðerlerini ayrý ayrý kodlar tanýmlamýþ olduk.
    dizi3[0]=1.6;
    dizi3[1]=2.7;
    dizi3[2]=4.8;

    //Dizinin indisi sýfýrdan baþlar.

    /*
        Diziler ikiye ayrýlýr
        Tek boyutlu ve Çok boyutlu
    */
    int dizi4[2][2]={{1,2},{3,4}};//Soldaki indis satýra, Saðdaki indiste sütuna denk gelir.
    dizi4[2][1]=19;

    /*
        Diziler statik bir veri tipidir. Yani dizi oluþtururken diziye vermiþ olduðumuz
        boyut deðiþtirilemez. Ama dizinin deðerleri deðiþtirilebilir.
    */

    /*
        Diziyi oluþturup tek bir deðer tanýmlarsak o dizinin tüm elemanlarý o deðere eþit olur.
    */
    int a[5]={0};
    cout<<a[0];
    cout<<a[1];
    cout<<a[2];
    cout<<a[3];

    /*
        Kullanýcýdan bir deðer alýp dizi boyutunu ona göre belirleyebiliriz.
    */

    cout<<"Gireceginiz kelimenin uzunlugu: ";
    int kelimeUzunlugu; //DENEYAP 7
    cin>>kelimeUzunlugu;

    char kelime[kelimeUzunlugu-1];//6= DENEYAP

    for(int i=0; i<kelimeUzunlugu; i++)//Dizimize eleman atadýk
    {
        cout<<i+1<<". harfi: ";
        cin>>kelime[i];
    }
    for(int i =0; i<kelimeUzunlugu; i++)//Dizimizdeki kelimeyi yazdýrýr.
    {
        cout<<kelime[i];
    }


    /*
    Dizinin elemanlarýna tek tek deðer atayabiliriz.
    */
    string dizi7[2];
    dizi7[0]="Corum";
    dizi7[1]="Deneyap";
    dizi7[2]="Atolyeleri";

    /*
        Bir dizinin elamanlarýnýn deðerlerini bir baþka diziye atayabiliriz.
    */
    int dizi8[2]={1,2};
    int dizi9[4]={4,5,6,7};
    cout<<"Eski deger:"<<dizi9[2]<<endl;
    dizi9[2]=dizi8[1];//dizi9un 2. indisindeki deðeri deðiþtirdik.
    cout<<"Yeni deger:"<<dizi9[2]<<endl;


    return 0;
}
