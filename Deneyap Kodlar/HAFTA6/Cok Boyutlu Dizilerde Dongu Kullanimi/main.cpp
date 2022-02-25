#include <iostream>

using namespace std;

int main()
{
    int cokBoyutluDizi[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)//Deger alma islemi
        {
            cout<<"Deger giriniz: ";
            cin>>cokBoyutluDizi[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)//Deger yazdýrma islemi
        {
            cout<<cokBoyutluDizi[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;







}
