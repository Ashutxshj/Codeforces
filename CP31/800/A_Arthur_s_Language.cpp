#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,w;
    cin>>s>>w;
    
    int n=s.size(),m=w.size();
    const int M=1000000007;
    
    vector<vector<long long>>dp(n+1,vector<long long>(m+1,0));
    
    for(int i=0;i<=n;i++)dp[i][0]=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j]=dp[i-1][j];
            if(s[i-1]==w[j-1]){
                dp[i][j]=(dp[i][j]+dp[i-1][j-1])%M;
            }
        }
    }
    
    cout<<dp[n][m]<<endl;
    return 0;
}