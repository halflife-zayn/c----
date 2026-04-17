#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 字符串加法（处理整数部分，带进位）
string add_strings(string a, string b, int &carry)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string res;
    int i = 0;
    while (i < a.size() || i < b.size() || carry)
    {
        int sum = carry;
        if (i < a.size())
            sum += a[i] - '0';
        if (i < b.size())
            sum += b[i] - '0';
        res.push_back(sum % 10 + '0');
        carry = sum / 10;
        i++;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string A, B;
    int N;
    cin >> A >> B >> N;

    // 拆分A的整数和小数部分
    string a_int = "0", a_dec = "";
    size_t dot_a = A.find('.');
    if (dot_a == string::npos)
    {
        a_int = A;
        a_dec = "";
    }
    else
    {
        a_int = A.substr(0, dot_a);
        a_dec = A.substr(dot_a + 1);
    }
    if (a_int.empty())
        a_int = "0";

    // 拆分B的整数和小数部分
    string b_int = "0", b_dec = "";
    size_t dot_b = B.find('.');
    if (dot_b == string::npos)
    {
        b_int = B;
        b_dec = "";
    }
    else
    {
        b_int = B.substr(0, dot_b);
        b_dec = B.substr(dot_b + 1);
    }
    if (b_int.empty())
        b_int = "0";

    // 对齐小数部分
    int max_dec_len = max(a_dec.size(), b_dec.size());
    while (a_dec.size() < max_dec_len)
        a_dec += '0';
    while (b_dec.size() < max_dec_len)
        b_dec += '0';

    // 小数部分相加
    int dec_carry = 0;
    string sum_dec;
    for (int i = max_dec_len - 1; i >= 0; --i)
    {
        int d1 = a_dec[i] - '0';
        int d2 = b_dec[i] - '0';
        int s = d1 + d2 + dec_carry;
        sum_dec.push_back(s % 10 + '0');
        dec_carry = s / 10;
    }
    reverse(sum_dec.begin(), sum_dec.end());

    // 整数部分相加（带上小数的进位）
    int int_carry = dec_carry;
    string sum_int = add_strings(a_int, b_int, int_carry);

    // 处理小数部分四舍五入到N位
    if (max_dec_len > N)
    {
        // 看第N+1位是否>=5
        if (sum_dec.size() > N && sum_dec[N] >= '5')
        {
            // 小数部分进位
            int carry = 1;
            for (int i = N - 1; i >= 0 && carry; --i)
            {
                int val = sum_dec[i] - '0' + carry;
                sum_dec[i] = (val % 10) + '0';
                carry = val / 10;
            }
            // 小数部分进位到整数
            if (carry)
            {
                int tmp_carry = 1;
                sum_int = add_strings(sum_int, "0", tmp_carry);
            }
        }
        sum_dec = sum_dec.substr(0, N);
    }
    else
    {
        while (sum_dec.size() < N)
            sum_dec += '0';
    }

    // 处理整数部分前导0
    size_t first_non_zero = sum_int.find_first_not_of('0');
    if (first_non_zero == string::npos)
    {
        sum_int = "0";
    }
    else
    {
        sum_int = sum_int.substr(first_non_zero);
    }

    cout << sum_int << "." << sum_dec << endl;

    return 0;
}

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




