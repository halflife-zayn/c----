 #include <iostream>
using namespace std;
const int max_board=30;
class Queens{
    public:
    Queens(int size);
    bool is_solved()const;
    void print()const;
    bool unguarded(int col)const;
    void insert(int col);
    void remove(int col);
    int board_size;
    private:
    int count;
    bool col_free[max_board];
    bool upward_free[2*max_board-1];
    bool downward_free[2*max_board-1];
    int queen_in_row[max_board];
};
Queens::Queens(int size){
    board_size=size;
    count=0;
    for(int i=0;i<board_size;i++)col_free[i]=true;
    for(int i=0;i<2*board_size-1;i++)upward_free[i]=true;
    for(int i=0;i<2*board_size-1;i++)downward_free[i]=true;
}
bool Queens::is_solved()const{
    return count==board_size;
}
void Queens::print()const{
    
    /*for(int i=0;i<board_size;i++){
        if(i>0)cout<<",";
        cout<<"("<<i<<","<<queen_in_row[i]<<")";
    }
    cout<<endl;*/
}
void Queens::insert(int col){
    queen_in_row[count]=col;
    col_free[col]=false;
    upward_free[count+col]=false;
    downward_free[count-col+board_size-1]=false;
    count++;
}
bool Queens::unguarded(int col)const{
    return col_free[col]&&upward_free[count+col]&&downward_free[count-col+board_size-1];
}
void Queens::remove(int col){
    count--;
    col_free[col]=true;
    upward_free[count+col]=true;
    downward_free[count-col+board_size-1]=true;
}
void solve(Queens &config){
    if(config.is_solved())config.print();
    else{
        for(int col=0;col<config.board_size;col++){
            if(config.unguarded(col)){
                config.insert(col);
                solve(config);
                config.remove(col);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    Queens config(n);
    solve(config);
}


//dfs最短路径
/*char maze[12][12];
bool visited[12][12];
int best=INT_MAX;
void dfs(int x,int y,int step){
    if(x>12||x<0||y>12||y<0||visited[x][y]||maze[x][y]=='W')return;
    if(maze[x][y]=='E'){if(best>step){best=step;}return;}
    visited[x][y]=true;
    dfs(x-1,y,step+1);
    dfs(x+1,y,step+1);
    dfs(x,y-1,step+1);
    dfs(x,y+1,step+1);
    visited[x][y]=false;
}
int main(){
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>maze[i][j];
        }
    }
    int x1,y1,x2,y2,x3,y3;
    char c;
    cin>>c>>x1>>c>>y1>>c;
    cin>>c>>x2>>c>>y2>>c;
    cin>>c>>x3>>c>>y3>>c;
    int starts[3][2]={{x1,y1},{x2,y2},{x3,y3}};
    for(int i=0;i<3;i++){
    int x=starts[i][0],y=starts[i][1];
        if(maze[x][y]=='E'){
            cout<<"1";
            continue;
        }
        for (int a=0; a<12; a++){
            for (int b=0; b<12; b++){
                visited[a][b] = false;
            }
        }
        best=INT_MAX;
        dfs(x,y,1);
        if (best!=INT_MAX)
            cout<<best<<" ";
        else
            cout<<"-1 ";
    }
}*/
//dfs全排列
/*bool stop=false;
vector<int> path;
vector<bool> used;
void dfs(int n){
    if(stop) return;
    if(path.size()==n){
        static int count=0;
        count++;
        cout<<count<<":";
        for(int i=0;i<n;i++){
            if(i>0) cout<<" ";
            cout<<path[i];
        }
        cout<<endl;
        if(count>=10) stop=true;
        return;
    }
    for(int i=1;i<=n;i++){
        if(stop) return;
        if(!used[i]){
            used[i]=true;
            path.push_back(i);
            dfs(n);
            path.pop_back();
            used[i]=false;
        }
    }
}

long long jie(int n){
    long long res=1;
    for(int i=2;i<=n;i++) res*=i;
    return res;
}

int main(){
    int n;
    cin>>n;
    used.resize(n+1,false);
    dfs(n);
    cout<<jie(n)<<endl;
    return 0;
}*/
/*int T2B(string str,int n){
    int sum=0;
    if(n==0)return 0;
    sum+=2*T2B(str,n-1)+str[n-1]-'0';
    return sum;
}
int main(){
    string num;
    cin>>num;
    int n=num.size();
    cout<<T2B(num,n);
}*/
/*int Min (int arr[ ], int n){
    int min=INT_MAX;
    if(n==1)return arr[0];
    int temp=Min(arr,n-1);
    min=temp<arr[n-1]?temp:arr[n-1];
    return min;
}
int Sum (int arr[ ], int n){
    int sum=0;
    if(n==1)return arr[0];
    sum+=Sum(arr,n-1)+arr[n-1];
    return sum;
}
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    cout<<Min(arr,t)<<" "<<Sum(arr,t)<<endl;
}*/
