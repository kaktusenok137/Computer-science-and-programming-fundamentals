#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

const int k = 8;//количество штук
//описание структуры с именем TRAIN с 3 полями
struct TRAIN 
{
	char dest[30];//пункт назначения
	int number;//номер поезда
	double time;//время отправления
};

int main()
{ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i = 0, j;
	TRAIN timetable[k];
	cout << "Enter: destination number time"<<endl;
	for (int i = 0; i < k; i++)
	{
		cin >> timetable[i].dest>> timetable[i].number >> timetable[i].time;
	}
	//сортировка вставками по алфавиту по названию пунктов назначения
	TRAIN temp;
	for (int i = 1; i < k; i++)
	{
		for (int j = i; j > 0 && (strcmp(timetable[j - 1].dest, timetable[j].dest)) > 0; j--)
		{
			temp = timetable[j];
			timetable[j] = timetable[j - 1];
			timetable[j - 1] = temp;
		}
	}
	cout << "__________Array alphabetically__________" << endl;
	cout << "Destination" << setw(15) << "Number" << setw(15) << "Time" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << timetable[i].dest << setw(15) << timetable[i].number << setw(15) << timetable[i].time << endl;
	}

	//вывод на экран информации о поездах, отправляющихся после введенного с клавиатуры времени;
	double time2;
	bool f = false;
	cout << endl <<  "Enter current time: ";
	cin >> time2;
	cout << endl << "Departing trains" << endl;
	for (int i = 0; i < k; i++)
	{
		if(time2<timetable[i].time)
		{
			cout << timetable[i].dest << setw(15) << timetable[i].number << setw(15) << timetable[i].time << endl;
			f = true;
		}
	}
	if (!f)
		cout << "No trains";
}
