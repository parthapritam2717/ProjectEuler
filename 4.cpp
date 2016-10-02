#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<time.h>
#include<math.h>
#include<cstring>
#include<unordered_set>
#include<unordered_map>
#include<stack>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<string> vs;
typedef unordered_map<int,int> umap;
typedef map<long long,long long> omap;
typedef multimap<long long,long long> mmap;

#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define all(v) v.begin(),v.end()
#define Pi(x) printf("%d", x)
#define Pl(x) printf("%lld", x)
#define os() printf(" ")
#define nl() printf("\n");
#define F first
#define S second
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define mem(x,i) memset(x,i,sizeof(x))
#define fori(i,s,n) for(int i=(s);i<(n);++i)
#define forl(i,s,n) for(ll i=(s);i<(n);++i)
#define forir(i,s,n) for(int i=(n)-1;i>=(s);--i)
#define forlr(i,s,n) for(ll i=(n)-1;i>=(s);--i)
#define INF 8944674407370955161LL
#define debug(i,st,arr) fori(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define debugl(i,st,arr) forl(i,0,st){cout<<arr[i]<<" ";}cout<<endl;
#define forci(i,sw) for((i)=(sw).begin();(i)!=(sw).end();++(i))
#define forcr(i,sw) for((i)=(sw).rbegin();(i)!=(sw).rend();++(i))
inline int ispalindrome(int x){
    vector<int> y,z;
    int original=x;
    while(x){
        int a=x%10;
        x=x/10;
        y.push_back(a);
    }
    z=y;
    reverse(z.begin(),z.end());
    if(z==y){
        return 1;
    }
    else{
        return 0;
    }
}

inline int  binary_search(int x,vector<int> &a){
    int flag=0;
    for(vector<int>::iterator i=a.begin();i!=a.end();++i){
        if(*i<x){
            flag=1;
            continue;
        }
        else{
            flag=0;
            return *(--i);
        }
    }

        return a.back();

}




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    vector<int> N;
    for(int i=0;i<T;i++){
        int x;
        cin>>x;
        N.push_back(x);
    }
    // now lets do all the multiplications and find if the number is a palindrome or not
    // preprocessing
    int x=sqrt(101101);
    //cout<<x;
    vector<int> preprocess;
    preprocess.push_back(101101);
    for(int i=999;i>=100;i--){
        for(int j=999;j>=100;j--){
            int x=i*j;
            if(x>101101){
                if(ispalindrome(x)){
                     preprocess.push_back(x);
                }
            }
        }
    }
    sort(preprocess.begin(),preprocess.end());
    //int x=sqrt(999999);
    for(int index=0;index<N.size();index++){
        int val=N[index];
       int result=binary_search(val,preprocess);
        cout<<result<<endl;
    }

    return 0;
}



