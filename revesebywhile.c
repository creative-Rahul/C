#include<stdio.h>
int main()
{
    int num;
    printf("Enter the maximum number =");
    scanf("%d",&num);
    /*while (num>=2)
    {
        printf("%d\t",num);
        num-=2;  
    }*/
    do
    {
        printf("%d\t",num);
        num-=2;
    } while (num>=2);
    
    return 0;

}