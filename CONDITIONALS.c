// AGE DETECTOR(IF-ELSE)
#include <stdio.h>
int main() {
    int a;
    printf("enter your age:");
    scanf("%d",&a);

    if(a<=10 && a>0){
      printf("you are a child ;) \n");
    }
    else if (a>=10 && a<=19){
        printf("you are teenager ;) \n");
    }
    else if (a>=20 && a<30) {
        printf("you are a twenkie;) \n ");
    }
     else if (a<0){
        printf("invalid age :( \n");
    }
    else {
        printf("you are old;) \n");
    }
   
    printf("thank you \n");
    return 0;
}
//ADULT OR NOT (TERNARY STATEMENT)
#include <stdio.h>
int main() {
    int a;
    printf("enter your age: ");
    scanf("%d", &a);
    (a>=18)? printf("you are an adult"): printf("you are not an adult");
    return 0;
}
// WEEK-DAY(SWITCH CASE)
#include<stdio.h>
int main() {
    int day;
    printf("enter your day(1-7):");
    scanf("%d", &day);
    switch (day) {
        case 1 : printf("monday");
        break;
        case 2 : printf("tuesday");
        break;
        case 3 : printf("wednesday");
        break;
        case 4 : printf("thrusday");
        break;
        case 5 : printf("friday");
        break;
        case 6 : printf("saturday");
        break;
        case 7 : printf("sunday");
        break;
        default : printf("not a valid number!! \n");
    }
    return 0;
}
// TO CHECK IF THE GIVEN NUMBER IS POSITIVE OR NEGATIVE ALONG WITH ODD OR EVEN
#include<stdio.h>
int main() {
    int d;
    printf("enter any number: \n");
    scanf("%d", &d);
    if (d>=0){
        printf("the number is positive. \n");
        if (d%2==0){
            printf("the number is even.\n");
        } else {
            printf("the number is odd.\n");
        }
    }
    else if (d<=0){
        printf("the number is negative.\n");
        if (d%2==0){
            printf("the number is even.\n");
        } else {
            printf("the number is odd \n");
        }
    }
    return 0;
}
//TO CHECK IF THE STUDENT IS PASSED OR NOT
#include<stdio.h>
int main() {
    int marks;
    printf("enter your total marks:");
    scanf("%d", &marks);
    (marks>=30)? printf("you are pass!!"):printf("you failed");
    return 0;
}
// CHECK IF THE ENTERED CHARACTER IS AN ALPHABET
#include<stdio.h>
int main() {
   char ch;
   printf("enter any character: ");
   scanf("%c",&ch);
   if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
     printf("the given character is an alphabet"); 
   }
   else{
    printf("the given character isn't an alphabet");
   }
   return 0;
}
// CHECK IF THE ENTERED ALPHABET IS A VOWEL OR CONSONANT
#include<stdio.h>
int main() {
   char ch;
   printf("enter any character: ");
   scanf("%c",&ch);
   if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u')){
     printf("the given character is a vowel"); 
   }
   else if ((ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U')){
    printf("the given character is a vowel");
   }
   else{
    printf("the given character is a consonant");
   }
   return 0;
}
// CHECK IF THE GIVEN YEAR IS A LEAP YEAR OR NOT
#include<stdio.h>
int main() {
   char year;
   printf("enter any year: ");
   scanf("%d",&year);
   if(year%4==0){
     printf("the given year is a leap year"); 
   }
   else{
    printf("the given year isn't a leap year");
   }
   return 0;
}
// ELECTRICITY BILL CALCULATOR
#include<stdio.h>
void main(){
    int unit,bill;
    printf("enter your electricity units: ");
    scanf("%d",&unit);
    if(unit<=0 && unit>=100){
        bill=unit*5;
        printf("your total electricity bill is %d",bill);
    }
    else if(unit>=101 && unit<=200){
        bill= unit*7;
        printf("your total electricity bill is %d",bill);
    }
    else if (unit>=201 && unit<=300){
        bill=unit*10;
        printf("your total electricity bill is %d",bill);
    }
    else{
        bill=unit*12;
        printf("your total electricity bill is %d",bill);
    }
    return 0;
}
// CHECK THE GREATEST AMONG THE 3 ENTERED NUMBER
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    if(a>b && a>c){
         printf("the greatest number is %d",a);
    }
    else if(b>a && b>c){
        if(b>c) printf("the greates number is %d",b);
    }
    else printf("the greatest number is %d",c);
    return 0;
}
// SINGLE SUBJECT GRADE CALCULATOR
#include<stdio.h>
void main(){
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("you scored A grade");
    }
    else if(marks>=80 && marks<90){
        printf("you scored B grade");
    }
    else if(marks>=70 && marks<80){
        printf("you scored C grade");
    }
    else if (marks>=60 && marks<70){
        printf("you have scored D grade");
    }
    else {
        printf("you have failed");
    }
    return 0;
}
// OVERALL RESULT CALCULATOR
#include<stdio.h>
void main(){
    float marks;
    int a,b,c,d,e;
    printf("enter your english marks: ");
    scanf("%d",&a);
    printf("enter your maths marks: ");
    scanf("%d",&b);
    printf("enter your hindi marks: ");
    scanf("%d",&c);
    printf("enter your science marks: ");
    scanf("%d",&d);
    printf("enter your sanskrit marks: ");
    scanf("%d",&e);
    marks=((a+b+c+d+e)/5);
    if (a < 33 || b < 33 || c < 33 || d < 33 || e < 33){
        printf("you have 1 or more subject having marks less than 33");
    }
    else if(marks>=90 && marks<=100){
        printf("you scored A ");
    }
    else if(marks>=80 && marks<90){
        printf("you scored B grade");
    }
    else if(marks>=70 && marks<80){
        printf("you scored C grade");
    }
    else if (marks>=60 && marks<70){
        printf("you have scored D grade");
    }
    else {
        printf("you have failed");
    }
}
// SIMPLE ATM 
#include<stdio.h>
void main(){
    int pin=1234,pin2;
    printf("enter your pin:");
    scanf("%d",&pin2);
    if(pin==pin2){
        printf("1:WITHDRAW\n");
        printf("2:BALANCE\n");
    }
    else{
        printf("invalid pin");
    }
}
// INCOME TAX CALCULATOR
#include<stdio.h>
void main(){
    float tax,sal;
    printf("enter your annual salary: ");
    scanf("%f",&sal);
    if( sal>0 && sal<300000){
        tax=0;
        printf("no tax for you");
    }
    else if(sal>300000 && sal<600000){
        tax=sal*0.05;
        printf("you have to pay 5 percent tax\n");
        printf("you have to pay %f as tax",tax);
    }
    else if(sal>600000 && sal<900000){
         tax=sal*0.1;
         printf("you have to pay 10 percent tax\n");
        printf("you have to pay %f as tax",tax);
    }
    else if(sal>900000 && sal<1200000){
         tax=sal*0.12;
         printf("you have to pay 12 percent tax\n");
        printf("you have to pay %f as tax",tax);
    }
    else{
         tax=sal*0.2;
         printf("you have to pay 20 percent tax\n");
        printf("you have to pay %f as tax",tax);
    }
}
// MOBILE RECHARGE PLAN CHOOSER
#include<stdio.h>
void main(){
    int i;
    printf("enetr any number (1-3):");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("1.5GB/day for 28 days");
        break;
    case 2:
        printf("2GB/day for 56 days");
        break;
    case 3:
        printf("3GB/day for 84 days");
        break;
    default:
       printf("invalid number");
    }
}
// A SIMPLE CALCULATOR(SWITCH CASE)
#include<stdio.h>
void main(){
    int a,b;
    char ch;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter another number:");
    scanf("%d",&b);
    printf("enter the operator you want to perform the operation: ");
    scanf(" %c",&ch);
    switch(ch){
    case '+' : printf("the addition of the given numbers is %d", a+b);
              break;
    case '-' : printf("the substraction of the given number is %d",a-b);
            break;
    case '*' : printf("the product of he given numbers is %d", a*b);
              break;
    case '/' : printf(" the division of the given numbers is %f",a/b);
             break;
    default : printf("invalid operator");          
        }
}