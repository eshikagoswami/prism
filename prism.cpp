#include<bits/stdc++.h>
using namespace std;
#define v 6
     int min(vector<int>& weight,vector<bool>& visited)
		{
        	
        	
    int minimum=INT_MAX;
    int vertex;
    for(int i=0;i<v;i++){
        if(visited[i]==false&& weight[i]<minimum){
            vertex=i;
            minimum=weight[i];
        }
        
    }
  return vertex;  
    
}
void mst(int graph[v][v]){
    int parent[v];
    vector<int> weight(v,INT_MAX);
    vector<bool> visited(v,false);
     parent[0]=-1;
     weight[0]=0;
     
    for(int i=0;i<v-1;++i){
        int u=min(weight,visited);
        visited[u]=true;
        for(int j=0;j<v;++j){
            if(graph[u][j]!=0&&visited[j]==false&&graph[u][j]<weight[j]){
                weight[j]=graph[u][j];
                parent[j]=u;
            }
        }
        
    }
    for(int i=1;i<v;i++){
    cout<<parent[i]<<"->";
    cout<<graph[parent[i]][i]<<"\n";
}}
int main(){
	int graph[v][v]={{0,1,2,3,0,0},
                  	{0,0,4,0,0,1},
	{1,2,0,0,3,2},
	{2,4,0,0,1,2},
	{4,3,2,0,1,0},
	{1,0,0,0,0,2}};
	return 0;}
	
