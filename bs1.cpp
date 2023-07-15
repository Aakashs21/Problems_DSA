#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define f(i,s,e) for(int i=s; i<e; i++)
#define fl(l,s,e) for(ll int i=s; i<e; i++)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    int t;
    cin>>t;

    while(t--){

int n;
cin>>n;
vector<int> v(n);
f(i,0,n){
    cin>>v[i];
}
int hash[100]={0};
for(int i=0;i<n;i++){
    hash[v[i]]++;
}
int f=0;
f(i,0,99){
    if(hash[i]<hash[i+1]){f=1;break;}
}
if(f==1){
    cout<<"NO"<<endl;

}
else {cout<<"YES"<<endl;}


    }

    return 0;
}