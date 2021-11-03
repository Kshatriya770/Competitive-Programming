#include <bits/stdc++.h>
using namespace std;
typedef long long number;
typedef pair<number,number> PII;
typedef vector<number> List;
typedef map<number,number> OrderedHashMap;
template <typename T>
vector<vector<T>> split(vector<T> &a) {
    function<bool (T, T)> cond = [&](T a, T b) {

        if(a!=b)return true;
        return false;
    };
    vector<vector<T>> res;
    vector<T> cur;
    cur.push_back(a[0]);
    for(number i=1; i<a.size(); i++) {
        if(cond(a[i-1],a[i])) {
            res.push_back(cur);
            cur.clear();
        }
        cur.push_back(a[i]);
    }
    if(cur.size()>0)res.push_back(cur);
    return res;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    number testcase;
    cin >> testcase;
    for(number _testcase = 0 ; _testcase<testcase ; _testcase++) {
        number n;
        cin >> n;
        string a;
        cin >> a;
        vector<char> _a(a.begin(),a.end());
        auto foo = split<char>(_a);
        map<char,number> freq;
        for(auto x:foo) {
            freq[x[0]]++;
        }

        if(freq.size()==1) {
            cout << "SAHID" << '\n';
        } else {
            number mini = freq['0']+freq['1'];
            mini-=2;
            mini %= 3;


            if(mini==1 or mini==2) {
                cout << "SAHID" << '\n';
            } else {
                cout << "RAMADHIR" << '\n';
            }
        }
    }

    return 0;
}