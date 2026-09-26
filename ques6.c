#include <stdio.h>
#include <string.h>

typedef struct students
{
    int rollno;
    char name[20];
    float marks;
} stu;

int main()
{
    int number;
    char topper[20];
    
    printf("Enter number of students: ");
    scanf("%d", &number);

    stu class[number];

    for (int i = 0; i < number; i++){
        printf("Enter details of student %d\n", i + 1);
        
        printf("Enter roll number: ");
        scanf("%d", &class[i].rollno);

        printf("Enter name: ");
        scanf("%s", class[i].name);

        printf("Enter marks: ");
        scanf("%f", &class[i].marks);
    }

    int max = class[0].marks;
    for (int i = 0; i < number; i++){
        if (class[i].marks > max){
            max = class[i].marks;
            strcpy(topper, class[i].name);
        }
    }

    for (int i = 0; i < number; i++){
        printf("\nStudent %d\n", i+1);
        printf("Roll no. : %d\n", class[i].rollno);
        printf("Name : %s\n", class[i].name);
        printf("Marks : %.2f\n\n", class[i].marks);
    }

    printf("Highest marks are of %s and are %d", topper , max);   
    return 0;
}
