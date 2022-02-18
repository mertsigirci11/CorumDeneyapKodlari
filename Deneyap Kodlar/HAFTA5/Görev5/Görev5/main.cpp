#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for(int i=0; i<=10; i++)
    {
        for(int j=0; j<=10; j++)
        {
            cout<<i<<"x"<<j<<"="<<i*j<<setw(3);
        }
        cout<<endl<<endl<<endl;
    }
    return 0;
}
