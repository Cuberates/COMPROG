#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
 
	ll N;
	cin >> N;
	cout << N << " ";
	while(N>1) {
		if(N%2==0) N/=2;
		else N=N*3+1;
		cout << N << " ";
	}
	cout << "\n";
} 
