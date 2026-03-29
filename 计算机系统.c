#include<stdio.h>
//2.62
int int_shifts_are_arithmetic(){
    int k=-1;
    //如果算数右移，k还等于-1，输出1（true）
    //否则第一位变成0，总之不会等于-1，输出0
    return(k>>1)==-1;
}
//2.67
int bad_int_size_is_32(){
    int set_msb=1<<31;
    int beyond_msb=1<<32;
    return set_msb&&!beyond_msb;
}//A问题：直接移32位并不符合C语言标准
//B和C正确做法
int int_size_is_32(){
    int set_msb=1<<15;
    set_msb=set_msb<<15;
    set_msb=set_msb<<1;
    int beyond_msb=set_msb<<1;
    return set_msb&&!beyond_msb;
}
//2.75
//这道题真的不能用sizeof吗，我只能这样判断位数了
int get_bits(){
    unsigned x=-1;
    int bits=0;
    if(x&0xFFFF0000){
    bits+=16;
    x=x>>16;
}
    if(x&0xFF00){
    bits+=8;
    x=x>>8;
}
    if(x&0xF0){
    bits+=4;
    x=x>>4;
}
    if(x&0xC){
    bits+=2;
    x=x>>2;
}
    if(x&0x2){
    bits+=1;
    x=x>>1;
}
    return (bits+(x&0x1));
}
int signed_high_prod(int x, int y){
    unsigned ux=(unsigned)x;
    unsigned uy=(unsigned)y;
    
    int w=get_bits();
    
    unsigned unsigned_high=(unsigned)(((unsigned long long)ux*uy)>>w);
    
    int correction=(x>>(w-1))&y;
    correction+=(y>>(w-1))&x;
    
    return (int)unsigned_high+correction;
}
//2.82
int main(){
    int x=random();
    int y=random();
    unsigned ux=(unsigned)x;
    unsigned uy=(unsigned)y;
    printf("%d\n",(x<y)==(-x>-y));//不恒为1，当x=INT_MIN时，-x溢出
    printf("%d\n",((x+y)<<4)+y-x==17*y+15*x);//不恒为1，x+y溢出时，移位会导致错误（如x=y=INT_MAX-1）
    printf("%d\n",~x+~y+1==~(x+y));//恒为1，对任何补码数，~x=-x+1，左右都等于-x-y+1
    printf("%d\n",(ux-uy)==-(unsigned)(y-x));//恒为1，无符号的模运算就是这样定义的
    printf("%d\n",((x>>2)<<2)<=x);//恒为1，移位后最后两位必改为00，即x减少0到3
}
