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