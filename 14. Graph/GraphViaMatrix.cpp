#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){

    int n, m;

    std::cin>> n >> m;

    // graph here

    int adj[n+1][m+1];

    for(int i= 0; i<m; i++)
    {
        int u, v;
        std::cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u]= 1;
    }
    
    return 0;
}



