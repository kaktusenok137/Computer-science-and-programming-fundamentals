/*
Создайте базу данных деканата. В ней фиксируются данные о 2 категории студентах: студенты проживающие в общежитии, иногородние студенты не проживающие в общежитии. 
Базовый класс содержит имя и номер зачетной книжки. В информации о студентах проживающих в общежитии содержится информация о номере комнаты. 
В информации о иногородних студентах не проживающих в общежитии содержится информация о районе с которого они приехали. 
Программа должна вводить данные и выводить их на экран.
*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Student_B
{
public:
	string m_name;
	int m_number;

	Student_B() {}
	Student_B(string m_name, int m_number)
	{
		this->m_name = m_name;
		this->m_number = m_number;
	}

	virtual void get_student()
	{
		cout << "Name: " << m_name << "\t Student ID number: " << m_number;
	}
};

class Community : public Student_B
{
protected:
	int m_roomNum;

public:

	Community(string m_name, int m_num, int m_roomNum) :Student_B(m_name, m_num)
	{
		this->m_roomNum = m_roomNum;
	}

	void get_student()
	{
		Student_B::get_student();
		cout << "\t Dorm room number: " << m_roomNum << endl;
	}
};

class Nonresident : public Student_B
{
protected:
	string m_area;

public:

	Nonresident(string m_name, int m_num, string m_area) : Student_B(m_name, m_num)
	{
		this->m_area = m_area;
	}

	void get_student()
	{
		Student_B::get_student();
		cout << "\t Area: " << m_area << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");

	string name, area;
	int num, roomNum;
	int kol = 0;
	int category;
	vector <Student_B *> Students;
	do
	{
		cout << "Какая категория студентов Вас интересует: "
		<< endl << "1 - Cтуденты, проживающие в общежитии"
		<< endl << "2 - Иногородние студенты, не проживающие в общежитии"
		<< endl << "0 - Закончить ввод данных!" << endl;
			cin >> category;

		switch (category)
		{
		case 1: cout << "Введите имя студента: "; cin >> name;
			cout << "№ студенческого билета: "; cin >> num;
			cout << "№ комнаты в общежитии: "; cin >> roomNum;
			Students.push_back(new Community(name, num, roomNum));
			kol++;
			break;

		case 2: cout << "Введите имя студента: "; cin >> name;
			cout << "№ студенческого билета: "; cin >> num;
			cout << "Район, с которого приехал студент: "; cin >> area;
			Students.push_back(new Nonresident(name, num, area));
			kol++;
			break;

		default: break;
		}
	} while (category != 0);

	
	for (int i = 0; i < kol; i++)
	{
		Students[i]->get_student();
	}

	return 0;
}
