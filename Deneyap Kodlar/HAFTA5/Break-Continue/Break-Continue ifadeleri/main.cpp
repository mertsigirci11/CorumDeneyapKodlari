#include <iostream>

using namespace std;

int main()
{
    //Break: D�ng�y� durdurmaya/bitirmeye yarar.
    //Continue: D�ng�n�n bir sonraki ad�m�na ge�mesini sa�lar.

    for(int i=1; i<=10; i++)
    {
        if(i<5)
        {
            continue;
        }
        if(i == 9)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}
