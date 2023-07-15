#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define f(i,s,e) for(int i=s; i<e; i++)
#define fl(l,s,e) for(ll int i=s; i<e; i++)


void insert(vector<int> &v, int temp){
if(temp>=v[v.size()-1]||v.size()==0){
    v.push_back(temp);
    return;
}
int val=v[v.size()-1];
v.pop_back();
insert(v,temp);
v.push_back(val);
return;
}


void sort(vector<int> &v){

    if(v.size()==1){return;}

    int temp=v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;

vector<int> v(n);
f(i,0,n){
    cin>>v[i];
}
sort(v);

    f(i,0,n){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}