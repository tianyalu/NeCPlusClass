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
