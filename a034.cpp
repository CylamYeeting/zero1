#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b; cin>>a>>b;
	int ans;
	ans=(b-a)/2;
	if(a%2==0||b%2==0){
		ans++;
	}
	cout<<ans;
}
