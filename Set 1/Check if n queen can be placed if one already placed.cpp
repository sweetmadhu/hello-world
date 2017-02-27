#include <iostream>
using namespace std;
#define n 4
bool issafe(int a[][n],int x,int y)
{int one=0,i=x;
    //smae row
    for(int i=0;i<=n;i++)
    {
        if(a[x][i]==1)
          return 0 ;
    }
    //diagonal left
    for(int i=0;i<=y;i++)
    {
        if(a[x-i][y-i]==1)
          return 0 ;
    }
    //dignonal upper right
    for(int i=0;i<=(n-1-y);i++)
    {
        if(a[x-i][y+i]==1)
          return 0 ;
    }
     //dignonal left bottom
    for(int i=0;i<=y;i++)
    {
        if(a[x+i][y-i]==1)
          return 0 ;
    }
     //dignonal right bottom
    for(int i=0;i<=(n-1-y);i++)
    {
        if(a[x+i][y+i]==1)
          return 0 ;
    }
    return 1;
    
}
int place(int a[][n],int x,int y,int Q)
{//if count of queen is zero then print
    if(Q==0) {
    for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         { cout<< a[i][j];}
       cout<<endl;
    }
       return 1;
             }
    else
    {for(int i=0;i<n;i++)
        {
            if(issafe(a,(x+i)%n,y%n))
        {  
            a[(x+i)%n][y]=1;
            Q--;
            if(place(a,(x+i)%n,(y+1)%n,Q))
            return 1;
            Q++;
            a[(x+i)%n][y%n]=0;
        }
        }
    }
    return 0;
}

int main()
{ int a[n][n];
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
       { a[i][j]=0;}
       //already placing queen in one of the column
       a[3][1]=1;
       //now placing queen for (n-1) place
       if(!(place(a,0,2,n-1)))
       cout<<"not possible";
    return 0;
}