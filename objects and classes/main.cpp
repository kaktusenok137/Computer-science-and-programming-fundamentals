/*
Создайте базу данных, хранящую сведения о сотрудниках – Ф.О.И., величину оклада и занимаемая должность. 
В конструкторе должно происходить инициализация данных. Методы должны выводить данные в порядке возрастания окладов на экран.
*/

#include <iostream>
#include <string>

using namespace std;

const int n = 3;

class Worker 
{
	public:
	
		string m_FIO;
		string m_post;
		double m_salary;

	Worker() {};

	Worker(string FIO, double m_salary, string m_post) 
	{

		this -> m_FIO = FIO;
		this -> m_salary = m_salary;
		this-> m_post = m_post;

	}

	string getFIO()
	{
		return m_FIO;
	}

	double GetSalary() 
	{
		return m_salary;
	}

	string getPost()
	{
		return m_post;
	}
};

int main()
{
	Worker Arr[n];

	Worker obj("Ivanov Vasilii Ivanovich", 15350, "Director");
	Worker obj1("Petrov Leonid Yakovlevich", 5500, "Manager");
	Worker obj2("Smolov Petr Vasil'evich", 9030, "Yurist");

	Arr[0] = obj;
	Arr[1] = obj1;
	Arr[2] = obj2;

	double tempD;
	string tempFIO;

	for (int i = 0; i < n; i++)
	{
		for(int j = i; j < n - 1; ++j) 
			if (Arr[j].m_salary > Arr[j + 1].m_salary) 
			{

				tempD = Arr[j].m_salary;
				Arr[j].m_salary = Arr[j + 1].m_salary;
				Arr[j + 1].m_salary = tempD;

				tempFIO = Arr[j].m_FIO;
				Arr[j].m_FIO = Arr[j + 1].m_FIO;
				Arr[j + 1].m_FIO = tempFIO;

				tempFIO = Arr[j].m_post;
				Arr[j].m_post = Arr[j + 1].m_post;
				Arr[j + 1].m_post = tempFIO;
			}
	}

	for (int i = 0; i < n; i++)
	{
		tempFIO = Arr[i].getFIO();
		cout << tempFIO << endl;
		tempFIO = Arr[i].getPost();
		cout << tempFIO << endl;
		tempD = Arr[i].GetSalary();
		cout << tempD << endl;
	}
}
