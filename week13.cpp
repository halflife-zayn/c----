#include <bits/stdc++.h>
using namespace std;
/*int main(){
    vector<int>a;
    int n;
    int i=0;
    while(cin>>n){
        a.push_back(n);
        i++;
    }
    sort(a.begin(),a.end());
    cout<<a[0];
    for(int j=1;j<a.size();j++){
        cout<<" "<<a[j];
    }
}*/

/*int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    for(int i=0;i<n;i++){
    getline(cin,str[i]);
    }
    for (int j=0;j<n-1;j++){
        for (int k=0;k<n-1-j;k++){
            if (str[k]>str[k+1]){
                swap(str[k],str[k+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
    cout<<str[i]<<endl;
    }
    
}*/
int main(){
    vector<int>a;
    int n;
    int i=0;
    int sum;
    cin>>sum;
    while(sum--){
        cin>>n;
        a.push_back(n);
        i++;
    }
    reverse(a.begin(),a.end());
    cout<<a[0];
    for(int j=1;j<a.size();j++){
        cout<<" "<<a[j];
    }
}
