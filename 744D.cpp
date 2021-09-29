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
#define pii pair<int,int>

void solve()
{
    int n;
    cin>>n;
    
   priority_queue<pair<int,int> > pq;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x) pq.push({x,i});
    }
   
    vector<pair<int,int> > res;
    while(pq.size()>)
    {
        pair<int,int> t1=pq.top();
        pq.pop();
        pair<int,int> t2=pq.top();
        pq.pop();
        res.push_back({t1.second,t2.second});
        t1.first--;
        t2.first--;
        if(t1.first>0) pq.push(t1);
        if(t2.first>0) pq.push(t2);
    }
    
    int d=res.size();
    if(d==0)
    {
    	cout<<0<<"\n";
    	return;
	}
    cout<<d<<"\n";
    for(int i=0;i<d;i++)
      cout<<res[i].first<<" "<<res[i].second<<"\n";
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





