#include <iostream>    
#include <algorithm>   
#include <vector>
using namespace std;
#define ll long long
int main(){                                                                                     ios_base::sync_with_stdio(0);
int n, q;
cin >> n >> q;
vector<int>a(n);
for(int i = 0; i < n; i++)
    cin >> a[i];
for(int i = 0; i < q; i++){
    char s;
    int x, y;
    cin >> s >> x >> y;
    if (s == '?'){
        int mex = 0;
        vector<int>b;
        for(int j = x - 1; j < y; j++)
            b.push_back(a[j]);                                                                                              
        sort(b.begin(), b.end());
        if (!b[0]){
        int k = 1;
        while(k < y - x + 1 && (b[k] == b[k - 1] || b[k] == b[k - 1] + 1))
            k++;
        cout << b[k - 1] + 1;}
        else cout << 0;
        cout << endl;
    }
    else
        a[x - 1] = y;
}
}
