#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student{
    int School_ID;
    char Name[30];
    int Age;
    char Gender;

};

struct Teacher{
    int School_ID;
    char Name[30];
    int Age;
    char Gender;
    char Subject[40];
};

void addStudent(struct Student *student){
    printf("Student School ID:");
    scanf("%d", &student->School_ID);

    printf("Student Name:");
    scanf("%s", student->Name);

    printf("Student Age:");
    scanf("%d", &student->Age);

    printf("Student Gender:");
    scanf(" %c", &student->Gender);
    printf("\n");
}

void addTeacher(struct Teacher *teacher){
    printf("Teacher School ID:");
    fflush(stdout);
    scanf("%d", &teacher->School_ID);
    

    printf("Teacher Name:");
    fflush(stdout);
    scanf("%s", teacher->Name);
    

    printf("Teacher Age:");
    fflush(stdout);
    scanf("%d", &teacher->Age);
    

    printf("Teacher Gender:");
    fflush(stdout);
    scanf(" %c", &teacher->Gender);
    

    printf("Teacher Subject:");
    scanf("%s", teacher->Subject);   
    printf("\n");
};

int main(){
    struct Student student1;
    struct Teacher teacher1;

    addStudent(&student1);
    addTeacher(&teacher1);

    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", student1.School_ID);
    printf("Name: %s\n", student1.Name);
    printf("Age: %d\n", student1.Age);
    printf("Gender: %c\n", student1.Gender);

    printf("\n--- Teacher Information ---\n");
    printf("ID: %d\n", teacher1.School_ID);
    printf("Name: %s\n", teacher1.Name);
    printf("Age: %d\n", teacher1.Age);
    printf("Gender: %c\n", teacher1.Gender);
    printf("Subject: %s\n", teacher1.Subject);
    return 0;
}