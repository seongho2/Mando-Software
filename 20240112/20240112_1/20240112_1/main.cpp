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
	strcpy(s.name, "�ȼ�ȣ");
	s.grade = 3.1;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2lf\n", s.grade);

	return 0;

}