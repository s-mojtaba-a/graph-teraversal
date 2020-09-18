#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(vector<vector<int>> &s, bool mark[], int v)
{
    // starts dfs from node v
    mark[v] = 1;
    int len = s[v].size();
    for (int i = 0; i < len; i++)
    {
        if (mark[s[v][i]] == 0)
            dfs(s, mark, s[v][i]);
    }
}



void bfs(vector<vector<int>> &s,int v,int n){
   // starts bfs from node v 
   // n = number of nodes
   bool mark[n+1]={0};
   queue<int> Q ;
   Q.push(v);
   mark[v]=1;
   while (!Q.empty())
   {
       int v =Q.front() ;
       Q.pop();
       int len=s[v].size();
       for (int i=0;i<len;i++){
           if (mark[s[v][i]]==0){
               Q.push(s[v][i]);
               mark[s[v][i]]=1;
           }
       }
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}