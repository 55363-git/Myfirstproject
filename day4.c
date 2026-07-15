#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int age;
    float score;
};

int main(void){
/*
    struct Student s1={"John Doe", 20, 85.5};
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Score: %.2f\n", s1.score);

    struct Student students[3]={
        {"Alice", 19, 90.0},
        {"Bob", 21, 78.5},
        {"Charlie", 20, 88.0}
    };

    for(int i=0;i<3;i++){
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Score: %.2f\n", students[i].score);
    }

    FILE*fp=fopen("students.txt","w");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    for(int i=0;i<3;i++){
        fprintf(fp,"%s %d %.2f\n", students[i].name, students[i].age, students[i].score);
    }
    printf("Data written to file successfully.\n");
    fclose(fp);
*/
    struct Student readStudents[3];
    FILE*fp=fopen("students.txt","r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    for(int i=0;i<3;i++){
        fscanf(fp,"%s %d %f", readStudents[i].name, &readStudents[i].age, &readStudents[i].score);
    }
    printf("Data read from file:\n");
    for(int i=0;i<3;i++){
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", readStudents[i].name);
        printf("Age: %d\n", readStudents[i].age);
        printf("Score: %.2f\n", readStudents[i].score);
    }
    fclose(fp);
    return 0;
}