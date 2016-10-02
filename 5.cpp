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
inline int find_number(int n){
    for(int j=n;;j+=n){
        int flag=0;
            for(int x=n-1;x>=2;--x){
                if(j%x==0 && x>2){
                    flag=0;
                    continue;
                }
                else if(j%x==0 && x==2){
                    flag=1;
                }
                else{
                    break;
                }

            }
            if(flag==1){
                return j;
            }
    }
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
    // input over now lets find the number which is div by all digits which are less than the given number
    // now lets do a preprocessing and get the result for all value till 40
    vector<int> res;
    res.push_back(1);
    res.push_back(2);
    for(int i=3;i<=20;i++){
        int resul=find_number(i);
         res.push_back(resul);
    }
    // preprocessing over now lets create the output for the desired input
    for(int i=0;i<N.size();i++){
        if(N[i]<=20){
              cout<<res[N[i]-1]<<endl;
        }
        else{
            int resul=find_number(N[i]);cout<<resul<<endl;
        }


    }
    return 0;
}



