#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int gcd(int a, int b) {
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int mx=0, res=0;
	for(int i=2; i<=1000; ++i) {
		int cnt=0;
		for(int j=0; j<n; ++j)
			if(a[j]%i==0)
				cnt++;
		if(mx<cnt) {
			mx=cnt;
			res=i;
		}
	}
	cout << res << "\n";
}
