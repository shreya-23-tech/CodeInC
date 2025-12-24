// TO FIND THE NUMBER OF VOWELS IN A STRING
#include<stdio.h>
int countVowels(char str[]){
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]==
        'E'||str[i]=='I'||str[i]=='O'|| str[i]=='U'){
            count++;
        }   
    }
    return count; 
}
int main(){
  char str[40];
  printf("enter a string:");
  fgets(str,40,stdin);
  int vowel=countVowels(str);
  printf("the number of vowels is %d",vowel);
  return 0;
}
// TO COUNT THE NUMBER OF LETTERS/CHARACTERS IN A STRING
#include<stdio.h>
int main(){
    int i,count=0,j;
    char str[40];
    printf("enter any string:");
    fgets(str,40,stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n')
              break;
        count++;
    }
    printf("%d",count);
}
// TO CALCULATE THE FREQUENCY OF VOWEL IN A STRING
#include<stdio.h>
int main(){
    int i,a=0,e=0,I=0,o=0,u=0;
    char str[40];
    printf("enter any string:");
    fgets(str,40,stdin);
    for(i=0;str[i]!='\0';i++){
        switch (str[i])
        {
        case 'a': case 'A': a++; 
            break;
        case'e': case'E': e++;
            break;
        case 'i':case'I': I++;
            break;
        case 'o': case'O': o++;
            break;
        case'u': case 'U': u++;
            break;
        }
    }
    printf("a=%d \n",a);
    printf("e=%d \n",e);
    printf("i=%d \n",I);
    printf("o=%d \n",o);
    printf("u=%d \n",u);
    return 0;
}
// TO CONVERT LOWERCASE/UNICASE STRING INTO UPPERCASE
#include<stdio.h>
int main(){
   char str[40];
   int i;
   printf("enter any string:");
   fgets(str,40,stdin);
   for(i=0;str[i]!='\0';i++){
    if(str[i]>='a' && str[i]<='z')
       str[i]=str[i]-32;
   }
   printf("ASCII %s",str);
}