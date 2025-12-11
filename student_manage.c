#include "student_manage.h"

// 主函数：菜单驱动程序
int main() {
    Student stuArr[100];  // 最多存储100个学生
    int stuCount = 0;     // 当前学生数量
    int choice;

    while (1) {
        // 菜单界面
        printf("\n===== 学生管理系统 =====\n");
        printf("1. 添加学生\n");
        printf("2. 删除学生\n");
        printf("3. 查询学生\n");
        printf("4. 修改学生信息\n");
        printf("5. 显示所有学生\n");
        printf("0. 退出系统\n");
        printf("========================\n");
        printf("请输入操作选项：");
        scanf("%d", &choice);

        // 选择分支
        switch (choice) {
            case 1:
                addStudent(stuArr, &stuCount);
                break;
            case 2:
                deleteStudent(stuArr, &stuCount);
                break;
            case 3:
                queryStudent(stuArr, stuCount);
                break;
            case 4:
                modifyStudent(stuArr, stuCount);
                break;
            case 5:
                showAllStudents(stuArr, stuCount);
                break;
            case 0:
                printf("退出系统成功！\n");
                exit(0);
            default:
                printf("输入错误，请重新选择！\n");
        }
    }
    return 0;
}

// 空函数骨架（供协作同学实现）
void addStudent(Student *stuArr, int *stuCount) {
   Student s;
   printf("xuehao:");
   scanf("%s",s.id);
   printf("xingming:");
   scanf("%s",s.name);
   printf("nianling:");
   scanf("%d",&s.age);
   printf("chengji:");
   scanf("%f",&s,score);
stuArr[*stuCount]=s;
(*stuCount)++;
 }//周尚霖

void deleteStudent(Student *stuArr, int *stuCount) {
    // TODO：协作同学补充删除学生逻辑
}

void queryStudent(Student *stuArr, int stuCount) {
    // TODO：协作同学补充查询学生逻辑
}

void modifyStudent(Student *stuArr, int stuCount) {
    if (stuCount == 0) {
         printf("暂无学生信息，无法修改！\n");
         return;
     }
     char mId[20];
     printf("请输入要修改的学生学号：");
     scanf("%s", mId);
     int i, flag = 0;
     for (i = 0; i < stuCount; i++) {
         if (strcmp(stuArr[i].id, mId) == 0) {
             printf("请输入新姓名：");
             scanf("%s", stuArr[i].name);
             printf("请输入新年龄：");
             scanf("%d", &stuArr[i].age);
             printf("请输入新成绩：");
             scanf("%f", &stuArr[i].score);
             flag = 1;
             printf("修改学生信息成功！\n");
             break;
         }
     }
     if (!flag) {
         printf("未找到该学号的学生！\n");
     }              //nwg make
}


void showAllStudents(Student *stuArr, int stuCount) {
    // TODO：协作同学补充显示所有学生逻辑
}
