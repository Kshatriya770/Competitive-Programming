#include <bits/stdc++.h>

using namespace std;

typedef long long number;


typedef pair<number,number> PII;

typedef vector<number> List;

typedef map<number,number> OrderedHashMap;


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    number testcase;
    cin >> testcase;
    for(number _testcase = 0 ; _testcase<testcase ; _testcase++) {
        number n;
        cin >> n;
        List a(n);
        for(number i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        for(number i=0; i<n; i++) {
            number res=LONG_MIN;
            if(i-1>=0) {
                res = max(res,a[i]&a[i-1]);
            }
            if(i+1<n) {
                res = max(res,a[i]&a[i+1]);
            }
            cout << res << ' ';
        }
        cout << '\n';
    }
    return 0;
}