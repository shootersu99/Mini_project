#include <stdio.h>
int main()
{
    int result =0,a,n,count=0;
    printf("Enter the no. to check if palindrome or not");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        a = temp%10;
        temp = temp/10;
        result = result*10+a;
    }
    //printf("%d",result);
    if(n==result)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}
    
