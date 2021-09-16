#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	ll x, y, ret;
	cin >> y >> x;
	if(y >= x){
		ret = y % 2 ? pow(y - 1, 2) + 1:pow(y, 2);
		if(y % 2)ret += x - 1;
		else ret -= x - 1;
	}
	else {
		ret = x % 2 ? pow(x, 2):pow(x - 1, 2) + 1;
		if(x % 2)ret -= y - 1;
		else ret += y - 1;
	}
	cout << ret << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

