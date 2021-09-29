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
    vector<int> le;
    vector<int> re;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        a[i]=x;
    }    
    int mn=a[n-1];

    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<mn) mn=a[i];
        if(a[i]>mn) 
        {
            int r=upper_bound(a.begin()+i+1,a.end(),a[i])-a.begin();
            sort(a.begin()+i,a.end());
            le.push_back(i+1);
            re.push_back(r);
        }    
        
    }
    if(le.size()==0) 
	{
		cout<<0<<"\n";
		return;
	}
    
    cout<<le.size()<<"\n";
    for(int i=0;i<le.size();i++)
     cout<<le[i]<<" "<<re[i]<<" "<<1<<"\n";
     
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





