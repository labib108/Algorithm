#include<bits/stdc++.h>
using namespace std;

/*
This function takes last element as pivot
# places the pivot element at its correct position
# places all smaller (smaller than pivot) to left of pivot
# places all greater elements to right of pivot
lb ->> lower bound
ub ->> upper bound
*/
int partition_array(int arr[], int lb, int ub)
{
    int pivot = arr[ub];
    int i = lb - 1;
    for(int j = lb; j <= ub - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[ub]);
    return (i + 1);
}
/*
lb ->> lower bound
ub ->> upper bound
*/
void quick_sort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int pivotIndex = partition_array(arr, lb, ub);
        quick_sort(arr, lb, pivotIndex - 1);
        quick_sort(arr, pivotIndex + 1, ub);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of element you want to add."<<endl;
    cin>>n;
    cout<<"Enter " << n << " element : ";
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr, 0, n - 1);
    cout<<"Your sorted list is : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
