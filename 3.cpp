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
long long int isprime(long long int j){
    if(j==2){
        return 1;
    }
    if((j%10)%2==0){
        return 0;
    }
    long long int k=sqrt(j);
    for(long long int i=2;i<=k;i++){
        if(j%i==0){
            return 0;
        }
    }
        return 1;

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int f[7]={2,3,5,7,11,13,17};

    long long int  t,q,r;
   long long int max=0;
    cin>>t;
     long long int  ar[t];
   for(int i=0;i<t;i++){
       cin>>ar[i];
   }
    for(int k=0;k<t;k++){
        q=ar[k];max=0;
      /* for(int i=0;i<=6;i++){
            if(q%f[i]==0){
                q=(ar[k]/f[i]);
                max=f[i];
                i=i-1;
            }
        }*/
        long long int m=sqrt(q);
        long long int n=q/2;
        long long int z=m;
        for(int i=2;i<=z;i++){
            max=0;
           // cout<<q<<endl;
            if(q%i==0){
                if(isprime(i)){
                   q=q/i;
                   max=i;
                   i=1;
                    z=sqrt(q);
                    //cout<<"hr"<<z<<endl;
                }
            }

          /* if(i==z && max!=0){
                z=n;
            }*/
        }
        if(max==0){
            cout<<q<<endl;
            }

        else if(max!=0){
       cout<<max<<endl;
        }
        //else

    }
    return 0;
}
