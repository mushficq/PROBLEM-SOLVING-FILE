/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    long long x, mx = LLONG_MIN;
    for(int i = 0; i < N; ++i){
        cin >> x;
        mx = max(mx, x);
    }

    cout << mx << '\n';
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long mx= LLONG_MAX,x;
    while(n--){
        cin>>x;
        mx=min(mx,x);
    }
    cout<<mx;
}
