#include <stdio.h>
#include <string.h>

int main(){
    char students[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    
    printf("Student Marks:\n");
    printf("Name\tMarks\n");
    printf("----\t-----\n");
    
    for(int i = 0; i < 5; i++){
        printf("%s\t%d\n", students[i], marks[i]);
    }
    
    int highest_marks = marks[0];
    int highest_index = 0;
    float total = 0;
    
    for(int i = 0; i < 5; i++){
        if(marks[i] > highest_marks){
            highest_marks = marks[i];
            highest_index = i;
        }
        total += marks[i];
    }
    
    float average = total / 5;
    
    printf("\nHighest Scorer: %s with %d marks\n", students[highest_index], highest_marks);
    printf("Average Marks: %.2f\n", average);
    
    return 0;
}