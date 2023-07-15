/* #include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define f(i,s,e) for(int i=s; i<e; i++)
#define fl(l,s,e) for(ll int i=s; i<e; i++)


int bs(vector<int> &v,int a){
    sort(v.begin(),v.end());
    int start= 0;
    int end =v.size()-1;
    int occ=-1;
    
while(start<=end){
    int mid =(start)+((end-start)/2);
    if(a==v[mid]){
        occ= mid;
        end=mid-1;
    }
    else if (a<v[mid]){
  end=mid-1;

    }
    else if (a>v[mid]){
        start=mid+1;
    }

    
}return occ;
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
int a;
cin>>a;
cout<<bs(v,a)<<endl;

    

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define f(i,s,e) for(int i=s; i<e; i++)
#define fl(l,s,e) for(ll int i=s; i<e; i++)


int bs(vector<int> &v,int a){
    sort(v.begin(),v.end());
    int start= 0;
    int end =v.size()-1;
    int occ=-1;
    
while(start<=end){
    int mid =(start)+((end-start)/2);
    if(a==v[mid]){
        occ= mid;
        start=mid+1;
    }
    else if (a<v[mid]){
  end=mid-1;

    }
    else if (a>v[mid]){
        start=mid+1;
    }

    
}return occ;
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
int a;
cin>>a;
cout<<bs(v,a)<<endl;

    

    return 0;
}