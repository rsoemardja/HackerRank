

#include <iostream>
#include <vector>
using namespace std;

#define foreach(v,i) for(int i=0 ; i<v.size() ; i++)
#define io(v) cin>>v
#define INF INT_MAX
#define toStr(s) #s
#define FUNCTION(f,c) void f (int &a , int b){a=(a)c(b)>a:b;}

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, < )
	FUNCTION(maximum, > )

	int main() {
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result = ) << ' ' << ans;
	return 0;

}