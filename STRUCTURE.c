// TO PRINT DETAILS OF STUDENTS
#include<stdio.h>
struct student{
    int roll;
    char name[30];
    float marks;
};
int main(){
    struct student s[5];
    printf("enter the roll,name and marks of students:");
    for(int i=0;i<5;i++){
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("STUDENTS DETAILS\n");
    for(int i=0;i<5;i++){
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}