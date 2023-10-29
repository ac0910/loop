#include<stdio.h>
int main(){
    int n;
    printf("Enter a Value in n :");
    scanf("%d",&n);
    int a=1;
    for (int i =1; i <= n; i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    return 0;
    
}