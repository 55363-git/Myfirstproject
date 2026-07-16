#include <stdio.h>
#include <string.h>
#define MAX 100   // 最多存储100个学生

struct Student {
    char name[20];
    int age;
    float score;
};

struct Student students[MAX];  // 全局数组，所有函数共享
int count = 0;                 // 当前实际学生人数

// ========== 你需要实现的5个函数 ==========
void loadData();       // 从 students.txt 读取数据
void saveData();       // 将数据写入 students.txt
void addStudent();     // 添加学生
void listStudents();   // 显示所有学生
void findStudent();    // 按姓名查找
void deleteStudent();  // 按姓名删除
void modifyScore();    // 按姓名修改分数

// ========== 主菜单（已写死，你不需要改） ==========
int main() {
    loadData();  // 程序启动时自动加载文件
    int choice;
    while (1) {
        printf("\n===== 学生信息管理系统 =====\n");
        printf("1. 添加学生\n");
        printf("2. 显示所有学生\n");
        printf("3. 查找学生\n");
        printf("4. 删除学生\n");
        printf("5. 修改分数\n");
        printf("6. 退出\n");
        printf("请选择：");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: listStudents(); break;
            case 3: findStudent(); break;
            case 4: deleteStudent(); break;
            case 5: modifyScore(); break;
            case 6: saveData(); printf("数据已保存，退出系统\n"); return 0;
            default: printf("无效选择，请重新输入\n");
        }
    }
}

// ========== 以下是函数骨架（你逐个补充） ==========
void loadData() {
    // 打开 students.txt（"r" 模式）
    FILE*file=fopen("students.txt", "r");
    // 如果文件不存在，直接 return（首次运行没有数据）
    if(file==NULL){
        return;
    }
    // 用 fscanf 逐行读取，存入 students 数组，更新 count
    while(fscanf(file, "%s %d %f", students[count].name, &students[count].age, &students[count].score) == 3) {
        count++;
        if(count >= MAX) {
            printf("学生数据已满，无法继续加载\n");
            break;
        }
    }
    fclose(file);
}

void saveData() {
    // 打开 students.txt（"w" 模式）
    FILE*file=fopen("students.txt", "w");
    // 用 fprintf 逐行写入 students 数组中的每个学生
    for(int i=0;i<count;i++){
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].age, students[i].score);
    }
    fclose(file);
}

void addStudent() {
    // 提示输入姓名、年龄、分数
    printf("请输入学生姓名: ");
    scanf("%s", students[count].name);
    printf("请输入学生年龄: ");
    scanf("%d", &students[count].age);
    printf("请输入学生分数: ");
    scanf("%f", &students[count].score);
    // 存入 students[count]，然后 count++
    count++;
    // 提示添加成功
    printf("学生添加成功\n");
}

void listStudents() {
    // 如果 count == 0，提示"暂无学生数据"
    if(count==0){
        printf("暂无学生数据\n");
        return;
    }
    // 否则用 for 循环打印所有学生信息
    printf("学生列表:\n");
    for(int i=0;i<count;i++){
        printf("姓名: %s, 年龄: %d, 分数: %.2f\n", students[i].name, students[i].age, students[i].score);
    }
}

void findStudent() {
    // 提示输入要查找的姓名
    char name[50];
    printf("请输入要查找的学生姓名: ");
    scanf("%s", name);
    // 遍历数组，用 strcmp 比较，找到则打印，找不到则提示
    for(int i=0;i<count;i++){
        if(strcmp(students[i].name, name)==0){
            printf("找到学生: 姓名: %s, 年龄: %d, 分数: %.2f\n", students[i].name, students[i].age, students[i].score);
            return;
        }
    }
    printf("未找到该学生\n");
}

void deleteStudent() {
    // 提示输入要删除的姓名
    char name[50];
    printf("请输入要删除的学生姓名: ");
    scanf("%s", name);
    // 遍历数组，找到后，用后面的人覆盖前面（类似数组删除）
    for(int i=0;i<count;i++){
        if(strcmp(students[i].name, name)==0){
            for(int j=i;j<count-1;j++){
                students[j]=students[j+1];
            }
            count--;
            printf("学生删除成功\n");
            return;
        }
    }
    // 找到则 count--，提示删除成功；找不到则提示
    printf("未找到该学生\n");
}

void modifyScore() {
    // 提示输入要修改的姓名
    char name[50];
    printf("请输入要修改的学生姓名: ");
    scanf("%s", name);
    // 遍历数组，找到后，提示输入新分数并赋值
    for(int i=0;i<count;i++){
        if(strcmp(students[i].name, name)==0){
            printf("找到学生: 姓名: %s, 年龄: %d, 分数: %.2f\n", students[i].name, students[i].age, students[i].score);
            printf("请输入新的分数: ");
            scanf("%f", &students[i].score);
            printf("学生分数修改成功\n");
            return;
        }
    }
    // 找到则提示修改成功；找不到则提示
    printf("未找到该学生\n");
}