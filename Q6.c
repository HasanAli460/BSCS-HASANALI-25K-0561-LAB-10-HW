#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    
    char alice_courses[4][20] = {"Applied Physics", "Calculus", "English", "Chemistry"};
    char bob_courses[3][20] = {"Calculus", "English", "Islamiat"};
    char charlie_courses[5][20] = {"Applied Physics", "Chemistry", "Biology", "Islamiat", "Calculus"};
    char diana_courses[2][20] = {"Calculus", "Applied Physics"};
    
    int course_counts[4] = {4, 3, 5, 2};
    
    printf("=== STUDENT COURSE REGISTRATION ===\n\n");
    
    printf("1. All Students and Their Courses:\n");
    for(int i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        
        if(i == 0) {
            for(int j = 0; j < 4; j++) {
                printf("%s", alice_courses[j]);
                if(j < 3) printf(", ");
            }
        }
        else if(i == 1) {
            for(int j = 0; j < 3; j++) {
                printf("%s", bob_courses[j]);
                if(j < 2) printf(", ");
            }
        }
        else if(i == 2) {
            for(int j = 0; j < 5; j++) {
                printf("%s", charlie_courses[j]);
                if(j < 4) printf(", ");
            }
        }
        else if(i == 3) {
            for(int j = 0; j < 2; j++) {
                printf("%s", diana_courses[j]);
                if(j < 1) printf(", ");
            }
        }
        printf("\n");
    }
    
    printf("\n2. Find Students Taking a Specific Course:\n");
    char search_course[20];
    printf("Enter course to search: ");
    scanf("%s", search_course);
    
    printf("Students taking %s: ", search_course);
    int found = 0;
    
    for(int j = 0; j < 4; j++) {
        if(strcmp(alice_courses[j], search_course) == 0) {
            printf("Alice ");
            found = 1;
            break;
        }
    }
    
    for(int j = 0; j < 3; j++) {
        if(strcmp(bob_courses[j], search_course) == 0) {
            printf("Bob ");
            found = 1;
            break;
        }
    }
    
    for(int j = 0; j < 5; j++) {
        if(strcmp(charlie_courses[j], search_course) == 0) {
            printf("Charlie ");
            found = 1;
            break;
        }
    }
    
    for(int j = 0; j < 2; j++) {
        if(strcmp(diana_courses[j], search_course) == 0) {
            printf("Diana ");
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("None");
    }
    printf("\n");
    
    printf("\n3. Overloaded Students :\n");
    for(int i = 0; i < 4; i++) {
        if(course_counts[i] > 3) {
            printf("%s - %d courses OVERLOADED!\n", students[i], course_counts[i]);
        }
    }
    
    return 0;
}