#include<iostream>
#include<time.h>
using namespace std;
struct fio
{
	char * surname;
	char *name;
	char patronymic;
};
struct student {
	fio fio; 
	int *assessmets;
	int *atribute;
	int sum;
};
void generate_name(fio *fio)
{

}
void main()
{
	srand(time(0));
	rand();

	int students_colvo;
	cout << "Пожалуйста введите студента";
	cin >> students_colvo;
	student *students = new student[students_colvo];
	if (students = NULL)
	{
		cout << "Память не выделина ";
	}
	else {
		for (int i = 0;i < students_colvo;i++)
		{
			generate_name(students->fio);

			students->assessmets = new int[10];
			for (int j = 0;j < 10;j++)
			{
				students->assessmets[j] = 1 + rand() % 9;


				students++;

			}
			students -= students_colvo;
		}
	}
}
void check_assessments(student*student)
{
	if (student->sum > 8)
	{
		student->atribute = 5;
	}
	 else if (student->sum > 6 && < 9) {
		student->atribute = 4;
	}
	 else if (student->sum>4&& student ->sum<8)
}
void call_assessments(student *student) {

	for (int i = 0;i < 10;i++)
	{
		student->sum+=student->assessmets[i];
}
	student->sum = student->sum / 10;
}
void generate(fio*fio) {
	fio->name = new char[3];
	fio->patronymic = new char[3];
	fio->surname = new char[3];
		for (int i = 0;i < 3;i++)
		{
			fio->name[i]
		}

}