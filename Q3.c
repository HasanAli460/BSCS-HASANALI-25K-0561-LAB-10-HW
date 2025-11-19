// Write a program that counts vowels, consonants, digits, and spaces in a string.

#include<stdio.h>
#include<string.h>

int countchar(char str[200]){
    int chars=0;
    for(int i=0;str[i]!='\0';i++){
       chars++;
    }
    return chars-1;
}

int countv(char str[200]){
    int vowels=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i'  || str[i]=='o'|| str[i]=='u' ||
          str[i]=='A' || str[i]=='E' ||str[i]=='I'  || str[i]=='O'|| str[i]=='U'){
          vowels++;
        }
    }
    return vowels;
}
int countc(char str[200]) {
    int cons = 0;
    for (int i = 0; str[i] != '\0'; i++) {

        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {

            if (!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                  str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')) {

                cons++;
            }
        }
    }
    return cons;
}


int countd(char str[200]){
    int digits=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
    }
    return digits;

}


int countsp(char str[200]){
    int spaces=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            spaces++;
        }
    }
    return spaces;
}

int main(){
    char str[200];
    printf("enter a string : ");

    fgets(str,200,stdin);
    puts(str);

    printf("vowels are %d\n", countv(str));
     printf("consonants are %d\n", countc(str));
      printf("digits  are %d\n", countd(str));
       printf("spaces are %d\n", countsp(str));
        printf("total characters are %d\n", countchar(str));

    return 0;
}