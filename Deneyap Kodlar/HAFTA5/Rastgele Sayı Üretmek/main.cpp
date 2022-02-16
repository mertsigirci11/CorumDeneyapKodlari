#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));  //20:38:37    --  20:38:59
    int rand1,rand2,rand3,rand4,rand5;
    rand1= rand();
    //rand2=rand() % 10;
    rand3=rand();
    //rand4=10+ (rand()%15);
    rand5=rand();

    cout<<rand1<<endl;
    cout<<rand2<<endl;
    cout<<rand3<<endl;
    cout<<rand4<<endl;
    cout<<rand5<<endl;


    return 0;
}
