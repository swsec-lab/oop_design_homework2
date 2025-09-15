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

void doNamespaceTest(){
    cout << "---------------------------" << endl;
    cout << "Namespace Test" << endl;

    // 정수형 계산기 테스트 
    cout << "[IntCalc] 10 + 3 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10 - 3 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10 * 3 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10 / 3 = " << 0 /*TODO*/ << endl;

    cout << "[IntCalc] 10.5 + 3.2 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10.5 - 3.2 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10.5 * 3.2 = " << 0 /*TODO*/ << endl;
    cout << "[IntCalc] 10.5 / 3.2 = " << 0 /*TODO*/ << endl;


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
void doTest1(){
    cout << "---------------------------" << endl;
    cout << "Test 1" << endl;
    
    printBestStudent();
    printAverage();
    printStudentList(); 
}
void doTest2(){
    cout << "---------------------------" << endl;
    cout << "Test 2" << endl;
    
    StudentStruct charlie("Charlie", 1003, 70, 99.0);


    int idx = -1;
    /* TODO: homework1.cpp의 findStudentByStudentID() 함수 호출을 homework2-2.h의 findStudentByStudentID 함수 선언에 맞춰 수정하기 */
    /*
    idx = findStudentByStudentID(charlie.id);
    */

    if(idx >= 0)
        modifyRecord(students, numOfStudent, charlie);

    /* TODO: homework1.cpp의 addStudent() 함수 호출를 homework2-2.h의 addStudent 함수 선언에 맞춰 수정하기 */
    /*
    addStudent("Ana", 1051, 88, 65);
    addStudent("Suji", 1052, 90, 93);
    addStudent("Zhang", 1053, 100, 40);
    */    

    printBestStudent();
    printAverage();
    printStudentList(); 
}
void doTest3(){
    std::cout << "---------------------------" << std::endl;
    std::cout << "Test 3" << std::endl;
    
    /* TODO: homework1.cpp의 addStudent 함수를 homework2-2.h의 addStudent 함수에 맞춰 수정하기 */
    /*
    deleteStudent(1011);
    deleteStudent(1029);
    */

    printStudentList(); 
}

int main(int argc, char **argv) {

    doNamespaceTest();

    const int MAX_STUDENTS = 100;

    /* FIXME: StudentStruct[MAX_STUDENTS] 메모리 동적 할당 */
    students = nullptr; 

    if(students != nullptr){
        fillStudentRecord(students, &numOfStudent);

        doTest1();
        doTest2();
        doTest3();

        delete[] students;
        numOfStudent = 0;
    }
   
    return 0;
}