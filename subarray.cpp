// to print subarray of an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

//print sum of subarray of an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<=j;k++)
            {
                sum += arr[k];
            }
            cout<<"sum of sub array: "<<sum<<endl;
        }
    }
}

//print sum amd maximum sum of subarray using two loops
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            cout<<"sum: "<<sum<<endl;
            maximum_sum = max(maximum_sum,sum);
           
        }

    }
    cout<<"maximum sum is: "<<maximum_sum;
}
