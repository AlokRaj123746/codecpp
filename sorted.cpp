//bubble sort
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5] = {4,1,5,2,3};
    bool isSwap = false;    // when the array is sorted;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false)   // if no swapping occurs in a pass, the array is already sorted
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}

//selection sort
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5] = {12,15,10,9,1};
    for(int i=0;i<n-1;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;
            }

        }
        swap(arr[i], arr[min_idx]);

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
