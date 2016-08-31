/****************************************\
   Allah is Almighty
   Coder-Boxtroll
   sakibhossain.nstu@gmail.com
/*****************************************/
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pai(A) pair<int,int>A
#define mkp(x,y) make_pair(x,y)
#define ll long long int
#define ull unsigned long long int
#define re(x) return x
#define rep(i,j) for(int i=0;i<j;i++)
#define per(i,j) for(int i=j;i>=0;i--)
#define po(i,j) pow(i+0.0,j)
#define pb(x) push_back(x)
#define ppb(x,y) push_back(pair<int, int>(x,y))
#define pf printf
#define sf scanf
#define all(x) x.begin(), x.end()
#define clr(x) x.erase(all(x))
#define sum(x) accumulate(all(x),0)
#define vi(x) vector<int>x
#define vs(x) vector<string>x
#define vp(x) vector< pair<int,int> >x
#define ca(x) pf("Case %d: ",x)
#define ne pf("\n")
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template <class T> T Max(T a, T b) { return a>b?a:b;}
template <class T> T Min(T a, T b) { return a<b?a:b;}
bool stb(const string &a,const string &b) ///sorting from small to big size///
{
    return a.size()<b.size();
}
bool bts(const string &a,const string &b)  ///sorting from big to small size///
{
    return a.size()>b.size();
}
bool pas(const pair< int,int > &a,const pair <int,int> &b) ///Sort by Second elements of Pair ///
{
    return a.ss<b.ss;
}
//vector<int>A;
///Main Code Starting From Here///
int main()
{
string S,s1,s2,F;
while(cin>>S)
{
    int l=S.size();
    int f=S.find(',');
    s1.append(S,0,f);
    s2.append(S,f+1,l);
    int l1=s1.size();
    int l2=s2.size();
    if(l1>l2)
    {
        int r=l1-l2;
        for(int i=0;i<r;i++)
            s2+="0";
    }
    else if(l1<l2)
    {
        int r=l2-l1;
        for(int i=0;i<r;i++)
            s1+="0";
    }
    reverse(all(s1));
    reverse(all(s2));
//    cout<<s1<<" "<<s2<<endl;
//    s1="";s2="";
    l2=s2.size();
//    cout<<s1<<" "<<s2<<endl;
    int c=0,sum=0;
    for(int i=l2-1;i>0;i--)
    {
        int n1=s1[i]-48;
        int n2=s2[i]-48;
        sum=n1+n2+c;
        int m=sum%10;
        F+=48+m;
        c=sum/10;
//        cout<<F;
    }
//    cout<<endl;
    int n=s1[0]+s2[0]-(48*2)+c;
    int m=n%10;
    int o=n/10;
    F+=m+48;
    if(o!=0)
    F+=o+48;
//    reverse(all(F));
 l=F.size();
    int ff=0;
    for(int i=0;i<l;i++)
        if(F[i]<='9' && F[i]>='1')
    {
        ff=i;
        break;
    }
//    cout<<f<<endl;

//cout<<F<<endl;
    for(int i=ff;i<l;i++)
        cout<<F[i];
    cout<<endl;
    F="";s1="";s2="",S="";
}
}
///Never Give Up///

