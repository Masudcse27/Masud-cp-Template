#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
using namespace std;
vector<bool> segmentedSieveNoPreGen(long long L, long long R) {
    vector<bool> isPrime(R - L + 1, true);
    long long lim = sqrt(R);
    for (long long i = 2; i <= lim; ++i)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}
int main(){
ll a,b;cin>>a>>b;
vector<bool>prim=segmentedSieveNoPreGen(a,b);
int sum=0;
for(int i=2;i<=(b-a);i++){
    if(prim[i]&&prim[i-2])sum++;
}
cout<<sum<<endl;
return 0;
}

