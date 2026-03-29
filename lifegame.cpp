
#include<bits/stdc++.h>
using namespace std;
char cell[20][60];
int main(){
for(int i=0;i<20;i++){
    for(int j=0;j<60;j++){
cell[i][j]='-';
    }
}
int i,j;
while(cin>>i>>j){
    if(i==-1)break;
    i--;j--;
    cell[i][j]='*';
}
int t;
while(cin>>t){
if(t!=0)break;
int cellnum[20][60]={0};
for(int i=0;i<20;i++){
    for(int j=0;j<60;j++){
        if(i>0&&j>0){
            if(cell[i-1][j-1]=='*')cellnum[i][j]++;
            if(cell[i][j-1]=='*')cellnum[i][j]++;
            if(cell[i-1][j]=='*')cellnum[i][j]++;
            if(i<19&&j<59){
                if(cell[i+1][j+1]=='*')cellnum[i][j]++;
                if(cell[i][j+1]=='*')cellnum[i][j]++;
                if(cell[i+1][j]=='*')cellnum[i][j]++;
                if(cell[i-1][j+1]=='*')cellnum[i][j]++;
                if(cell[i+1][j-1]=='*')cellnum[i][j]++;
            }
            else if(i==19&&j<59){
                if(cell[i][j+1]=='*')cellnum[i][j]++;
                if(cell[i-1][j+1]=='*')cellnum[i][j]++;
            }
            else if(i<19&&j==59){
                if(cell[i+1][j]=='*')cellnum[i][j]++;
                if(cell[i+1][j-1]=='*')cellnum[i][j]++;
            }
        }
        else if(i==0&&j>0){
            if(cell[i][j-1]=='*')cellnum[i][j]++;
            if(j<59){
                if(cell[i+1][j+1]=='*')cellnum[i][j]++;
                if(cell[i][j+1]=='*')cellnum[i][j]++;
                if(cell[i+1][j]=='*')cellnum[i][j]++;
                if(cell[i+1][j-1]=='*')cellnum[i][j]++;
            }
            else if(j==59){
                if(cell[i+1][j]=='*')cellnum[i][j]++;
                if(cell[i+1][j-1]=='*')cellnum[i][j]++;
            }
        }
        else if(i>0&&j==0){
            if(cell[i-1][j]=='*')cellnum[i][j]++;
            if(i<19){
                if(cell[i+1][j+1]=='*')cellnum[i][j]++;
                if(cell[i][j+1]=='*')cellnum[i][j]++;
                if(cell[i+1][j]=='*')cellnum[i][j]++;
                if(cell[i-1][j+1]=='*')cellnum[i][j]++;
            }
            else if(i==19){
                if(cell[i][j+1]=='*')cellnum[i][j]++;
                if(cell[i-1][j+1]=='*')cellnum[i][j]++;
            }
        }
        else{
            if(cell[i+1][j+1]=='*')cellnum[i][j]++;
            if(cell[i][j+1]=='*')cellnum[i][j]++;
            if(cell[i+1][j]=='*')cellnum[i][j]++;
        }
    }
}
for(int i=0;i<20;i++){
    for(int j=0;j<60;j++){
        if(cell[i][j]=='*'){
                    if(cellnum[i][j]==2||cellnum[i][j]==3){
                        cell[i][j]='*';
                    }
                    else cell[i][j]='-';
                }
                else{
                    if(cellnum[i][j]==3){
                        cell[i][j]='*';
                    }
                    else cell[i][j]='-';
                }
    }
}
for(int i=0;i<20;i++){
    for(int j=0;j<60;j++){
    cout<<cell[i][j];
    }
    cout<<endl;
}
}

}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> num(n,vector<int>(n,0));
    int shu=1;
    int hang=0;
    int lie=(n-1)/2;
    
    while(shu<=n*n){
        num[hang][lie]=shu;
        shu++;
        
        int nhang=hang-1;
        int nlie=lie+1;
        
        if(nhang<0) nhang=n-1;
        if(nlie>n-1) nlie=0;
        
        if(num[nhang][nlie]!=0){
            hang=hang+1;
            if(hang>n-1) hang=0;
        }
        else{
            hang=nhang;
            lie=nlie;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0) cout<<num[i][j];
            else cout<<" "<<num[i][j];
        }
        if(i!=n-1)cout<<endl;
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
char cell[60];
int main(){
for(int j=0;j<60;j++){
cell[j]='-';
}
int i,j;
while(cin>>j){
    if(j==-1)break;
    j--;
    cell[j]='*';
}
int t;
cin>>t;
while(t--){
int cellnum[60]={0};
    for(int j=0;j<60;j++){
        if(j==0){
            if(cell[j+1]=='*')cellnum[j]++;
            if(cell[j+2]=='*')cellnum[j]++;
        }
        else if(j==1){
            if(cell[j-1]=='*')cellnum[j]++;
            if(cell[j+1]=='*')cellnum[j]++;
            if(cell[j+2]=='*')cellnum[j]++;
        }
        else if(j==58){
            if(cell[j-1]=='*')cellnum[j]++;
            if(cell[j+1]=='*')cellnum[j]++;
            if(cell[j-2]=='*')cellnum[j]++;
        }
        else if(j==58){
            if(cell[j-1]=='*')cellnum[j]++;
            if(cell[j-2]=='*')cellnum[j]++;
        }
        else{
            if(cell[j-2]=='*')cellnum[j]++;
            if(cell[j-1]=='*')cellnum[j]++;
            if(cell[j+1]=='*')cellnum[j]++;
            if(cell[j+2]=='*')cellnum[j]++;
        }
    }


    for(int j=0;j<60;j++){
        if(cell[j]=='*'){
                    if(cellnum[j]==2||cellnum[j]==4){
                        cell[j]='*';
                    }
                    else cell[j]='-';
                }
                else{
                    if(cellnum[j]==2){
                        cell[j]='*';
                    }
                    else cell[j]='-';
                }
    }
    for(int j=0;j<60;j++){
    cout<<cell[j];
    }
    cout<<endl;

}
}*/