#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnfSort(int arr[], int n)
{
    int low=0, mid=0, high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            mid++; low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid, high);
            high--;
        }
    }

}

int32_t main()
{
    int arr[]={1,0,2,1,0,1,2,1,2};
    dnfSort(arr,9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}