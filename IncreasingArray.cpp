#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	int x[n];
	ll ans = 0;
	for(int i = 0;i < n;i++)cin >> x[i];
	for(int i = 1;i < n;i++){
		int d = x[i] - x[i - 1];
		if(d < 0){
			ans += -1 * d;
			x[i] += -1 * d;
		}
	}
	cout << ans;
}

int main(){
	solve();
	return 0;
}

