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
