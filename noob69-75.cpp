#include <bits/stdc++.h>
using namespace std;
/*struct Student{
    string name;
    int ch,ma,en,tot;
    Student(string A,int B,int C,int D){
        name=A;ch=B;ma=C;en=D;tot=B+C+D;
    }
    Student()=default;
    bool operator > (const Student &x)const{
        return tot>x.tot;
    }
}a[2000];
int main(){
    int n;
    string A;
    int B,C,D;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A>>B>>C>>D;
        a[i]=Student(A,B,C,D);
    }
    Student ans=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]>ans) ans=a[i];
    }
    cout<<ans.name<<" "<<ans.ch<<" "<<ans.ma<<" "<<ans.en;
}*/
/**
 * struct Point {
 *	int x;
 *	int y;
 *	Point(int xx, int yy) : x(xx), y(yy) {}
 * };
 */

/*class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算A点与B点之间的距离
     * @param point_A Point类 A点
     * @param point_B Point类 B点
     * @return double浮点型
     */
    /*double calculateDistance(Point point_A, Point point_B) {
        double x=point_A.x-point_B.x;
        double y=point_A.y-point_B.y;
        return sqrt(x*x+y*y);
    }
};*/
// 定义学生结构体
/*struct Student{
    int id;
    int academic_score;
    int activity_score;
    
    
};

// 评估函数：判断学生是否优秀
bool isExcellent(Student student){
    // TODO: 实现优秀标准的判断逻辑
    if(student.academic_score+student.activity_score>140&&student.academic_score*0.7+student.activity_score*0.3>=80)
    return true; //true 代表学生优秀
    else return false;
}*/
/*#include <bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
    point(double A,double B){
        x=A,y=B;
    }
    point() = default;
};

struct line{
    point point_A,point_B;
    line(point A,point B){
        point_A = A,point_B = B;
    }
    line() = default;
};
double distance(point p1,point p2)
{
    double xx=p1.x-p2.x;
    double yy=p1.y-p2.y;
    return sqrt(xx*xx+yy*yy);
}
double getDistance(point P, line L){
    // TODO: 计算点P到直线L的距离
    double pa=distance(P,L.point_A);
    double ab=distance(L.point_A,L.point_B);
    double bp=distance(L.point_B,P);
    double cos=(pa*pa+ab*ab-bp*bp)/(2*pa*ab);
    double sin=sqrt(1-cos*cos);
    return pa*sin;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
    point(double A,double B){
        x=A,y=B;
    }
    point() = default;
};

struct triangle{
    point a,b,c;
    triangle(point A,point B,point C){
        a=A,b=B,c=C;
    }
    triangle() = default;
};

double getArea(triangle T){
    double ab=sqrt((T.a.x-T.b.x)*(T.a.x-T.b.x)+(T.a.y-T.b.y)*(T.a.y-T.b.y));
    double bc=sqrt((T.b.x-T.c.x)*(T.b.x-T.c.x)+(T.b.y-T.c.y)*(T.b.y-T.c.y));
    double ca=sqrt((T.c.x-T.a.x)*(T.c.x-T.a.x)+(T.c.y-T.a.y)*(T.c.y-T.a.y));
    double s=(ab+bc+ca)/2;
    return sqrt(s*(s-ab)*(s-bc)*(s-ca));
    // TODO: 计算三角形T的面积
}*/
/*#include <bits/stdc++.h>
using namespace std;

struct point{
    double x,y;
    point(double A,double B){
        x=A,y=B;
    }
    point() = default;
};

struct line{
    point point_A,point_B;
    line(point A,point B){
        point_A = A,point_B = B;
    }
    line() = default;
};

struct Circle{
    point O;
    int r;
    Circle(point A,int B){
        O=A,r=B;
    }
    Circle() = default;
};

double getDistance(const Circle& circle, const line& l) {
    double ox=circle.O.x;double oy=circle.O.y;
    double r=circle.r;
    double ax=l.point_A.x;double ay=l.point_A.y;
    double bx=l.point_B.x;double by=l.point_B.y;
    double A=by-ay;
    double B=ax-bx;
    double C=bx*ay-ax*by;
    double d=abs(A*ox+B*oy+C)/sqrt(A*A+B*B);
    return 2*sqrt(r*r-d*d);
    
    
    // 请在这里实现你的代码
}*/
#include <bits/stdc++.h>
using namespace std;

struct point {
    double x, y;
    point(double A, double B) {
        x = A, y = B;
    }
    point() = default;
};

struct line {
    point point_A, point_B;
    line(point A, point B) {
        point_A = A, point_B = B;
    }
    line() = default;
};

point findMeetingPoint(line line_A, line line_B) {
    double ax=line_A.point_A.x;double ay=line_A.point_A.y;
    double bx=line_A.point_B.x;double by=line_A.point_B.y;
    double cx=line_B.point_A.x;double cy=line_B.point_A.y;
    double dx=line_B.point_B.x;double dy=line_B.point_B.y;
    point jiao;
    if(ax==bx&&cx==dx){
        point jiao=point(-1,-1);
        return jiao;
    }
    else if(ax!=bx&&cx!=dx){
    double k1=(ay-by)/(ax-bx);double k2=(cy-dy)/(cx-dx);
    if(k1==k2){
        jiao=point(-1,-1);
        return jiao;
    }
    else{
        jiao.x=(k1*ax-k2*cx-ay+cy)/(k1-k2);
        jiao.y=k1*(jiao.x-ax)+ay;
        return jiao;
    }
    }
    else if(ax==bx){
        jiao.x=ax;
        double k2=(cy-dy)/(cx-dx);
        jiao.y=k2*(jiao.x-cx)+cy;
        return jiao;
    }
    else if(cx==dx){
        jiao.x=cx;
        double k1=(ay-by)/(ax-bx);
        jiao.y=k1*(jiao.x-ax)+ay;
        return jiao;
    }
    jiao=point(-1,-1);
        return jiao;
    // TODO: 在这里输入你的代码，求直线 line_A 与 line_B 的交点
}

int main() {
    point A, B, C, D;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
    line AB = line(A, B);
    line CD = line(C, D);
    point ans = findMeetingPoint(AB, CD);
    cout << fixed << setprecision(12) << ans.x << " " << ans.y;
    return 0;
}