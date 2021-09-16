#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	ll n;
	cin >> n;
	while(n != 1){
		cout << n << " ";
		if(n % 2)n = 3 * n + 1;
		else n = n / 2;
	}
	cout << 1 << endl;
}

int main(){
	solve();
	return 0;
}

