#include <iostream>
using namespace std;
int main()
{
	long int bnum, dnum=0, i=1, rem;
	cin>>bnum;
	while(bnum!=0)
	{
		rem=bnum%10;
		dnum=dnum+rem*i;
		i=i*2;
		bnum=bnum/10;
	}
	cout<<dnum<<endl;

    return 0;
}