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

void solve(vector<int>& nums){
  int l=0, r=nums.size()-1, ind=0;
  while(ind<=r){
    if(nums[ind]==0){
      swap(nums[l], nums[ind]);
      l++;
    }
    else if(nums[ind] == 2){
      swap(nums[ind], nums[r]);
      r--;
      ind--;
    }
    ind++;
  }
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  for(auto i:nums)  cout<<i<<" ";
  cout<<endl;
  solve(nums);
  for(auto i:nums)  cout<<i<<" ";
  cout<<endl;

	return 0;
}
