#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    //ifstream in("inp.txt");
  short int t;
  unsigned long int n ,q;
  cin >> t;
  while(t--){
  cin >>q >> n;
  vector<bool> a(n,true);
  unsigned long int m = sqrt(n);
  a[0] = false;
  a[1] = false;
  // find primes till sqrt
  for(unsigned long int i = 2 ; i <= m ; i++ ){
    if(a[i]){
      for(unsigned long int j = i*i ; j <= m ; j+=i ){
        a[j] = false;
      }
    }
  }
//  store the primes upto m
  vector<unsigned long int> primes;
  for(unsigned long int i = 2 ; i <= m ; i++ ){
      if(a[i]){ primes.push_back(i);}
  }

  unsigned long int temp;
  for (unsigned long int x : primes) {
        temp = q/x;
        temp*=x;
                // from primes arrays increment each prime with that num , set the index as false
        for(unsigned long int y = temp ; y <=n ; y+=x){
        a[y] = false;
        }
  }
// set the falsed indexes in previous primes arrays to true
  for(unsigned long int i = 0 ; i < primes.size() ;++i){
    a[primes[i]] = true;
  }
  for(unsigned long int i =q ; i <= n ; i++ ){
    if(a[i]) {cout << i << " ";}
  }
  cout << "\n";
  }
  return 0;
}
//my repl link - https://repl.i
