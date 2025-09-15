//homework2-2.h
#pragma once

#include <string>

struct StudentRecord {
    float midterm;
    float final;    
    StudentRecord(float midterm, float final): midterm(midterm), final(final) {}
};

// Struct version of Student
struct StudentStruct {
    std::string name;
    int id;
    struct StudentRecord record;
    StudentStruct() : name(""), id(-1), record(0.0f, 0.0f) {}
    StudentStruct (const char *name, int id, float midterm, float final): name(name), id(id), record(midterm, final) {}
};
void fillStudentRecord(StudentStruct *students, int *numbOfStudent);
int findBestStudentInMidterm(StudentStruct* students, int numOfStudent);
int findBestStudentInFinal(StudentStruct* students, int numOfStudent);
int findBestStudent(StudentStruct* students, int numOfStudent);
int findStudentByStudentID(StudentStruct* students, int numOfStudent, int id);
void modifyRecord(StudentStruct *students, int numOfStudent, const StudentStruct& student);

void addStudent(StudentStruct *students, int *numOfStudent, const char* name, int id, float midterm, float final);
void deleteStudent(StudentStruct* students, int *numOfStudent, int id);
float getMidtermAverage(StudentStruct* students, int numOfStudent);
float getFinalAverage(StudentStruct* students, int numOfStudent);
float getTotalAverage(StudentStruct* students, int numOfStudent);
void printStudentInfo(StudentStruct* students, int numOfStudent, int id);