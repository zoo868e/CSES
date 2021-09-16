#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n == 1)cout << "1\n";
	else if(n <= 3)cout << "NO SOLUTION\n";
	else{
		for(int i = n - 1;i > 0;i -= 2){
			cout << i << " ";
		}
		cout << n << " ";
		for(int i = n - 2;i > 0;i -= 2){
			cout << i << " ";
		}
		cout << endl;
	}
}

int main(){
	solve();
	return 0;
}

