#ifndef STUDENT_MANAGE_H
#define STUDENT_MANAGE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 学生结构体定义
typedef struct {
    char id[20];     // 学号
    char name[50];   // 姓名
    int age;         // 年龄
    float score;     // 成绩
} Student;

// 函数声明（核心功能接口）
void addStudent(Student *stuArr, int *stuCount);    // 添加学生
void deleteStudent(Student *stuArr, int *stuCount); // 删除学生
void queryStudent(Student *stuArr, int stuCount);   // 查询学生
void modifyStudent(Student *stuArr, int stuCount);  // 修改学生信息
void showAllStudents(Student *stuArr, int stuCount);// 显示所有学生

#endif // STUDENT_MANAGE_H
