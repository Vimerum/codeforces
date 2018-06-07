#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define sec second
#define for_(i, a, b) for(int i = int(a); i < int(b); i++)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

const int N = 1e5 + 5;
ll v[N];
ll dp[N];

ll go (int i) {
	if (i >= N) return 0;

	ll &r = dp[i];
	if (r != -1) return r;

	ll L = v[i] * i + go(i + 2);

	ll R = go(i + 1);

	return r = max(L, R);
}

int main(){
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
	for_(i, 0, n) {
		int tmp; cin >> tmp;
		v[tmp]++;
	}

	memset(dp, -1, sizeof(dp));
	cout << go(1) << endl;

    return 0;
}

