#include <iostream>
#define MAXINT 6

using namespace std;

//声明一个二维数组,C[i][j]存储的是点i到点j的边的权值,如果不可达,则用1000表示
//借此二维数组来表示一个连通带权图
int c[MAXINT][MAXINT]={{1000,6,1,5,1000,1000},{6,1000,5,1000,3,1000},{1,5,1000,5,6,4},{5,1000,5,1000,1000,2},{1000,3,6,1000,1000,6},{1000,1000,4,2,6,1000}};
void Prim(int n)
{
    int lowcost[MAXINT];//存储S中到达对应的其它各点的最小权值分别是多少
    int closest[MAXINT];//closest[]数组保存的是未在S中的点所到达S中包含的最近的点是哪一个,如:closest[i]=1表示i最靠近的S中的点是1
    bool s[MAXINT];//bool型变量的S数组表示i是否已经包括在S中
    int i,k;
    s[0]=true;//从第一个结点开始寻找,扩展
    for(i=1;i<=n;i++)//简单初始化
    {
        lowcost[i]=c[0][i];
        closest[i]=0;//现在所有的点对应的已经在S中的最近的点是1
        s[i]=false;
    }
    cout<<"0->";
    for(i=0;i<n;i++)
    {
        int min=1000;//最小值,设大一点的值,后面用来记录lowcost数组中的最小值
        int j=1;
        for(k=1;k<=n;k++)//寻找lowcost中的最小值
        {
            if((lowcost[k]<min)&&(!s[k]))
            {
                min=lowcost[k];j=k;
            }
        }
        cout<<j<<" "<<"->";
        s[j]=true;//添加点j到集合S中
        for(k=1;k<=n;k++)//因为新加入了j点,所以要查找新加入的j点到未在S中的点K中的权值是不是可以因此更小
        {
            if((c[j][k]<lowcost[k])&&(!s[k])){lowcost[k]=c[j][k];closest[k]=j;}
        }
    }

}
int main()
{

    //输入初始化数组

    cout<<"请输入初始权值数组:"<<endl;
    for(int i=0;i<MAXINT;i++)
    {
        for(int j=0;j<MAXINT;j++)
        {
            //    cout<<"please enter c["<<i<<"]["<<j<<"]:";
            //    cin>>c[i][j];
            cout<<c[i][j]<<"\t";
            //    cout<<endl;
        }
        cout<<endl;
    }

    Prim(MAXINT-1);
    return 0;




}