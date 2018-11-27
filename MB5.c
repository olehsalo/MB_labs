#include <stdio.h>
#include <stdlib.h>
int G[20][20] , distance[20] , inSet[20] , q[20] , parent[20] ;

int Q( int V )
{
    int sum = 0 , i ;
    for( i = 0 ; i < V ; i++ )
        sum += q[i] ;
    return sum ;
}
int extractMin( int V )
{
    int i , idx , min = 1000 ;
    for ( i = 0 ; i < V ; i++ )
    {
        if ( distance[i] <= min && inSet[i] == 0 )
            min = distance[i] , idx = i ;
    }
    q[idx] = 0 ;
    return idx ;
}
void dijkstra ( int S , int V )
{
    int u , i , check_empty = Q(V);

    while( check_empty >0 )
    {
        u = extractMin(V) ;

        inSet[u] = 1 ;
        q[u] = 0 ;
        for( i = 0 ; i < V ; i++ )
        {
            if( G[u][i] > 0 )
            {
                if( distance[u] + G[u][i] < distance[i] )
                    distance[i] = distance[u] + G[u][i] , parent[i] = u + 1 ;
            }
        }
        check_empty = Q(V);
    }

    print(V);
}
