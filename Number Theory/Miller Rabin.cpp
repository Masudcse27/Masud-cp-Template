#include<bits/stdc++.h>

using namespace std;

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define ll              long long
#define Ull             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             1e9
#define PI              acos(-1.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<ll,ll>


#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))

#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);

const int N = 1000005;
ll Mul(ll a, ll b, ll m)
{
	ll ret=0, c=a;
	while(b)
	{
		if(b&1) ret=(ret+c)%m;
		b>>=1; c=(c+c)%m;
	}
	return ret;
}
ll bigmod(ll a, ll n, ll m)
{
	ll ret=1, c=a;
	while(n)
	{
		if(n&1) ret=Mul(ret, c, m);
		n>>=1; c=Mul(c, c, m);
	}
	return ret;
}
bool isPrime(long long n) {
    if (n == 2) return 1;
    if (n%2 == 0) return 0;
    long long d = n-1;
    while(d%2 == 0) d >>= 1;
    int test[] = {2,3,5,7,11,13,17,19,23};
    for(int i = 0; i < 9; i++) {
        long long x = test[i]%(n-2), temp = d;
        if (x < 2) x += 2;
        long long a = bigmod(x, d, n);
        while(temp != n-1 && a != 1 && a != n-1) {
            a = Mul(a, a, n);
            temp <<= 1;
        }
        if (a != n-1 && (temp&1) == 0) return 0;
    }
    return 1;
}


int main()
{
    int t,cases = 0;
    scanf("%d",&t);
    while(t--){
        ll n;cin>>n;
         if(isPrime(n))printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}

