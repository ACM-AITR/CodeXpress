#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


string solve()
{
	ll n;
	cin>>n;
	map<ll, ll>freq;
	for(int i = 0; i<n; i++)
	    {
	        ll input;
	        cin>>input;
	        freq[input]++;
	    }
	 for(auto i: freq)
	    {
	        if(i.second%2 == 1)
	       {
	           return "no";
	           
	       } 
	    }
	    return "yes";
	    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t = 1;
	cin >> t;
    vector<string> ans;
	while (t--) ans.push_back(solve());
	for(auto it:ans)cout<<it<<endl;
	return 0;
}