#include <iostream>

using namespace std;

int main()
{
    int toplamNot;
    int ogrenciNotu;
    int sinifMevcudu=10;
    int ortalama=0;

    for(int i=1; i<=sinifMevcudu; i++)
    {
        cout<<i<<". ogrencinin notunu giriniz: ";
        cin>>ogrenciNotu;
        toplamNot+=ogrenciNotu;
    }
    ortalama = toplamNot/sinifMevcudu;
    cout<<"Ortalama: "<<ortalama;
    return 0;
}
