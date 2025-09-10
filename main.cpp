#include <iostream>
#include "homework2-1.h"
#include "homework2-2.h"
using namespace std;

StudentStruct *students = nullptr;
int numOfStudent = 0;

void printBestStudent()
{
    int bestMidtermId = findBestStudentInMidterm(students, numOfStudent);
    int bestFinalId = findBestStudentInFinal(students, numOfStudent);
    int bestTotalId = findBestStudent(students, numOfStudent);

    cout << "Best Midterm Student:\n";
    printStudentInfo(students, numOfStudent, bestMidtermId);

    cout << "Best Final Student:\n";
    printStudentInfo(students, numOfStudent, bestFinalId);

    cout << "Best Total Score Student:\n";
    printStudentInfo(students, numOfStudent, bestTotalId);
}
void printAverage()
{
    int numOfStudent = countNumberOfStudent(numOfStudent);
    float midtermAvg = getMidtermAverage(students, numOfStudent);
    float finalAvg = getFinalAverage(students, numOfStudent);
    float totalAvg = getTotalAverage(students, numOfStudent);

    cout << "# of Student: " << numOfStudent << endl;
    cout << "Midterm Average: " << midtermAvg << endl;
    cout << "Midterm Average: " << finalAvg << endl;;
    cout << "Midterm Average: " << totalAvg << endl;;
}

void printStudentList(){
    for(int id = 1000; id < 1100; ++id){
        printStudentInfo(students, numOfStudent, id);        
    }
}

void doTest1(){
    // 정수형 계산기 테스트 
    cout << "[IntCalc] 10 + 3 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10 - 3 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10 * 3 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10 / 3 = " << 0 /*TODO*/ << endl;

    cout << "[IntCalc] 10.5 + 3.2 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10.5 - 3.2 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10.5 * 3.2 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10.5 / 3.2 = " << 0 /*TODO*/ << endl;


    cout << "-----------------------------" << endl;

    // 실수형 계산기 테스트
    cout << "[FloatCalc] 10 + 3 = " << 0.0f /*TODO*/ << endl;
    cout << "[FloatCalc] 10 - 3 = " << 0.0f /*TODO*/ << endl;
    cout << "[FloatCalc] 10 * 3 = " << 0.0f /*TODO*/ << endl;
    cout << "[FloatCalc] 10 / 3 = " << 0.0f /*TODO*/ << endl;


    cout << "[FloatCalc] 10.5 + 3.2 = " << 0.0f /*TODO*/ << endl;
    cout << "[FloatCalc] 10.5 - 3.2 = " << 0.0f /*TODO*/ << endl;
    cout << "[FloatCalc] 10.5 * 3.2 = " << 0.0f /*TODO*/ << endl;
    cout << "[FloatCalc] 10.5 / 3.2 = " << 0.0f /*TODO*/ << endl;
}
void doTest2(){

    cout << "---------------------------" << endl;
    cout << "Test 1" << endl;
    
    printBestStudent();
    printAverage();
    printStudentList(); 
}
void doTest3(){
    cout << "---------------------------" << endl;
    cout << "Test 2" << endl;
    StudentStruct charlie("Charlie", 1003, 70, 99.0);
    int idx = findStudentByStudentID(students, numOfStudent, charlie.id);

    if(idx >= 0)
        modifyRecord(students, numOfStudent, charlie);

    addStudent(students, &numOfStudent, "Ana", 1051, 88, 65);
    addStudent(students, &numOfStudent, "Suji", 1052, 90, 93);
    addStudent(students, &numOfStudent, "Zhang", 1053, 100, 40);

    printBestStudent();
    printAverage();
    printStudentList(); 
}

int main(int argc, char **argv) {

    doTest1();

    const int MAX_STUDENTS = 100;
    students = new StudentStruct[MAX_STUDENTS];
    fillStudentRecord(students, &numOfStudent);

    doTest2();
    doTest3();

    delete[] students;
    numOfStudent = 0;
   
    return 0;
}