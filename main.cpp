#include "hw5.h"

int main(){

	student student1;
	student1 = get_student();
	output_grade(student1);

	cout << "Final Grade: " << compute_grade(student1) << endl;

	return 0;

}
