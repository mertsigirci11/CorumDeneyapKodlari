#include <iostream>

using namespace std;

int main()
{
    int dogumYillari[6]={2005,2004,2003,2008,2006,2002};

    for(int i =0; i<=5; i++)
    {
        cout<<i+1<<". arkadasimin dogum yili: "<<dogumYillari[i]<<endl;
    }

    return 0;
}
