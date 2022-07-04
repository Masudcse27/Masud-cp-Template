#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> phi(10007);
void phi_1_to_n() {
    int n=10000;
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

int main(){
phi_1_to_n();
return 0;
}


