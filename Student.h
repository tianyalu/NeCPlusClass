#pragma once
#ifndef Student_H

#define Student_H
class Student {
	//��Ԫ����:���Է������е�˽�г�Ա�������������������������飨��������Ҫ��¶�����У�
	friend void test(Student*);
	//��Ԫ��:���Է���Ŀ�����˽�г�Ա����������Ҫ��¶�����У�
	friend class Teacher;
	int i;
public:
	Student(int i, int j);
	~Student(); //��������
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

//��Ԫ��
class Teacher {
public:
	void call(Student* s) {
		s->j = 10086;
	}
};

#endif
