#include <iostream>

using namespace std;

int main()
{
    int dizi[4];

    dizi[0]=1;
    dizi[1]=2;
    dizi[2]=3;
    dizi[3]=4;
    //dizi[4]=5;

    for(int i=0; i<=4; i++)
    {
        cout<<i<<". indis: "<<dizi[i]<<endl;
    }

    cout<<"0. indis: "<<dizi[0]<<endl;
    cout<<"1. indis: "<<dizi[1]<<endl;
    cout<<"2. indis: "<<dizi[2]<<endl;
    cout<<"3. indis: "<<dizi[3]<<endl;
    cout<<"4. indis: "<<dizi[4]<<endl;
    return 0;
}
