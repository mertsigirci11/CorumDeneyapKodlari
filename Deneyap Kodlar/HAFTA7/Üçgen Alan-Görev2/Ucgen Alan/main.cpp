#include <iostream>

using namespace std;

int ucgenAlan(int yukseklik, int taban)
{
    return (taban*yukseklik)/2;
}

int main()
{
    int h, tbn, alan;
    cout<<"Ucgenin yuksekligi: ";
    cin>>h;
    cout<<"Ucgenin tabani: ";
    cin>>tbn;

    alan = ucgenAlan(h,tbn);
    cout<<"Ucgenin Alani: "<<alan;

    return 0;
}
