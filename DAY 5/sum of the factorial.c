

int main()
{
    int num=3,mul=1,sum=0,i,j;
    for(int i=2;i<=num;i++){
        mul=1;
        for(j=2;j<=i+1;j++){
            mul*=j;
        }
         sum+=mul;
        
        
    }
    printf("%d",sum);
    return 0;
}
