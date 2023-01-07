#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Phonebook.h"
#include <vector>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Phonebook a;
	
	//записали первого абонента
	a.addSubscriber("Антон"); //записали контакт
	a.addHomeNumber(123);    //записали  домашний номер
	a.addWorkNumber(235);    //записали рабочий номер
	a.addMobile(87878);      //записали мобильный номер
	a.addInfo("Друг");       //записали информацию о контакте
	// записали второго абонента
	a.addSubscriber("Валери"); //записали контакт
	a.addHomeNumber(8877);    //записали  домашний номер
	a.addWorkNumber(98877);    //записали рабочий номер
	a.addMobile(87807);      //записали мобильный номер
	a.addInfo("Подруга");      //записали информацию о контакте


	//достали из книжки номера и контакты объектов
	std::cout << a.getSubscriber(0) << " " << a.getHomeNumber(0) << " " << a.getWorkNumber(0) << " " << a.getMobile(0) << " " << a.getInfo(0) << '\n';
	std::cout << a.getSubscriber(1) << " " << a.getHomeNumber(1) << " " << a.getWorkNumber(1) << " " << a.getMobile(1) << " " << a.getInfo(1) << '\n';
	std::cout << "****************************\n";

	a.printAllSubscriber(); //показали все контакты
	a.printAllNumber();    //показали все номера
	std::cout << "****************************\n";

	a.removeHomeNumberByIndex(1); //удалили номер по индексу
	a.removeWorkNumber(235);      //удалили номер по номеру телефона
	a.removeInfo("Друг");          //удалили информацию
	a.removeInfoByIndex(1);        //удалили инфо по индексу
	a.removeSubscriber("Антон");  //удалили контакт

	a.printAllSubscriber(); //показали все контакты
	a.printAllNumber();     //показали все номера
	a.printAllInfo();            //показали всю информацию
}