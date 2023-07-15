#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define f(i,s,e) for(int i=s; i<e; i++)
#define fl(l,s,e) for(ll int i=s; i<e; i++)

int bsr(vector<int> &v,int target){
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            return mid;
        }
        else if (v[mid]>target){
            low=mid+1;
        
        }
        else if(v[mid]<target) {high=mid-1;}
    }
    return -1;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int target;
    cin>>target;
    int n;
    cin>>n;

vector<int> v(n);
f(i,0,n){
    cin>>v[i];
}
cout<<bsr(v,target)<<endl;


    

    return 0;
}