//Sum of N numbers
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n){
//     if(n == 0) return 0;
//     return n + sum(n-1);
// }
// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
//     int n = 3;
//     cout<<sum(n);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 0) return 1;
    return n + fact(n-1);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n = 3;
    cout<<fact(n);

    return 0;
}