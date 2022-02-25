#include <iostream>

using namespace std;

int main()
{
    //GRUP1
    char oyuncular[5]={'A','B','C','D','E'};
    int puanlar[5][5]={
                        {0,0,1,0,0},
                        {0,0,0,1,1},
                        {0,2,0,0,1},
                        {2,0,2,0,0},
                        {0,0,2,0,0},
                      };

    for(int i=0; i<5; i++)
    {
        cout<<oyuncular[i]<<":\t";
        for(int j=0; j<5;j++)
        {
            cout<<puanlar[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    //GRUP2
    for(int i=0; i<5; i++)
    {
        cout<<oyuncular[i]<<"\t";
    }
    cout<<endl;
    for(int i =0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<puanlar[j][i]<<"\t";
        }
        cout<<endl;

    }

    return 0;
}
