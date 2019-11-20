#include "Student.h"
#include <iostream>
using namespace std;
//onCreate
Student::Student(int i, int j):j(j) { //相当于this.j = j
	this->i = i;
	cout << "构造方法" << endl;
}

void Student::setI(int i) {
	this->i = i;
}

//常量函数：表示不会也不允许修改类中的成员
void Student::setJ(int j) const{
	//this->j = j;
}

//void Student::test(Student* stu) {
//
//}

//onDestroy
Student::~Student() {
	cout << "析构方法" << endl;
}