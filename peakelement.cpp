#include <bits/stdc++.h>
using namespace std;

void peakelement(int *arr, int n){
    if (n==0)
        return;
    if (n==1)
        cout<<arr[n-1]<<endl;
    if (arr[0] > arr[1])
        cout<<arr[0]<<endl;
    if (arr[n-1] > arr[n-2])
        cout<<arr[n-1]<<endl;
    for(int i=1; i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[] = {1, 3, 5, 4, 7, 10, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    peakelement(arr,n); 
}