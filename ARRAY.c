// ARRAY SORTING(BUBBLE SORT)
#include<stdio.h>
int main(){
    int a[4],i,j,x;
    printf("enter 4 numbers");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }    
   for(i=0;i<3;i++){
     for(j=0;j<3-i;j++){
       if(a[j]<a[j+1]){
        x=a[j];
        a[j]=a[j+1];
        a[j+1]=x;
       }
    }
    }
   printf("sorted array:");
   for (i=0;i<4;i++){
    printf("%d \t",a[i]);
   } 
   return 0;  
}
// TO FIND THE SUM OF ALL ARRAY ELEMENTS
#include<stdio.h>
int main(){
    int a[4],i,sum=0;
    printf("enter 4 number:");
    for(i=0;i<4;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<4;i++){
            sum+=a[i];
        }
    printf("the sum of the array numbers is %d",sum);
    return 0;
  }
// TO FIND THE SUM OF ALL EVEN NUMBERS IN AN ARRAY
#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("enter 10 number:");
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            sum+=a[i];
        }
  }
   printf("the sum of even nums in the array numbers is %d",sum);
   return 0;
}
// TO REVERSE AN ARRAY
#include<stdio.h>
int main(){
    int a[4],i,f,sum=0;
    printf("enter 4 number:");
    for(i=0;i<4;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<4/2;i++){
        f=a[i];
        a[i]=a[3-i];
        a[3-i]=f;   
  }
   printf("reverseed arrray is:");
   for(i=0;i<4;i++){
    printf("%d \t",a[i]);
   }
   return 0;
}
// TO FIND THE SUM OF BOTH DIAGONALS SEPARETELY
#include<stdio.h>
int main(){
    int n,i,j,maindag=0,secdag=0;
    printf("enter the order of square matrix:");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of the matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        maindag+=a[i][i];
        secdag+=a[i][n-1-i];
    }
    printf("the sum of 1st diagonal is %d\n", maindag);
    printf("the sum of second diagonal is %d\n",secdag);
    return 0;
}
//TO PRINT MATRIX IN ANTI-CLOCK SPIRAL ORDER
#include<stdio.h>
int main(){
    int arr[10][10],r,c,top,bottom,right,left;
    printf("enter the row and column:");;
    scanf("%d %d",&r,&c);
    top=0;
    bottom=r-1;
    right=c-1;
    left=0;
    printf("enter the values in matrix:");
    for(int i=0;i<r;i++){
        for( int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("anti-clockwise spiral order of the matrix is:");
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",arr[bottom][i]);
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            printf("%d ",arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                printf("%d ",arr[top][i]);
            }
            top++;
        }
        if (left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ",arr[i][left]);
            }
            left++;
        }
    }
return 0;
}
//TO PRINT BORDER ELEMENTS OF A MATRIX
#include<stdio.h>
int main(){
    int arr[10][10],r,c,top,bottom,right,left;
    printf("enter the row and column:");
    scanf("%d %d",&r,&c);
    top=0;
    bottom=r-1;
    right=c-1;
    left=0;
    printf("enter the values in matrix:");
    for(int i=0;i<r;i++){
        for( int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     printf(" THE BOUNDARY ELEMENTS = ");
     for(int i=left;i<=right;i++)
        printf("%d ",arr[top][i]);
     for(int i=top+1;i<=bottom;i++)
        printf("%d ",arr[i][right]);
     if(top<bottom){
         for(int i=right-1;i>=left;i--)
            printf("%d ", arr[bottom][i]);
     }
     if(left<right){
         for(int i=bottom-1;i>top;i--){
             printf("%d ", arr[i][left]);
        }
    }
    return 0;
}
//TO PRINT A MATRIX LAYER-BY-LAYER
#include<stdio.h>
int main(){
    int arr[10][10],r,c,top,bottom,right,left;
    printf("enter the row and column:");;
    scanf("%d %d",&r,&c);
    int layer=1;
    top=0;
    bottom=r-1;
    right=c-1;
    left=0;
    printf("enter the values in matrix:");
    for(int i=0;i<r;i++){
        for( int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    while(top<=bottom && left<=right){
         printf(" layer %d = ",layer);
         for(int i=left;i<=right;i++)
            printf("%d ",arr[top][i]);
         for(int i=top+1;i<=bottom;i++)
            printf("%d ",arr[i][right]);
         if(top<bottom){
             for(int i=right-1;i>=left;i--)
                printf("%d ", arr[bottom][i]);
         }
         if(left<right){
             for(int i=bottom-1;i>top;i--){
                 printf("%d ", arr[i][left]);
        }
    }
    top++;
    bottom--;
    left++;
    right--;
    layer++;
    } 
    return 0;
}
//TO PRINTT A MATRIX ZIG-ZAG ROW-WISE
#include<stdio.h>
int main(){
    int arr[10][10],r,c,i,j,k;
    printf("enter the row and column:");
    scanf("%d %d",&r,&c);
    printf("enter the values in matrix:");
    for(int i=0;i<r;i++){
        for( int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf(" THE ZIG-ZAG MATRIX VALUE (ROW-WISE) = ");
     for(i=0;i<r;i++){
        if(i%2!=0){
            for(j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
     }
     return 0;
    }
//TO PRINT A MATRIX ZIG-ZAG COLUMN-WISE
#include<stdio.h>
int main(){
    int arr[10][10],r,c,i,j,k;
    printf("enter the row and column:");
    scanf("%d %d",&r,&c);
    printf("enter the values in matrix:");
    for(int i=0;i<r;i++){
        for( int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf(" THE ZIG-ZAG MATRIX VALUE (COLUMN-WISE) = ");
     for(i=0;i<c;i++){
        if(i%2!=0){
            for(j=r-1;j>=0;j--){
                printf("%d ",arr[j][i]);
            }
        }
        else{
            for(j=0;j<r;j++){
                printf("%d ",arr[j][i]);
            }
        }
     }
     return 0;
    }