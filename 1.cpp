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

int findlcm(int a,int b){
    int max=(a>b)?a:b;
    while(1){
        if(max%a==0 && max%b==0){
           break;
        }
        ++max;
    }

    return max;

}int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int t;
    long long sum=0;
    cin>>t;
    long long  n[t]={0};
    for(long int i=0;i<t;i++){
        cin>>n[i];

    }
    //inp over
    for( int i=0;i<t;i++){
        sum=0;
          long long  n5=0,n3=0,n15=0,n3f=0,n5f=0,n15f=0,temp=0;
        for(long long  j=n[i]-1;j>=3;j--){
            if(j%3==0){
                n3=j;
                break;
            }
        }
        for(long long j=n[i]-1;j>=5;j--){
            if(j%5==0){
                n5=j;
                break;
            }
        }
        for(long long  j=n[i]-1;j>=5;j--){
            if(j%15==0){
                n15=j;
                break;
            }
        }


        // arithmatic sum logic
        n3f=(long long)((n3-3)/3 +1);
        temp=n3f*(3+n3);

        temp=temp/2;
        sum+=temp;
        n5f=(long long)((n5-5)/5+1);
        temp=n5f*(5+n5);

        temp=temp/2;
        sum+=temp;
        if(n15>=15){
        n15f=(long long)((n15-15)/15+1);
        temp=n15f*(15+n15);

        temp=temp/2;
        sum-=temp;

        }

        //cout<<sum;
        //cout<<q<<endl;

    cout<<sum<<endl;
    }

    return 0;
}


