#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows& colums :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int i = 1; i <=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
    
    
}