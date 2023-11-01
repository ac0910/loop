#include<stdio.h>
int main(){
    int n;
    printf("Enter the Value in N :");
    scanf("%d",&n);
    for (int i = 2; i<=n-1 ; i++)
    {
        if (n%i==0){
            printf("The Given Number is composite");
        }
       
   }
   return 0;
    
}