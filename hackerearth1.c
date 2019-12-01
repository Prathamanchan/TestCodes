

#include <stdio.h>

int main()
{
    int N;
   // printf("Enter an Integer:\n");
    scanf("%d", &N);  //Takes a random Number
    
    int check=0;      // Check Bit
    
    for(int i=2;i<=N;i++)
    {
        check=0;      //Every Integer until N Check initialized to Zero
        for(int j=2;j<=i/2;j++)    //Reduce Time Complexity i/2>0 integer obviously not divisible
        {
            if(i%j==0)
            {
			//	printf("%d is not a Prime Number\n",i);
                check=1;
                break; 
            }
           
        }
        if(check==0)
        printf("%d ",i);
    }
    
}    
