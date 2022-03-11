#include <iostream>

using namespace std;


int enBuyuk(int dizi[6]);
int ikiFarkliDizininEBToplami(int dizi1[6],int dizi2[6]);


int main()
{
    int dizi1[6]={1,2,3,5,10,4};
    int dizi2[6]={12,42,37,55,10,14};
    int toplam;
    toplam=ikiFarkliDizininEBToplami(dizi1,dizi2);
    cout<<"Dizilerin en buyuk elemanlarinin toplami: "<<toplam<<endl;
    return 0;
}

int ikiFarkliDizininEBToplami(int dizi1[6],int dizi2[6])
{
    return enBuyuk(dizi1)+ enBuyuk(dizi2);
}

int enBuyuk(int dizi[6])
{
    int enBuyukEleman=dizi[0];
    for(int i=1; i<6; i++)
    {
        if(dizi[i]>enBuyukEleman)
        {
            enBuyukEleman=dizi[i];
        }
    }
    return enBuyukEleman;
}

