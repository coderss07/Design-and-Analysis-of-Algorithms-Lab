#include <bits/stdc++.h>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

const int N =  1e6 + 5;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     vector<int> hsh(N,0);
    //     int n;
    //     cin >> n;
    //     vector<int> a(n);
    //     rep(i, 0, n) {
    //         cin >> a[i];
    //         hsh[a[i]] ++;
    //     }
    //     int k;
    //     cin >> k;

    //     int cnt = 0;

    //     rep(i,0,n) {
    //         hsh[a[i]]--;
    //         if(hsh[(a[i] + k)]) {
    //             cnt++;
    //         }
    //         if(k) hsh[a[i]]++;
    //     }

    //     cout << cnt << endl;
        

    // }
   	string s = "";
    stack<string> st; st.push(s);
    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        if(n == 1) {
            string w; cin >> w;
            s += w;
            st.push(s);
        }else if(n == 2) {
            int k; cin >> k;
            s = s.substr(0, s.size() - k);
            st.push(s);
        }else if(n == 3) {
            int k; cin >> k;
            cout << s[k - 1] << endl;
        }else {
            s = st.top();
            st.pop();
        }
        cout << s << endl;
    }
    return 0;
}
