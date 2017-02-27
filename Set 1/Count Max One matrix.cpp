#include <iostream>
#define r 4
#define c 4
using namespace std; 

int firstindex(int arr[], int low, int high)
{
  if(high >= low)
  {

    int mid = low + (high - low)/2;
 

    if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)
      return mid;
 

    else if (arr[mid] == 0)
      return firstindex(arr, (mid + 1), high);
 
    else 
      return firstindex(arr, low, (mid -1));
  }
  return -1;
}
 

int RowMax1s(int matrix[r][c])
{
    int m_row_index = 0, max = -1; 
 
    
    int i, index;
    for (i = 0; i < r; i++)
    {
       index = firstindex (matrix[i], 0, c-1);
       if (index != -1 && c-index > max)
       {
           max = c - index;
           m_row_index = i;
       }
    }
 
    return m_row_index;
}
 

int main()
{
    int matrix[r][c] = { {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {1, 1, 1,1}
    };
 	int mindex = RowMax1s(matrix);
    cout<<"Index of row with maximum 1s is\n"<<mindex ;
 
    return 0;
}
