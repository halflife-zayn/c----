#include<bits/stdc++.h>
using namespace std;
    int addTwoInteger(int Integer1, int Integer2) {
        return Integer1 +Integer2;
    }
long long aTimesB(int Number1, int Number2) {
        return long(Number1)*long(Number2);
    }
    double findSqrt(int n) {
         return double(sqrt(n));
    }
    bool judgeSolutions(int a, int b, int c) {
        if(b*b-4*a*c<0){
            return false;
        }
        else return true;
    }
    double firstSpeed(double M, double r) {
        return sqrt(M/r*0.0000000000667);
    }
    int factorialOfN(int n) {
        long long sum=1;
        for(int i=1;i<=n;i++){
            sum*=i;
            sum=sum%1000000007;
        }
        
        return sum;
    }
    string decodeWangzai(string password, int n) {
        int len=password.size();
        for(int i=0;i<len;i++){
            password[i]-=n;
            if (password[i]<'a') {
            password[i]+=26;
            }
            if (password[i]<'a') {
            password[i]+=26;
            }
            if (password[i]<'a') {
            password[i]+=26;
            }
            if (password[i]<'a') {
            password[i]+=26;
            }
        }
        return password;
    }