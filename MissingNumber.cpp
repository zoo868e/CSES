#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	ll n;
	cin >> n;
	int a[n];
	memset(a, 0, sizeof(a));
	int i = n;
	while(--i){
		int t;
		cin >> t;
		a[t - 1]++;
	}
	for(int i = 0;i < n;i++){
		if(!a[i]){
			cout << i + 1 << endl;
			break;
		}
	}
}

int main(){
	solve();
	return 0;
}

