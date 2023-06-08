#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int profit=0,maxx=0;
    int cost;
    int minn=prices[0];
    for(int i=1;i<n;i++){
        cost=prices[i]-minn;
        profit=max(profit,cost);
        minn=min(minn,prices[i]);
    }
    return profit;
}
