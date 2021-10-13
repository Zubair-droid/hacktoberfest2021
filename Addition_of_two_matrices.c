/*
Write a program to add 2 matrices.

Input consists of multiple test cases. For each case, the first line contains two integers m1, n1 the size of matrix and m1 following rows containing the integers for each row. It is followed by data for matrix B. For each test case output a single line containing all elements of the resultant matrix

Case 1
Input (stdin)
1
1 2  
0 1
1 2

Output (stdout)
1 3

Case 2
Input (stdin)
1
2 3
1 2 3
4 5 6
1 2 3
4 5 6

Output (stdout)
2 4 6 8 10 12

*/

#include<stdio.h>

#define MAX_SIZE 10

int main()
{
    int t, sum;
    int first[MAX_SIZE][MAX_SIZE];
    int second[MAX_SIZE][MAX_SIZE];
    int mul[MAX_SIZE][MAX_SIZE];
    int i, j, k,m, n, l;
    scanf("%d", &t);
    
    for(l = 0; l < t; l++)
    {
        scanf("%d %d", &m, &n);
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &first[i][j]);
        for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &second[i][j]);

        for ( i = 0 ; i < m ; i++ )
        {
          for ( j = 0 ; j < n ; j++ )
          {
            mul[i][j] = first[i][j] + second[i][j];
          }
       }
       for(i = 0; i < m; i++)
            for(j = 0; j < n; j++)
                printf("%d ", mul[i][j]);
       printf("\n");
    }
    return 0;
}