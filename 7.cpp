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
inline int isprime(long long int x){

    if((x%10)%2==0){
        return 0;
    }
    else{
        long long int y=sqrt(x);
        int flag=0;
       long long int i;
        for(i=2;i<=y;i++){
            if(x%i==0){
                return 0;
            }
        }
            return 1;

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






    // now to do the preprocessing we find if a number is prime or not and then add that number to a vector if it is a prime number;
    vector<long long int> result;
    int num=0;
    result.push_back(2);
    for(long long int i=3;num!=10000;i++){
        if(isprime(i)){
            num++;
            result.push_back(i);
        }
    }
    //cout<<N.size()<<endl;
   // cout<<num<<endl<<result.size();
    // all primes registered till this point
    // now to solve the queries
    for(int j=0;j<T;j++){
        //cout<<N[j]-1<<endl;
        cout<<result[N[j]-1]<<endl;
    }




    return 0;
}
