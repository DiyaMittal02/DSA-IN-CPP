#include<iostream>
using namespace std;
int main(){
    int number[15];
    cout<<"Value at 14 index: " << number[14];
    cout<<"Everything is good";
    int first[3] = {1, 2, 3};
    cout<<"value at 2 is : " << first[2];
    int n = 3;
    cout<<"printing the array: ";
    for (int i = 0; i<n; i++){
        cout<<first[i] << endl;
    }
    int fourth[10] = {0};
    for (int i = 0; i<n; i++){
        cout<<fourth[i] <<endl;
    }
}