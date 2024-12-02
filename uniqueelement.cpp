#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int ans = 0;
    for (int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    cout<<"Enter the array: ";
    int arr[100];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
   int element =  unique(arr, n);
    cout<<element;
}