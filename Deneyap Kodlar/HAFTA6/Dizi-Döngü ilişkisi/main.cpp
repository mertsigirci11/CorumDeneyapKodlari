#include <iostream>

using namespace std;

int main()
{
    int dizi1[6];

    for(int i=0; i<=6; i++)
    {
        cout<<"Dizimizin "<<i<<". elemanini giriniz: ";
        cin>>dizi1[i];
    }

    cout<<"Dizinin 0. elemani:"<<dizi1[0]<<endl;
    cout<<"Dizinin 1. elemani:"<<dizi1[1]<<endl;
    cout<<"Dizinin 2. elemani:"<<dizi1[2]<<endl;
    cout<<"Dizinin 3. elemani:"<<dizi1[3]<<endl;
    cout<<"Dizinin 4. elemani:"<<dizi1[4]<<endl;
    cout<<"Dizinin 5. elemani:"<<dizi1[5]<<endl;
    cout<<"Dizinin 6. elemani:"<<dizi1[6];

    return 0;
}
