#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, x, i,a=2,ans=1;
        cin >> n>>x;
        if (n > 2) {
            while(a<n){
                a=a+x;
                ans++;
            }
           
        } else {
            ans = 1;
        }
        cout << ans << endl;
    }
}

