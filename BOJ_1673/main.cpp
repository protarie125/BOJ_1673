#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n, k;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	while (cin >> n >> k)
	{
		auto ans = n;
		while (k <= n) {
			const auto q = n / k;
			n %= k;
			ans += q;
			n += q;
		}

		cout << ans << '\n';
	}

	return 0;
}