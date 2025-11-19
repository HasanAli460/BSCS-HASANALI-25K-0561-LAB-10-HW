#include <stdio.h>
#include <string.h>

void encrypt(char message[]) {
    for(int i = 0; message[i] != '\0'; i++) {
        if(message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A' + 3) % 26) + 'A';
        }
        else if(message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a' + 3) % 26) + 'a';
        }
    }
}

void decrypt(char message[]) {
    for(int i = 0; message[i] != '\0'; i++) {
        if(message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A' - 3 + 26) % 26) + 'A';
        }
        else if(message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a' - 3 + 26) % 26) + 'a';
        }
    }
}

int main() {
    char message[100];
    
    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin);
    
    if(message[strlen(message)-1] == '\n') {
        message[strlen(message)-1] = '\0';
    }
    
    char encrypted[100];
    strcpy(encrypted, message);
    
    encrypt(encrypted);
    printf("Encrypted: %s\n", encrypted);
    
    decrypt(encrypted);
    printf("Decrypted: %s\n", encrypted);
    
    return 0;
}