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

void solve()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
      cin>>p[i];
    deque<int> d;
    
    d.push_back(p[0]);
    
    for(int i=1;i<n;i++)
    {
        if(d.front()>p[i]) d.push_front(p[i]);
        else d.push_back(p[i]);
    }
    
    for(int i=0;i<n;i++)
     cout<<d[i]<<" ";
    cout<<"\n"; 
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





