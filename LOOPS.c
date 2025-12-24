// TO ADD THE DIGITS OF GIVEN NUMBERS
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>0){
        sum+=(n%10);
        n=n/10;
    }
    printf("the sum of digit is %d",sum);
    return 0;
}
// TO FIND AMSTRONGS NUMBER
#include<stdio.h>
void main(){
    int a,b,c,d,n;
    for(n=100;n<=999;n++){
        a=n%10;
        d=n/10;
        b=d%10;
        c=d/10;
        if(a*a*a+b*b*b+c*c*c==n){
            printf("the armstrong's number is %d\n",n);
        }
    }
}
// FIBONACCI SERIES
#include<stdio.h>
void main(){
    int a=0,b=1,c,i;
    printf("%d %d\n",a,b);
    for(i=3;i<=20;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
// REVERSE A NUMBER
#include<stdio.h>
int main(){
     int num,r,rev=0;
     printf("enter any number:");
     scanf("%d",&num);
    while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    printf("the reverse=%d",rev);
    return 0;
}
// TO CHECK IF THE GIVEN NUMBER IS PALLINDROME OR NOT
#include<stdio.h>
int main(){
    int num,r,rev=0,a;
    printf("enter any number:");
    scanf("%d",&num);
    a=num;
    while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    if(rev==a){
        printf("yes it is a pallindrome");
    }   
    else printf("no, the number isn't a pallindrome");
    return 0;
}