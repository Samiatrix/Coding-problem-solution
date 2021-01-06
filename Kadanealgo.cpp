#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int solve(vector<int>& nums){
  int ans=INT_MIN, curr=0;
  for(auto i:nums){
    curr+=i;
    if(ans<curr){
      ans = curr;
    }
    if(curr<0){
      curr = 0;
    }
  }
  return ans;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    cout<<solve(nums);
	}
	return 0;
}
