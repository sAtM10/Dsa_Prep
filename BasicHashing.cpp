//how many times a number appears in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    //input array size and elements
    
    int n;
    cout<<"input size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"input element of an array"<<endl;
        cin>>arr[i];
    }

    //precompute
    //hash array
    int hash[13] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }

//input number of queries and query
    cout<<"Enter total query input"<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"query"<<endl;
        cin>>number;
        //fetch
        cout<< hash[number]<<endl;

    }
    return 0;
}