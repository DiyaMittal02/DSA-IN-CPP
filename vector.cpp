#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    cout<<"Size " <<v.capacity()<<endl;
    v.push_back(1);
    //element dalne ke liye push_back
    cout<<"front" << v.front();
    cout<<"back" <<v.back();
    cout<<"befor pop" <<endl;
    for (int i:v){
        cout<<i<<" ";
    }
cout<<endl;
v.pop_back();
cout<<"after pop" <<endl;
for (int i:v){
    cout<< i<< " ";
}
    }
