#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "hw5.h"


TEST_CASE("Test 1"){

    student s1;
    s1.id = 1234;
    s1.name = "Adrian";
    s1.final = 100;
    s1.midterm = 100;
    s1.hw_grades.push_back(100);
    s1.hw_grades.push_back(90);
    s1.hw_grades.push_back(80);

    CHECK(s1.id == 1234);
    CHECK(s1.name == "Adrian");
    CHECK(s1.final == 100);
    CHECK(s1.midterm == 100);
    
    double score1 = compute_grade(s1);
    CHECK(score1 == 96);

}

TEST_CASE("Test 2"){

    student s2;
    s2.id = 4321;
    s2.name = "Andrew";
    s2.final = 95;
    s2.midterm = 87;
    s2.hw_grades.push_back(75);
    s2.hw_grades.push_back(80);
    s2.hw_grades.push_back(90);

    CHECK(s2.id == 4321);
    CHECK(s2.name == "Andrew");
    CHECK(s2.final == 95);
    CHECK(s2.midterm == 87);

    double score2 = compute_grade(s2);
    CHECK(score2 > 87);
}

TEST_CASE("Test 3"){

    student s3;
    s3.id = 3124;
    s3.name = "Aaron";
    s3.final = 54;
    s3.midterm = 65;
    s3.hw_grades.push_back(44);
    s3.hw_grades.push_back(37);
    s3.hw_grades.push_back(22);

    CHECK(s3.id == 3124);
    CHECK(s3.name == "Aaron");
    CHECK(s3.final == 54);
    CHECK(s3.midterm == 65);
    
    double score3 = compute_grade(s3);
    CHECK(score3 > 49);
}
