#include <iostream>
#include "Student.h"
#include "LinkedList.h"

int main(int argc, char** argv) { 
	Student* student = new Student("name1",22);	
	LinkedList<Student>* l = new LinkedList<Student>();	
	
	cout << l->getLength() << endl;

     
	return 0; 
}
