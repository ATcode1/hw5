#ifndef HW5_H
#define HW5_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student{
    int id;
    string name;
    int final;
    int midterm;
    vector<int> hw_grades;
};

student get_student();

double compute_grade(const student &s);

void output_grade(const student &s);

#endif
