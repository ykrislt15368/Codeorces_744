/*.........................*
 *..................___....*
 *.../|...../|...../...\...*
 *../.|..../.|..../........*
 *....|......|...|.........*
 *....|......|..|..___.....*
 *....|......|..|./...\....*
 *....|......|..|/.....\...*
 *....|......|..\...../....*
 *..__|__..._|_..\___/.....*
 *.........................*
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pii pair<int,int>
char s[20][30];
int vis[20][30];
int get_mat(int i,int j,int m)
{
    int d=0;
    int j1=j-1;
    int j2=j+1;
    i=i-1;
    while(i>=0 && j1>=0 && j2<m && s[i][j1]=='*' && s[i][j2]=='*')
    {
       d++;
       i--;
       j1--;
       j2++;
    }   
    return d;   
    
}
void trap_mat(int i,int j,int d)
{
    vis[i][j]=1;
    i-=1;
    int j1=j-1;
    int j2=j+1;
    while(d--)
    {
        vis[i][j1]=1;
        vis[i][j2]=1;
        i--;
        j1--;
        j2++;
    }
}
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        cin>>s[i][j];
      
     for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
         vis[i][j]=0; 
     
    
    for(int i=n-1;i>=0;i--)
        for(int j=m-1;j>=0;j--)
        {
            if(s[i][j]=='*')
            {
                int d=get_mat(i,j,m);
                if(d>=k) trap_mat(i,j,d);
                else if(vis[i][j]!=1)
                {
                    cout<<"NO\n";
                    return;
                }
            }
            else vis[i][j]=1;
        }
    
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(vis[i][j]==0)
        {
           cout<<"NO\n";
           return; 
        }
    cout<<"YES\n";
    return;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t-->0)
      solve();
    return 0;  
}





