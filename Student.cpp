#include "Student.h"
#include <iostream>
using namespace std;
//onCreate
Student::Student(int i, int j):j(j) { //�൱��this.j = j
	this->i = i;
	cout << "���췽��" << endl;
}

void Student::setI(int i) {
	this->i = i;
}

//������������ʾ����Ҳ�������޸����еĳ�Ա
void Student::setJ(int j) const{
	//this->j = j;
}

//void Student::test(Student* stu) {
//
//}

//onDestroy
Student::~Student() {
	cout << "��������" << endl;
}