#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using std::string;

class Student{
public:
	string name;
	int score;

	bool operator<(const Student &otherStudent) {
		return score < otherStudent.score;
	}

	//ÖØÔØÔËËã·û
	friend std::ostream& operator<<(std::ostream &os, const Student &student) {
		os << "Student:" << student.name << " " << student.score << endl;
		return os;	
	}

	Student(string n, int s) : name(n), score(s) {}
};

#endif  //STUDENT_H
