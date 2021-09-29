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
#define push_back pb
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int cb=0;
    
    for(int i=0;i<n;i++) {
	  if(s[i]=='B') cb++;
	  else cb--;
    }
	    
    if(!cb) cout<<"YES\n";
    else cout<<"NO\n";
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





