// TO SWAP TWO ELEMENTS OF AN ARRAY
#include<stdio.h>
void swap(int*arr,int i,int j){
    int x=arr[i];
    arr[i]=arr[j];
    arr[j]=x;
}
int main(){
    int arr[7];
    int i;
    printf("enter 7 numbers for an array:");
    for(i=0;i<7;i++) scanf(" %d",&arr[i]);
    swap(arr,2,4);
    printf("the swapped array is");
    for(i=0;i<7;i++) printf(" %d",arr[i]);
    return 0;
}
// TO FIND THE GREATEST NUMBER FROM THE GIVE TWO NUMBER
#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int x=3, y=8;
    swap(&x,&y);
    return 0;
}
void swap(int *a, int *b){
    if(*a>*b) printf("the greatst num =%d",*a);
    else printf("the greatst num =%d",*b);
}
// TO PRINT THE AARRAY BACKWARDS
#include<stdio.h>
int main(){
    int a[4],i;
    printf("enter 4 numbers for array:");
    for(i=0;i<4;i++) scanf("%d",&a[i]);
    int *p=a+3;
    for(i=0;i<4;i++){
        printf("%d\t",*(p-i));
    }
    return 0;
    }
// TO SWAP TWO NUMBERS
#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int x,y;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    swap(&x,&y);
    printf(" the value of x is %d",x);
    printf("\n the value of y is %d",y);
    return 0;
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
// TO PRINT THE SQAURE OF A NUMBER 
#include<stdio.h>
int sqr(int *a);
int main(){
    int x;
    printf("enter value of x:");
    scanf("%d",&x);
    sqr(&x);
    printf(" the sqaure of given number is %d",x);
    return 0;
}
void sqr(int *a){
    *a=*a*(*a);
}
// TO FIND THE SUM OF ARRAY'S ELEMENT
#include<stdio.h>
int sum(int *arr,int len);
int main(){
    int arr[4];
    printf("enter 4 numbers for array:");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int a=sum(arr,4);
    printf(" the sum is %d",a);
}
int sum(int *arr,int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=*(arr+i);
    }
    return sum;
}
