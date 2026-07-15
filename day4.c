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
*/
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
    return 0;
}