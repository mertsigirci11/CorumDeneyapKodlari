#include <iostream>

using namespace std;

int main()
{
    float pgNot,ndpNot,wpNot,pdpNot;
    float pgKredi,ndpKredi,wpKredi,pdpKredi;
    float ortalama;

    string ad,soyad;

    cout<<"Adinizi giriniz: ";
    cin>>ad;
    cout<<"Soyadinizi giriniz: ";
    cin>>soyad;

    cout<<"pg notu: ";
    cin>>pgNot;

    cout<<"ndp notu: ";
    cin>>ndpNot;

    cout<<"wp notu: ";
    cin>>wpNot;

    cout<<"pdp notu: ";
    cin>>pdpNot;

    ortalama=(pgNot*pgKredi)+(ndpNot*ndpKredi)+(wpNot*wpKredi)+(pdpNot*pdpKredi);

    ortalama = ortalama/(pgKredi+ndpKredi+wpKredi+pdpKredi);

    cout<<ad+" "+soyad<<endl;
    cout<<"Ortalama: "<<ortalama;

    return 0;
}
