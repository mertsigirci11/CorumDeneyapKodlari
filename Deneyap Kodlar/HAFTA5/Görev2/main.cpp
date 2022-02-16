#include <iostream>

using namespace std;

int main()
{
    //For Döngüsü
    cout<<"For dongusu"<<endl;
    for(int i=1; i<=100; i++)
    {
        if(i%7 == 0)
        {
            cout<<i<<endl;
        }
    }

    //While Döngüsü
    cout<<"While Dongusu"<<endl;
    int sayi=1;
    while(sayi<=100)
    {
        if(sayi%7 == 0)
        {
            cout<<sayi<<endl;
        }
        sayi++;
    }

    //For Döngüsü Şart Yapısı Kullanmadan
    cout<<"For Dongusu"<<endl;
    for(int i=0; i<=100; i+=7)
    {
        if(i == 0)
        {
            continue;
        }
        else
        {
            cout<<i<<endl;
        }

    }

    return 0;
}
