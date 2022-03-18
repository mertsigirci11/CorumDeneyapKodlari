#include <iostream>

using namespace std;

class CepTelefonu
{
public:
    int _fiyat;

    CepTelefonu(int fiyat)
    {
        _fiyat=fiyat;
    }
    ~CepTelefonu()
    {
        cout<<"Nesne yok edildi"<<endl;
    }
};

int main()
{
    CepTelefonu c1(4500);
    CepTelefonu c2=CepTelefonu(3750);
    cout<<"c1 fiyat: "<<c1._fiyat<<endl;
    cout<<"c2 fiyat: "<<c2._fiyat<<endl;
    return 0;
}
