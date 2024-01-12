#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;

	s.number = 202315012;
	strcpy(s.name, "안성호");
	s.grade = 3.1;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2lf\n", s.grade);

	return 0;

}