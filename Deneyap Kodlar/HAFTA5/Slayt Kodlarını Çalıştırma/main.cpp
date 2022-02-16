#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<10;i++)
    {
        cout<<"DENEYAP"<<endl;
    }
    cout<<"****************"<<endl;
    int sayi=1;
    while(sayi<=100)
    {
        cout<<sayi<<endl;
        sayi++;
    }
    cout<<"****************"<<endl;
    for(int i=1; i<10; i++)
    {
        cout<<i<<endl;
    }
    cout<<"****************"<<endl;
    //int i;
    for(int i=1; i<20; i++)
    {
        if(i%2 == 1)
        {
            cout<<i<<endl;
        }
    }
    cout<<"****************"<<endl;
    int i=1;
    while(i<20)
    {
        if(i%2 == 1)
        {
            cout<<i<<endl;
        }
        i++;
    }
    cout<<"****************"<<endl;
    int j=1;
    do
    {
        if(j%2 == 1)
        {
            cout<<j<<endl;
        }
        j++;
    }while(j<20);

    return 0;
}
