// TO FIND GCD USING RECURSION
#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(a,a%b);
}
int main(){
    int x,y;
    printf("enter any two numbers:");
    scanf("%d %d",&x, &y);
    printf("gcd= %d", gcd(x,y));
}