#include <iostream>

using namespace std;

int main()
{
    //Break: Döngüyü durdurmaya/bitirmeye yarar.
    //Continue: Döngünün bir sonraki adýmýna geçmesini saðlar.

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
