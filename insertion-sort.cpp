#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of element you want to add."<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // loop for N = 1 to N  = N.
    //Unsorted list
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        //Loop for check item with sort list 
        while(j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout<<"your sorted list is : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
