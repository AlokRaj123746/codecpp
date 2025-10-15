//insertion at the beginning
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5; 
//     int arr[n] = {1,2,3,4,5};
//     for(int i=n-1;i>=0;i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     n++;
//     arr[0] = 50;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// insertion at the end
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5; 
//     int arr[n] = {1,2,3,4,5};
//     arr[n] = 6;
//     n++;
//     for(int i =0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }


// }

//insertion at the given index position

#include<iostream>
using namespace std;
int main()
{
    int n = 5; 
    int arr[n] = {1,2,3,4,5};
    int indexposition;
    cout<<"enter position: ";
    cin>>indexposition;
     if (indexposition < 0 || indexposition > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }
    for(int i=n-1;i>=indexposition;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[indexposition] = 52;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   

}