#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element you want to add." << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++ )
    {
        int min = i;
        for( int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i)
            {
                swap(arr[i], arr[min]);
            }
    }
    cout << "Your sorted list is : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
