#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int t;
    cin>>t;
    getchar();
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        string line;
        getline(cin,line);
        int len=line.size();
        for(int i=0;i<len;i++){
            if(isupper(line[i])){
                if(line[i]<'N')line[i]=line[i]-'A'+'N';
                else line[i]=line[i]-'N'+'A';
            }
            else if(islower(line[i])){
                if(line[i]<'n')line[i]=line[i]-'a'+'n';
                else line[i]=line[i]-'n'+'a';
            }
        }
        cout<<line<<endl;
    }
}*/
/*int main(){
    int t;
    cin>>t;
    while(t--){
        int num1,num2;
        int a1[32]={0};
        int a2[32]={0};
        int pos1=0;
        int pos2=0;
        cin>>num1>>num2;
        while(num1>0){
            a1[pos1]=num1%2;
            num1/=2;
            pos1++;
        }
        while(num2>0){
            a2[pos2]=num2%2;
            num2/=2;
            pos2++;
        }
        int res=0;
        for(int i=0;i<32;i++){
            if(a1[i]!=a2[i])res++;
        }
        cout<<res<<endl;
    }
}*/
/*int main(){
    int n;
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
    printf("case #%d:\n",j);    
    scanf("%d",&n);
    int a[32]={0};
    int count=0;
    int r=n;
    for(int i=0;n>0;i++){
        a[i]=n%2;
        n/=2;
        count=i;
    }
    for(count;count>=0;count--){
        printf("%d",a[count]);
    }
    printf(" %X\n",r);
    }
}*/

//
/*int main(){
    string line;
    int count=0;
    vector<string> nums;
    while(getline(cin,line)){
        count++;
        nums.push_back(line);
    }
    string word;
    for(int i=0;i<count;i++){
    stringstream ss(nums[i]);
    vector<int> sum;
    while(ss>>word){
        int q=stoi(nums[i]);
            sum.push_back(q);
        }
    }
}*/




