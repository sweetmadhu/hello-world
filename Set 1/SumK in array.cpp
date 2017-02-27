
#include <iostream>
#include <algorithm>
using namespace std;

int countPairsSumK(int arr[], int n, int k)
{
    int count = 0;
    sort(arr, arr+n);  // Sort array elements
 
    int left = 0;
    int right = n-1;
    while(left < right)
    {
         if(arr[right] + arr[left] == k)
        {     cout<<arr[right]<<" "<<arr[left]<<" "<<endl;
              count++;
              left++;
              right++;
        }
         else if(arr[right] + arr[left] > k)
              right--;
         else left++;
    }   
    return count;
}
 
// Driver program to test above function
int main()
{
    int ar[] =  {-2, 1,2, 4,5, 6};
    int n = sizeof(ar)/sizeof(ar[0]);
    int k = 3;
    cout << "Count of pairs with given diff is "
         << countPairsSumK(ar, n, k);
    return 0;
}