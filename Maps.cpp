// Hash Maps
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"enter array element"<<endl;
        cin>>arr[i];
    }
    //pre compute
    map<int , int> mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;
    }
    //iterate in the map
    for(auto it : mpp){
        cout<< it.first <<"->" << it.second <<endl;
    }

    int q;
    cout<<"enter query"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"enter number";
        cin >> number;
        //fetch
        cout<< mpp[number]<<endl;

    }

    return 0;
}