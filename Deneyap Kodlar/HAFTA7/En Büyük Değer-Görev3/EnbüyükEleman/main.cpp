#include <iostream>

using namespace std;

void enBuyuk(int dizi[6])
{
    int enBuyukEleman=dizi[0];
    for(int i=1; i<6; i++)
    {
        if(dizi[i]>enBuyukEleman)
        {
            enBuyukEleman=dizi[i];
        }
    }
    cout<<"Dizimizin en buyuk elemani: "<<enBuyukEleman<<endl;
}

int main()
{
    int myDizi[6]={10,12,7,6,9,4};
    enBuyuk(myDizi);
    return 0;
}
