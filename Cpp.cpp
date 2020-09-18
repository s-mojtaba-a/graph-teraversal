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


#### python impelemenation ####

from collections import deque

def DFS(s,mark,v):
    ''' starts DFS from node v
        mark = boolean list of mark
        s  = adjacancy list of the graph
    '''
    mark[v]=1
    print(v)
    for i in s[v] :
        if mark[i]==0:
            DFS(s,mark,i)

def BFS(s,v,n):
    ''' starts BFS from node v
        n = number of vertices in the graph
        s = adjacancy list of the graph
    '''
    mark=[0]*(n+1)
    Q=[] ; Q=deque(Q)
    Q.append(v)
    mark[v]=1
    while(len(Q)>0):
        v=Q.popleft()
        print(v)
        for i in s[v]:
            if mark[i]==0:
                Q.append(i)
                mark[i]=1

if __name__ == '__main__': # just for a test

    s=[[],[2,3,10],[1,4,5],[1,4,6,7],[2,3,8,9],
        [2],[3,11,12],[3,8],[4,7],[4],[1],[6],[6]]
    print('result of BFS : ')
    BFS(s,1,12)
    print('result of DFS : ')
    mark=[0]*(13)
    DFS(s,mark,1)
