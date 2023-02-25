#include "hw5.h"

student get_student(){

	student s;
	
	cout << "Enter Student ID: ";
    	cin >> s.id;

    	cout << "Enter Student Name: ";
    	cin >> s.name;

    	cout << "Enter Student Midterm Grade: ";
    	cin >> s.midterm;

    	cout << "Enter Student Final Grade: ";
    	cin >> s.final;

    	cout << "Enter Student Homework Grade (^D to exit input): " << endl;
	
	int score;
	
	while(cin >> score){
		s.hw_grades.push_back(score);
    }
	return s;
}

double compute_grade(const student &s){
	double hw_average;
	double sum;
	double grade;

	hw_average = 0.0;
	sum = 0.0;
	grade = 0.0;

	for(auto hw: s.hw_grades){
		sum += hw;
	}

	hw_average = sum / s.hw_grades.size();

	grade = (hw_average * .4) + (s.midterm * .3) + (s.final * .3);

	return grade;
}


void output_grade(const student &s){
	cout << s.name << " earned on their final: " << s.final << endl;
	cout << s.name << " earned on their midterm: " << s.midterm << endl;

	cout << s.name << " earned on their homeworks: " << endl;
	
	for(auto i: s.hw_grades){
		cout << " " << i;
	}
	
	cout << endl;

}
