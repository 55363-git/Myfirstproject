#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int age;
    float score;
};

int main(void){
    struct Student s1={"John Doe", 20, 85.5};
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Score: %.2f\n", s1.score);
    return 0;
}