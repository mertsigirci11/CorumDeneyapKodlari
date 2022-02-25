#include <iostream>

using namespace std;

int main()
{
    int yabanciDilNotlari[4];

    for(int i=0; i<=4; i++)
    {
        cout<<i+1<<". ogrencinin notu: ";
        cin>>yabanciDilNotlari[i];
    }

    for(int i=0; i<=4; i++)
    {
        cout<<i+1<<". ogrencinin notu: "<<yabanciDilNotlari[i]<<endl;
    }
    return 0;
}
