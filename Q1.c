// Question 1:
// Create a program that validates password strength based on these rules:
//  At least 8 characters long
//  Contains at least one uppercase letter
//  Contains at least one digit
//  Contains at least one special character (!, @, #, $, %)
#include <stdio.h>
#include <string.h>

int minLength(char pass[100]) { 
    if (strlen(pass) >= 8)
        return 1; 
    else {
        printf("Password too short\n");
        return 0; 
    }
}

int upperc(char pass[100]) {
    for(int i = 0; pass[i] != '\0'; i++) {
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            return 1;
    }
    printf("No uppercase letter\n");
    return 0;
}

int checkd(char pass[100]) {
    for(int i = 0; pass[i] != '\0'; i++) {
        if(pass[i] >= '0' && pass[i] <= '9')
            return 1;
    }
    printf("No digit\n");
    return 0;
}

int specialc(char pass[100]) {
    for (int i = 0; pass[i] != '\0'; i++) {
        if (pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%')
            return 1;
    }
    printf("No special character\n");
    return 0;
}

int main() {
    char pass[100];
    printf("Enter password: ");
    scanf("%s", pass);


    if (minLength(pass) && upperc(pass) && checkd(pass) && specialc(pass)) {
        printf("Strong password!\n");
    } else {
        printf("Weak password\n");
    }

    return 0;
}
