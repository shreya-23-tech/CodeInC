// PRINT STATEMENT
#include<stdio.h>
     int main() {
     printf("HELLO WORLD!!");
     return 0;
}
// ADDITION OF TWO USER INPUTED NUMBERS
#include <stdio.h>
int main() {
    printf("hello shreya!!\n");
    int a,b;
    printf("please enter a: ");
    scanf("%d", &a);
    printf("please enter b: ");
    scanf("%d", &b);

    int sum =a+b;
    printf("the given number  is %d \n", a);
    printf("the given number is %d \n", b);
    printf("the given sum: %d \n", sum);
    return 0;
}
// PRODUCT OF TWO USER INPUT NUMBERS(INTEGER ANSWER)
#include <stdio.h>
int main() {
    int a;
    printf("enter the side of square \n");
    scanf("%d", &a);
    printf("the area of given square is %d", a*a);
    return  0;
}
// PRODUCT OF TWO USER INPUT NUMBERS(DECIMAL ANSWER)
#include <stdio.h>
int main() {
    float a;
    printf("enter the side of square \n");
    scanf("%f", &a);
    printf("the area of given square is %f", a*a);
    return  0;
}
// AREA OF CIRCLE WITH USER INPUT RADIUS
#include <stdio.h>
int main() {
    float a;
    printf("enter the radius of circle \n");
    scanf("%f", &a);
    printf("the area of given circle is %f", 3.14*a*a);
    return  0;
}
// NUMBER AND POWER FROM USER
#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    printf("enter the number  \n");
    scanf("%d", &a);
    printf("enter power \n");
    scanf("%d", &b);
    int power = pow(a,b);
    printf("the required answer is %d \n", power);
    return  0;
}
// PERIMETER OF RECTANGLE
#include <stdio.h>
int main() {
    float a,b;
    printf("enter the length of rectangle:");
    scanf("%f",&a);
    printf("enter the breadth of rectangle:");
    scanf("%f",&b);
    printf("the perimeter of the given rectangle is: %f", 2*(a+b));
    return 0;
}
// AVERAGE OF 3 USER INPUT NUMBER
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    printf("the average of three numbers: %d", (a+b+c)/3);
    return 0;
}
// TO FIND IF THE GIVRN NUMBER IS DIVISIBLE BY 2(ANSWER IN BOOLEAN)
#include<stdio.h>
int main() {
    
    int w;
    printf("enter any number: \n");
    scanf("%d",&w);
    printf("%d", w%2==0);
    return 0;
}  
// USE OF AND OPERATOR
int main() {
    int a,b;
    printf("if its monday('1' if yes '0' if no): \n");
    scanf("%d", &a);
    printf("if its snowing(1 for yes 0 for no) \n" );
    scanf("%d",&b);
    printf("%d", a&&b);
    return 0;
}
// TO CHECK WHETHER THE GIVEN NUMBER IS 2-DIGIT OR NOT (ANSWER IN BOOLEAN)
#include<stdio.h>
int main() {
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    printf("%d", (a>9)&& (a<100));
    return 0;
}
// CONDITIONALS
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
}
//ADULT OR NOT (TERNARY STATEMENT)
#include <stdio.h>
int main() {
    int a;
    printf("enter your age: ");
    scanf("%d", &a);
    (a>=18)? printf("you are an adult"): printf("you are not an adult");
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
}
//TO CHECK IF THE STUDENT IS PASSED OR NOT
#include<stdio.h>
int main() {
    int marks;
    printf("enter your marks:");
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
}
// CHECK THE GREATEST AMONG THE 3 ENTERED NUMBER

