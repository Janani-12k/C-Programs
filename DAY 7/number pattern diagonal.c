
#include <stdio.h>

int main()
{
    int n,s;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //for(s=0;s<(n-i)-1;s++)
        //{
         //   printf(" ");
        //}
    
        for(int j=0;j<(i*2)+n;j++){
        if(i==j){
            printf("%d",i+1);
            
        }
        else if((i+j)==n-1)
        printf("%d",j+1);
        else
        printf(" ");
    }    
        printf("\n");
    }


    return 0;
}
