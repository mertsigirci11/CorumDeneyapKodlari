#include <iostream>

using namespace std;

void degerleriDegistir1(int sayi1,int sayi2)
{
    cout<<"degerleriDegistir2 metodu calisti"<<endl;
    cout<<"Girilen 1.parametrenin RAM'deki adresi: "<<&sayi1<<endl;
    cout<<"Girilen 2.parametrenin RAM'deki adresi: "<<&sayi2<<endl;
    cout<<"Fonksiyon calismadan onceki degerler:"<<endl;
    cout<<"sayi1: "<<sayi1<<endl;
    cout<<"sayi2: "<<sayi2<<endl;
    int tamponDegisken;
    tamponDegisken=sayi1;
    sayi1=sayi2;
    sayi2=tamponDegisken;
    //cout<<"Fonksiyon calistiktan sonraki degerler:"<<endl;
    cout<<"sayi1: "<<sayi1<<endl;
    cout<<"sayi2: "<<sayi2<<endl;
}
void degerleriDegistir2(int &sayi1, int &sayi2)
{
    cout<<"degerleriDegistir2 metodu calisti"<<endl;
    cout<<"Girilen 1.parametrenin RAM'deki adresi: "<<&sayi1<<endl;
    cout<<"Girilen 2.parametrenin RAM'deki adresi: "<<&sayi2<<endl;
    cout<<"Fonksiyon calismadan onceki degerler:"<<endl;
    cout<<"sayi1: "<<sayi1<<endl;
    cout<<"sayi2: "<<sayi2<<endl;
    int tamponDegisken;
    tamponDegisken=sayi1;
    sayi1=sayi2;
    sayi2=tamponDegisken;
    //cout<<"Fonksiyon calistiktan sonraki degerler:"<<endl;
    cout<<"sayi1: "<<sayi1<<endl;
    cout<<"sayi2: "<<sayi2<<endl;
}

int main()
{
    int degerA=4;
    int degerB=9;
    cout<<"Fonksiyon calismadan önce:"<<endl;
    cout<<"degerA eski deger: "<<degerA<<endl;
    cout<<"degerB eski deger: "<<degerB<<endl;
    cout<<"degerA RAM'deki yeri: "<<&degerA<<endl;
    cout<<"degerB RAM'deki yeri: "<<&degerB<<endl;
    degerleriDegistir2(degerA,degerB);
    cout<<"Fonksiyon calistiktan sonra:"<<endl;
    cout<<"degerA yeni deger: "<<degerA<<endl;
    cout<<"degerB yeni deger: "<<degerB<<endl;

    return 0;
}
