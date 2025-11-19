#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];

    printf("Enter email: ");
    scanf("%s", email);

    char *p = strchr(email, '@');

    if (p == NULL) {
        printf("Invalid email\n");
        return 0;
    }

    p++;

    if (*p == '\0') {
        printf("Invalid email\n");
        return 0;
    }

    strcpy(domain, p);

    printf("Domain: %s\n", domain);
    return 0;
}
