#include <iostream>
using namespace std;

void   printOnes(int num)
{
    int c=1,r=1;

    while(r)
    {
        r = ( r*10 + 1 ) % num;
        c++;
    }

    while(c--)
        cout<<1;

    cout<<"\n";
}

int main()
{
    int num;
    cin>>num;
    printOnes(num);
    return 0;
}