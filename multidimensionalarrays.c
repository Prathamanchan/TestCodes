#include<stdio.h>

int main()
{
	
  int B[2][3];
  for(int i=0;i<=2;i++){
	  for(int j=0;j<=3;j++)
	  {
		  B[i][j]=1997+i+j;
	  }
  }
  int (*p)[3]=B;
 /* printf("%p ",p);
  printf("%p ",&B[0]);
  printf("%p ",B);
  printf("%p ",&B[0][0]);
  printf("%p ",p+1);
  printf("%p ",*(B+1));
  printf("%p ",&B[1][0]); */
/*  
  printf("%p ",*B);
  printf("%p ",*B+1);
  printf("%p ", *(B+1));
  printf("%p ", *(B+1)+1);
  printf("     %d   ",*(*B+1));
  */
  
  for(int i=0;i<=2;i++)
  {
	  for(int j=0;j<=3;j++)
	  {
		  printf("%d ",B[i][j]);
		  printf("%d \n",*(*(B+i)+j));
	  }
  }
}
