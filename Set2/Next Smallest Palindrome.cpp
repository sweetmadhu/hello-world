#include <stdio.h>
#include <vector>
using namespace std;
void generateNextPalindrome( vector<int> num, int n)
{   

    n=n-1;
	int mid=(n)/2;
	int cont=1;
    for(int i=mid;i>=0 && (cont==1);i--)
    {
        if(num[i]==9)
        {   num[i]=0;
            num[n-i]=0;
            cont=1;
            if(i==0)
            {
                num[i]=10;
                num[n-i]=0;
                num.push_back(1);
            }
        }
        else
        { num[i]=num[n-i]=num[i]+1;
          cont=0;
        }
        
    }
		
	for (int i=0; i < num.size(); i++)
		printf("%d ", num[i]);

}

/* Utility that prints out an array on a line */


// Driver Program to test above function
int main()
{
	vector <int> final={9,9,9,9};
	generateNextPalindrome( final, final.size() );

	return 0;
}
