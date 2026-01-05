#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student{
    int School_ID;
    char Name[30];
    int Age;
    bool Gender;

};

struct Teacher{
    int School_ID;
    char Name[30];
    int Age;
    bool Gender;
    char Subject[40];
};

void addStudent(struct Student *student){
    printf("Student School ID:");
    scanf("%d", &student->School_ID);

    printf("Student Name:");
    scanf("%29s", student->Name);

    printf("Student Age:");
    scanf("%d", &student->Age);

    printf("Student Gender(1 Male 0 Female):");
    scanf("%d", &student->Gender);
    printf("\n");
}

void addTeacher(struct Teacher *teacher){
    printf("Teacher School ID:");
    scanf("%d", &teacher->School_ID);

    printf("Teacher Name:");
    scanf("%29s", teacher->Name);

    printf("Teacher Age:");
    scanf("%d", &teacher->Age);

    printf("Teacher Gender(1 Male 0 Female):");
    scanf("%d", &teacher->Gender);

    printf("Teacher Subject:");
    scanf("%39s", teacher->Subject);
    printf("\n");
}


int main(){
    struct Student student1;
    struct Teacher teacher1;

    addStudent(&student1);
    addTeacher(&teacher1);

    const char *studentGender = student1.Gender ? "Male" : "Female";
    const char *teacherGender = teacher1.Gender ? "Male" : "Female";

    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", student1.School_ID);
    printf("Name: %s\n", student1.Name);
    printf("Age: %d\n", student1.Age);
    printf("Gender: %s\n", studentGender);

    printf("\n--- Teacher Information ---\n");
    printf("ID: %d\n", teacher1.School_ID);
    printf("Name: %s\n", teacher1.Name);
    printf("Age: %d\n", teacher1.Age);
    printf("Gender: %s\n", teacherGender);
    printf("Subject: %s\n", teacher1.Subject);

    return 0;
}