//delete at beginning
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5; 
//     int arr[n] = {1,2,3,4,5};
//     for(int i = 0;i<n-1;i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     n--;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }
 //delete at end
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5; 
//     int arr[n] = {1,2,3,4,5};
//     n--;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

//delete at given index position
#include<iostream>
using namespace std;
int main()
{
    int n = 5; 
    int arr[n] = {1,2,3,4,5};
    int indexedposition;
    cout<<"enter position: ";
    cin>>indexedposition;
    if (indexedposition < 0 || indexedposition > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }
    for(int i = indexedposition;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

}