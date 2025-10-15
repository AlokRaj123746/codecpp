//binary search without using function
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int arr[5] = {1,2,3,4,5};
//     int start = 0;
//     int end = n-1;
//     int target = 5;
//     int index = -1;
//     while(start <= end)
//     {
//         int mid = (start + end) / 2;
//         //mid = start + (end - start)/2;  // to avoid integer overflow
//         if(arr[mid] ==target)
//         {
//             index = mid;
//            break;

//         }
//         else if(arr[mid] > target)
//         {
//             end = mid-1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid+1;
//         }
//     }
//     if(index == -1)
//     {
//         cout<<"Element not found";
//     }
//     else{
//         cout<<"element found at index: "<<index;

//     }
    
// }

//binary search using function
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target)
{
    int start = 0;
    int end = n-1;
    
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] > target)
        {
            end = mid-1;

        }
        else if(arr[mid] < target)
        {
            start = mid+1;
        }
    }
    return -1;

}
int main()
{
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int target = 10;
    cout<<binarysearch(arr,n,target);

}