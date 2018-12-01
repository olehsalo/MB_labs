#include <stdio.h>

int G[100][100] , distance[1000] , inSet[1000] , q[1000];
void print( int V )
{
    int i ;
    for ( i = 0 ; i < V ; i++ )
    if(i!=29)
    {
        printf("Vertex V%d  distance from source = %d \n", i , distance[i] ) ;
    }
    else
    {
        printf("Vertex V* distance from source = %d \n", distance[i] ) ;
    }
}
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
void dijkstra ( int V )
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
                    distance[i] = distance[u] + G[u][i] ;
            }
        }
        check_empty = Q(V);
    }

    print(V);
}
int main()
{
    int V , i , j , S;
    printf ( "Enter no. of vertices: " ) ;
    scanf ( "%d" , &V ) ;

    printf ( "Enter graph in matrix form:\n" ) ;
    for ( i = 0 ; i < V ; i++ )
    {
        for( j = 0 ; j < V ; j++ )
            scanf( "%d" , &G[i][j] );
    }
    for ( i = 0 ; i < V ; i++ )
        distance[i] = 1000 , inSet[i] = 0 , q[i] = 1 ;

    printf ( "Enter the source vertex: " ) ;
    scanf ( "%d" , &S ) ;
    distance[ S  ] = 0 ;
    dijkstra ( V ) ;
    return 0;
}
