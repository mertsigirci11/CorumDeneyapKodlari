#include <iostream>

using namespace std;

int main()
{
    //DÖNGÜSÜZ
    int dizi[9];
    cin>>dizi[0];
    cin>>dizi[1];
    cin>>dizi[2];
    cin>>dizi[3];
    cin>>dizi[4];
    cin>>dizi[5];
    cin>>dizi[6];
    cin>>dizi[8];
    cin>>dizi[9];

    cout<<dizi[0]<<endl;
    cout<<dizi[1]<<endl;
    cout<<dizi[2]<<endl;
    cout<<dizi[3]<<endl;
    cout<<dizi[4]<<endl;
    cout<<dizi[5]<<endl;
    cout<<dizi[6]<<endl;
    cout<<dizi[7]<<endl;
    cout<<dizi[8]<<endl;
    cout<<dizi[9]<<endl;

    cout<<"Dongulu"<<endl;

    //DÖNGÜLÜ
    int dizi1[5];
    for(int i=0; i<=5;i++)
    {
        cin>>dizi1[i];
        cout<<dizi1[i];
    }

    return 0;
}
