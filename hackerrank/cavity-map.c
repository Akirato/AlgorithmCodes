#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    char board[1000][1000];
    int i,j;
    for(i=0;i<n;i++)
    {
        	scanf("%s",board[i]);
    }
//    printf("//\n");
  //  for(i=0;i<n;i++)
    //{
      //          printf("%s\n",board[i]);
   // }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
	    if(i>0 && j>0 && i<n-1 && j<n-1)
	    {
            if(board[i][j]>board[i][j+1] && board[i][j]>board[i][j-1] && board[i][j]>board[i+1][j] && board[i][j]>board[i-1][j])
                board[i][j]='X';    
	    }    
        }
    }
    for(i=0;i<n;i++)
    {
        	printf("%s\n",board[i]);
    }
    return 0;
}
