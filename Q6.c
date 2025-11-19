#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][5][30] = {
        {"Math", "Physics", "Chemistry", "Biology", ""},
        {"Math", "English", "History", "", ""},
        {"Physics", "Computer Science", "Art", "Music", "Economics"},
        {"Math", "Physics", "", "", ""}
    };
    
    printf("=== STUDENT COURSE REGISTRATION ===\n\n");
    
    printf("1. All Students and Their Courses:\n");
    for(int i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        for(int j = 0; j < 5; j++) {
            if(strlen(courses[i][j]) > 0) {
                printf("%s", courses[i][j]);
                if(j < 4 && strlen(courses[i][j+1]) > 0) {
                    printf(", ");
                }
            }
        }
        printf("\n");
    }
    
    printf("\n2. Find Students Taking a Specific Course:\n");
    char search_course[30];
    printf("Enter course to search: ");
    scanf("%s", search_course);
    
    printf("Students taking %s: ", search_course);
    int found = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            if(strcmp(courses[i][j], search_course) == 0) {
                printf("%s ", students[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found) {
        printf("None");
    }
    printf("\n");
    
    printf("\n3. Overloaded Students (more than 3 courses):\n");
    for(int i = 0; i < 4; i++) {
        int course_count = 0;
        for(int j = 0; j < 5; j++) {
            if(strlen(courses[i][j]) > 0) {
                course_count++;
            }
        }
        if(course_count > 3) {
            printf("%s - %d courses (OVERLOADED!)\n", students[i], course_count);
        }
    }
    
    return 0;
}
