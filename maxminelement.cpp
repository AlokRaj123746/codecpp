// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //    int a,b,c;
// //    cout<<"enter three numbers: ";
// //     cin>>a>>b>>c;
// //     if(a>b && a>c)
// //     {
// //         cout<<"a is greatest";
// //     }
// //     else if(b>c && b>a)
// //     {
// //         cout<<"b is greatest";
// //     }
// //     else
// //     {
// //         cout<<"c is greatest";
// //     }
// // }
// //second greatest number
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //    int a,b,c;
// //    cout<<"enter three numbers: ";
// //     cin>>a>>b>>c;
// //     if(a>b && a<c)
// //     {
// //         cout<<"a is second greatest";
// //     }
// //     else if(b>c && b<a)
// //     {
// //         cout<<"b is second greatest";
// //     }
// //     else
// //     {
// //         cout<<"c is second greatest";
// //     }
// // }

// //minimum number
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //    int a,b,c;
// //    cout<<"enter three numbers: ";
// //     cin>>a>>b>>c;
// //     // if(a<b && a<c)
// //     // {
// //     //     cout<<a<<" is smallest";
// //     // }
// //     // else if(b<c && b<a)
// //     // {
// //     //     cout<<b<<" is smallest";
// //     // }
// //     // else
// //     // {
// //     //     cout<<c<<" is smallest";
// //     // }
// //     (a<b)?(a<c?cout<<a<<" is smallest":cout<<c<<" is smallest"):(b<c?cout<<b<<" is smallest":cout<<c<<" is smallest");
// // }


//find max,min,second max,third max in array
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter elments of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int second_max = INT_MIN;
    int third_max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            third_max = second_max;
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] < max)
        {
            third_max = second_max;
            second_max = arr[i];

        }
        else if(arr[i] > third_max && arr[i] < second_max)
        {
            third_max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<"maximum element in array: "<<max<<endl;
    cout<<"minimum element in array: "<<min<<endl;
    cout<<"second maximum element in array: "<<second_max<<endl;
    cout<<"third maximum element in array: "<<third_max<<endl;

} 

