# include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("Enter the value c:");
    scanf("%d",&c);
    if(a==b && b==c && c==a )
    {
        printf("equalitral triangle");
    }
    else if(a+b>c || b+c>a || c+a>b)
    {
        printf("Right angle triangle");
    }
    else
    {
        printf("Not a triangle");
    }
    return 0;
}