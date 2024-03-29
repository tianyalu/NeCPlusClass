## NeCPlusClass C++类-常量函数-友元函数-友元类
### 一、说明
#### 1.1 常量函数
表示该函数不会也不允许修改类中的成员。
```c
void Student::setJ(int j) const{
	//this->j = j;
}
```
#### 1.2 友元函数
定义在需要暴露的类中，可以访问类中的私有成员，或做常量函数不能做的事情。
```c
friend void test(Student*);
```
#### 1.3 友元类
定义在需要暴露的类中，可以访问类中的私有成员。
```c
friend class Teacher;
class Teacher {
public:
	void call(Student* s) {
		s->j = 10086;
	}
};
```
### 二、代码
Student.h
```c
#pragma once
#ifndef Student_H

#define Student_H
class Student {
	//友元函数:可以访问类中的私有成员，或做常量函数不能做的事情（定义在需要暴露的类中）
	friend void test(Student*);
	//友元类:可以访问目标类的私有成员（定义在需要暴露的类中）
	friend class Teacher;
	int i;
public:
	Student(int i, int j);
	~Student(); //析构函数
	void setI(int i);
	void setJ(int j) const;
	int getJ() {
		return j;
	}

private:
	int j;

protected:
	int k;

public:
	int l;
};

//友元类
class Teacher {
public:
	void call(Student* s) {
		s->j = 10086;
	}
};

#endif
```
Student.cpp
```c
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

//常量函数：表示该方法不会也不允许修改类中的成员
void Student::setJ(int j) const{
	//this->j = j;
}

//onDestroy
Student::~Student() {
	cout << "析构方法" << endl;
}
```
NeCPlusClass.cpp
```c
#include <iostream>
#include "Student.h"

void test(Student* stu) {
	stu->j = 100;
}

int main()
{
	Student student(10, 20);
	test(&student);
    std::cout << student.getJ() << std::endl;
}
```
