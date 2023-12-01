#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;


class Student
{
	private:
		string name;
		int age;
	public:
		Student(string,int);
		Student();
		string getName();
		int getAge();
		void setName(string);
		void setAge(int);
		void display();
};

#endif
