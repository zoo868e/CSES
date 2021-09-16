#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	string s;
	cin >> s;
	int ans = 0, t = 1;
	char now = s[0];
	for(int i = 1;i < (int)s.size();i++){
		if(s[i] == now)t++;
		else{
			ans = max(ans, t);
			now = s[i];
			t = 1;
		}
	}
	ans = max(ans, t);
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

