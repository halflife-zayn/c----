#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<char> e;  
    vector<int> counts; 
    int count=1;
    for(int i=1;i<n;i++) {
        if(a[i]!=a[i-1]) {

            e.push_back(a[i-1]);
            counts.push_back(count);
            count=1;
        }else{
            count++;
        }
    }
    e.push_back(a[n-1]);
    counts.push_back(count);
    for(int i=0;i<e.size();i++) {
        cout << (int)e[i] << " " << counts[i] << "\n";
    }
    
    return 0;
}