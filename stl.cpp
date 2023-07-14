#include<bits/stdc++.h>

//pairs
void explainPair() {
    pair<int,int> p = {1,3};
    cout << p.first << " " <<p.second;
    pair<int,pair<int,int>> p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
    pair<int,int>arr[] = {{1,2},{2.5},{5,1}};
    cout<<arr[1].second;

}

//Vectors
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);
    vector<int> v(5);
     
}