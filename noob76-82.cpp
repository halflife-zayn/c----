#include <bits/stdc++.h>
using namespace std;
/*vector<int> v;
int main(){
    int q,op;
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>op;
        if(op==1){
            int x;
            cin>>x;
            v.push_back(x);
        }
        else if(op==2){
            v.pop_back();
        }
        else if(op==3){
            int j;
            cin>>j;
            cout<<v[j]<<"\n";
        }
        else if(op==4){
            int j,x;
            cin>>j>>x;
            v.push_back(0);
            int len=v.size();
            for(int l=len-1;l>j;l--){
                v[l]=v[l-1];
            }
            v[j+1]=x;
        }
        else if(op==5){
            sort(v.begin(),v.end());
        }
        else if(op==6){
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
        }
        else if(op==7){
            int len=v.size();
            cout<<len<<"\n";
        }
        else if(op==8){
            int len=v.size();
            for(int j=0;j<len;j++)cout<<v[j]<<" ";
            cout<<"\n";
        }

    }
}
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 求序列a中的峰、谷点的个数
     * @param a int整型vector 序列a
     * @return int整型
     */
/*    int countPeakPoint(vector<int>& a) {
        int count;
        int len=a.size();
        for(int i=1;i<len-1;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1])count++;
            if(a[i]<a[i-1]&&a[i]<a[i+1])count++;
        }
        return count;
        // write code here
    }
};
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算两个三维向量的点乘结果
     * @param vector1 int整型vector 第一个向量
     * @param vector2 int整型vector 第二个向量
     * @return int整型
     */
/*    int dotTime(vector<int>& vector1, vector<int>& vector2) {
        // write code here
        return vector1[0]*vector2[0]+vector1[1]*vector2[1]+vector1[2]*vector2[2];
        
    }
};
/*class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算出这两个向量叉乘的结果
     * @param vector1 int整型vector 
     * @param vector2 int整型vector 
     * @return int整型vector
     */
/*    vector<int> crossTimes(vector<int>& vector1, vector<int>& vector2) {
        // write code here
        vector<int> v;
        v.push_back(vector1[1]*vector2[2]-vector1[2]*vector2[1]);
        v.push_back(vector1[2]*vector2[0]-vector1[0]*vector2[2]);
        v.push_back(vector1[0]*vector2[1]-vector1[1]*vector2[0]);
        return v;
    }
};*/
/*class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算旺仔哥哥在地铁上的最长停留时间
     * @param t int整型vector 序列  t，表示地铁在相邻两站之间的用时
     * @param s int整型vector 序列 s，表示地铁在每一站的停靠时间
     * @param x int整型 旺仔哥哥想从第 x 站出发
     * @param y int整型 旺仔哥哥想坐到第 y 站
     * @return int整型
     */
/*    int countLongestSubwayTime(vector<int>& t, vector<int>& s, int x, int y) {
        // write code here
        int sum=0;
        for(int i=x-1;i<=y-1;i++){
            sum+=s[i];
        }
        for(int i=x-1;i<=y-2;i++){
            sum+=t[i];
        }
        return sum;
    }
};
*/
#include <string>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 整理出一个将序列中的数字以逗号隔开从而得到的字符串
     * @param a int整型vector 需要整理的序列 a
     * @return string字符串
     */
    string commaTransformer(vector<int>& a) {
        string str="";
        for(int i=0;i<a.size();i++){
            if(i==0)str+= to_string(a[i]);
            else{
                str+=',';
                str+= to_string(a[i]);
            }
        }
        return str;
    }
    int main(){
vector<int> nums = {1, 2, 3, 4, 5};
cout << commaTransformer(nums);}
};
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算出旺仔哥哥最后会站在哪位小朋友旁边
     * @param a int整型vector 第 i 个小朋友的数字是 a_i
     * @param m int整型 表示旺仔哥哥的移动次数
     * @return int整型
     */
    int stopAtWho(vector<int>& a, int m) {
        // write code here
        int n=1;
        int len=a.size();
        reverse(a.begin(),a.end());
        a.push_back(0);
        reverse(a.begin(),a.end());
        for(int i=1;i<=m;i++){
            n=(n-a[n]);
            while(n<0)n+=len;
            n%=len;
            if(n==0)n=len;
        }
        return n;
    }
};