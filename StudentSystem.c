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
    scanf("%s", student->Name);

    printf("Student Age:");
    scanf("%d", &student->Age);

    printf("Student Gender(1 Male 0 Female):");
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
    

    printf("Teacher Gender(1 Male 0 Female):");
    fflush(stdout);
    scanf(" %c", &teacher->Gender);
    

    printf("Teacher Subject:");
    scanf("%s", teacher->Subject);   
    printf("\n");
};

int main(){
    char gender;

    struct Student student1;
    struct Teacher teacher1;

    addStudent(&student1);
    addTeacher(&teacher1);

    if(student1.Gender==1||teacher1.Gender==1){
        char gender ="Male";
    }
    else{
        char gender ="Female";
    };


    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", student1.School_ID);
    printf("Name: %s\n", student1.Name);
    printf("Age: %d\n", student1.Age);
    printf("Gender: %s\n", &gender);

    printf("\n--- Teacher Information ---\n");
    printf("ID: %d\n", teacher1.School_ID);
    printf("Name: %s\n", teacher1.Name);
    printf("Age: %d\n", teacher1.Age);
    printf("Gender: %c\n", &gender);
    printf("Subject: %s\n", teacher1.Subject);
    return 0;
}